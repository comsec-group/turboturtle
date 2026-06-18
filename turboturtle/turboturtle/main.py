import time
import rich

# import rich.pretty
import rich.spinner
import rich.live
import copy
import json

# import pickle
import shutil
import random

from pathlib import Path
from datetime import datetime
from multiprocessing import Pool, TimeoutError

from turboturtle.hls.design import Design, get_design_types
from turboturtle.pipeline.config import PipelineConfig
from turboturtle.cturtle.program import Program
from turboturtle.cturtle.strategy import DataflowStrategy, GenerationStrategy
from turboturtle.report import DesignReport
from turboturtle.config import CONFIG
from turboturtle.ttutils import SIM_REPEATS, TIMEOUT_SECONDS, SIM_TIMEOUT_NS


def start_design(design: Design):
    return design.start_new()


def generate_program(top_fn_name: str) -> Program:
    if CONFIG.shuffle_strategies:
        generation_strategy = random.choice(list(GenerationStrategy))
        data_flow_strategy = random.choice(list(DataflowStrategy))
    else:
        generation_strategy = CONFIG.generation_strategy
        data_flow_strategy = CONFIG.dataflow_strategy

    return Program(
        generation_strategy=generation_strategy,
        data_flow_strategy=data_flow_strategy,
        top_fn_name=top_fn_name,
    )

def generate_programs(num_designs, top_fn_name, design_types, depth = 0) -> None:
    if depth > CONFIG.proggen_max_retries:
        raise TimeoutError("Maximum program generation retries exceeded.")
    spinner_proggen = rich.spinner.Spinner("dots", f"proggen... (0/{num_designs})")
    programs: list[Program] = []
    with rich.live.Live(spinner_proggen, transient=True) as live:
        i = 0
        with Pool(CONFIG.num_processes_proggen) as pool:
            try:
                program_gens = [
                    pool.apply_async(generate_program, args=(top_fn_name,))
                    for _ in range(num_designs)
                ]
                for p in program_gens:
                    program = p.get(timeout=CONFIG.proggen_timeout_s)
                    programs.append(program)
                    live.update(
                        rich.spinner.Spinner(
                            "dots",
                            f"proggen... ({i + 1}/{num_designs * len(design_types)})",
                        )
                    )
                    i += 1
            except TimeoutError:
                print("Program generation timed out.", flush=True)
    print("Generated", len(programs), "programs.", flush=True)
    if (len(programs) < num_designs):
        programs = programs + generate_programs(num_designs - len(programs), top_fn_name, design_types, depth + 1)
    return programs

def gogo() -> None:
    backup = CONFIG.backup
    cleanup = CONFIG.cleanup
    design_types = get_design_types(CONFIG.design_types)
    num_designs = CONFIG.num_designs
    working_dir = CONFIG.working_dir
    backup_dir = CONFIG.backup_dir
    top_fn_name = CONFIG.top_fn_name
    num_processes = CONFIG.num_processes
    config_file = CONFIG.config_file

    designs: list[Design] = []
    reports: list[DesignReport] = []

    run_duration = time.time()

    spinner_fuzzing = rich.spinner.Spinner(
        "dots", f"fuzzing... (0/{num_designs * len(design_types)})"
    )

    now = datetime.now()
    now_str = now.strftime("%Y%m%d%H%M%S")
    run_name = f"run_{now_str}"
    out_dir = Path(f"{working_dir}/{run_name}")
    out_dir.mkdir()

    backup_dir = Path(f"{backup_dir}/{run_name}")
    if backup:
        backup_dir.mkdir()

    programs = generate_programs(num_designs, top_fn_name, design_types)

    i = 0
    for c_program in programs:
        for design_type in design_types:
            name = f"{run_name}_design_{str(i).zfill(4)}"

            pipeline_config = PipelineConfig(
                name=name,
                top_fn_name=top_fn_name,
                out_dir=out_dir,
                backup_dir=backup_dir,
                backup=backup,
                cleanup=cleanup,
            )

            designs.append(
                design_type(
                    c_program=copy.deepcopy(c_program),
                    pipeline_config=pipeline_config,
                    disable_reduction=CONFIG.disable_reduction,
                )
            )
            i += 1

    if backup:
        output_dirs = [out_dir, backup_dir]
    else:
        output_dirs = [out_dir]

    for output_dir in output_dirs:
        with open(Path(f"{output_dir}/reports.json"), "w") as fp:
            json.dump([], fp)

        shutil.copy(config_file, output_dir)

    with rich.live.Live(spinner_fuzzing, transient=True) as live:
        with Pool(num_processes) as pool:
            i = 0
            for report in pool.imap_unordered(start_design, designs):
                live.update(
                    rich.spinner.Spinner(
                        "dots",
                        f"fuzzing... ({i + 1}/{num_designs * len(design_types)})",
                    )
                )

                for output_dir in output_dirs:
                    with open(Path(f"{output_dir}/reports.json"), "r") as fp:
                        dict_reports = json.load(fp)

                    dict_reports.append(report.as_dict())

                    with open(Path(f"{output_dir}/reports.json"), "w") as fp:
                        json.dump(dict_reports, fp)

                print(report.name, "-->", report.pipeline_report.test_status, flush=True)

                reports.append(report)
                i += 1

    run_duration = time.time() - run_duration
    run_info: dict[str, str | float] = {
        "name": run_name,
        "duration": run_duration,
        "sim_repeats": SIM_REPEATS,
        "subprocess_timeout_s": TIMEOUT_SECONDS,
        "sim_timeout_ns": SIM_TIMEOUT_NS,
    }

    for output_dir in output_dirs:
        with open(Path(f"{output_dir}/run_info.json"), "w") as fp:
            json.dump(run_info, fp)
