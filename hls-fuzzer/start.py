import argparse
import glob
import time
import json
import random
import itertools
import subprocess
import multiprocessing
import collections

from pathlib import Path
from typing import Any
from rich.progress import Progress

from turboturtle import main
from turboturtle.config import CONFIG

# from turboturtle_v3.cturtle_v2.program import Program
from turboturtle.cturtle.program import Program
from turboturtle.cturtle.strategy import GenerationStrategy, DataflowStrategy
from turboturtle.pipeline.pipeline import BambuPipeline, DynamaticPipeline
from turboturtle.pipeline.config import PipelineConfig
from turboturtle.cturtle.identifier_database import IdentifierDatabase
import shutil

def run_pipeline(pipeline_restarts: int, pipeline: Any, design_name: str):
    test_status = []
    for i in range(pipeline_restarts):
        try:
            report = pipeline.start()
            with open(f"{CONFIG.working_dir}/{design_name}/report.json", "w") as fp:
                json.dump(report.as_dict(), fp)
                print("start.py, test status: ", report.test_status.name)
                test_status.append(report.test_status.name)
        except Exception as exception:
            print("start.py, test status: ERROR")
            test_status.append("ERROR")

            log_dir = Path(f"{CONFIG.working_dir}/{design_name}/logs")

            if not log_dir.exists():
                log_dir.mkdir(parents=True)

            with open(Path(f"{log_dir}/error.log"), "w") as fp:
                fp.write(str(exception))

        source_dir = Path(f"{CONFIG.working_dir}/{design_name}")
        dest_dir = Path(f"{CONFIG.working_dir}/{design_name}_{i}")
        if dest_dir.exists():
            shutil.rmtree(str(dest_dir))
        if source_dir.exists():
            shutil.move(str(source_dir), str(dest_dir))

    for s in test_status:
        print("Pipeline test status: ", s)

def main_cli():
    parser = argparse.ArgumentParser(
        description="TurboTurtle HLS Fuzzer - High-Level Synthesis testing tool",
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )

    # We only explicitly parse the core positional arguments. Any additional
    # arguments (e.g. random HLS flags like --pipelining) are left in
    # unknown_args and forwarded as-is via hls_args.
    parser.add_argument(
        "mode",
        nargs="?",
        default="",
        choices=[
            "generate-program",
            "custom-program",
            "custom-program-bambu",
            "custom-program-dynamatic",
            "multi-config",
            "measure-proggen",
            ""
        ],
        help="Operation mode to run",
    )

    parser.add_argument(
        "input_program",
        nargs="?",
        help="Path to input program file (for custom-program modes)",
    )

    parser.add_argument(
        "design_name",
        nargs="?",
        help="Design name (for custom-program modes)",
    )

    parser.add_argument(
        "--pipeline-restarts",
        dest="pipeline_restarts",
        type=int,
        default=1,
        help="Number of times to retry the HLS and verification flow.",
    )

    parser.add_argument(
        "--config",
        dest="config_path",
        type=str,
        default="config.toml",
        help="Path to config file (default: config.toml)",
    )

    args, unknown_args = parser.parse_known_args()
    # Trailing args like `--pipelining --arg2` will now be available here.
    args.hls_args = unknown_args
    mode = args.mode

    if mode == "generate-program":

        def save_and_check(program: Program):
            with open("test.c", "w") as fp:
                fp.write(program.render())

            cproc = subprocess.run(
                ["gcc", "-std=c99", "-c", "test.c", "-o", "test.o"], capture_output=True
            )

            print(cproc.stdout.decode())
            print(cproc.stderr.decode())

        CONFIG.load(Path(args.config_path))
        if CONFIG.shuffle_strategies:
            generation_strategy = random.choice(list(GenerationStrategy))
            dataflow_strategy = random.choice(list(DataflowStrategy))
        else:
            generation_strategy = CONFIG.generation_strategy
            dataflow_strategy = CONFIG.dataflow_strategy

        program = Program(
            generation_strategy=generation_strategy, data_flow_strategy=dataflow_strategy
        )
        print(program.generation_strategy, program.data_flow_strategy)
        save_and_check(program)
        print(program.render())

        # reduce_head = True
        # while True:
        #     if reduce_head:
        #         print("reduce head")
        #         can_reduce = program.reduce_head()
        #         save_and_check(program)
        #         print(program.render())
        #         reduce_head = False
        #     else:
        #         print("reduce tail")
        #         can_reduce = program.reduce_tail()
        #         save_and_check(program)
        #         print(program.render())
        #         reduce_head = True

        #     if not can_reduce:
        #         break

        # program.cleanup_unassigned_decls()
        # save_and_check(program)
        # print(program.render())

    elif mode == "custom-program":
        if not args.input_program or not args.design_name:
            raise Exception("No input program and no design name specified.")

        CONFIG.load(Path(args.config_path))

        with open(Path(args.input_program), "r") as fp:
            input_program = fp.read()

        design_name = args.design_name

        pipeline_config = PipelineConfig(
            name=design_name,
            top_fn_name=CONFIG.top_fn_name,
            out_dir=CONFIG.working_dir,
            backup_dir=Path(f"{CONFIG.backup_dir}/{design_name}"),
            backup=CONFIG.backup,
            cleanup=CONFIG.cleanup,
        )

        hls_args = args.hls_args if args.hls_args else []

        pipeline = BambuPipeline(
            input_program=input_program,
            hls_args=hls_args,
            reset_active_low=True,
            pipeline_config=pipeline_config,
        )

        try:
            report = pipeline.start()
            print(report.test_status.name)
        except Exception as exception:
            log_dir = Path(f"{CONFIG.working_dir}/{design_name}/logs")

            print("ERROR")

            if not log_dir.exists():
                log_dir.mkdir(parents=True)

            with open(Path(f"{log_dir}/error.log"), "w") as fp:
                fp.write(str(exception))


    elif mode == "custom-program-bambu" or mode == "custom-program-dynamatic":
        if not args.input_program or not args.design_name:
            raise Exception("No input program and no design name specified.")

        CONFIG.load(Path(args.config_path))

        with open(Path(args.input_program), "r") as fp:
            input_program = fp.read()

        design_name = args.design_name

        pipeline_config = PipelineConfig(
            name=design_name,
            top_fn_name=CONFIG.top_fn_name,
            out_dir=CONFIG.working_dir,
            backup_dir=Path(f"{CONFIG.backup_dir}/{design_name}"),
            backup=CONFIG.backup,
            cleanup=CONFIG.cleanup,
        )

        hls_args = args.hls_args if args.hls_args else []

        pipeline = None
        if mode == "custom-program-bambu":
            pipeline = BambuPipeline(
                input_program=input_program,
                hls_args=hls_args,
                reset_active_low=True,
                pipeline_config=pipeline_config,
            )

        if mode == "custom-program-dynamatic":
            indent = "  "

            c_program = input_program
            c_program += "\n"

            if not "CALL_KERNEL" in c_program:
                main_func = [
                    "#include <stdlib.h>",
                    # "#include <stdint.h>",
                    '#include "dynamatic/Integration.h"',
                    "int main() {",
                    indent + f"uint64_t var_0 = (uint64_t) rand();",
                    indent + f"uint64_t var_1 = (uint64_t) rand();",
                    indent + f"uint64_t var_0_secret = (uint64_t) rand();",
                    indent + f"uint64_t var_1_secret = (uint64_t) rand();",
                    indent
                    + "CALL_KERNEL"
                    + "("
                    + design_name
                    + ","
                    + "var_0, var_1, var_0_secret, var_1_secret"
                    + ");",
                    indent + "return 0;",
                    "}\n",
                ]
                c_program += "\n".join(main_func)

            pipeline = DynamaticPipeline(
                input_program=c_program,
                hls_args=hls_args,
                reset_active_low=False,
                pipeline_config=pipeline_config,
            )

        run_pipeline(args.pipeline_restarts, pipeline, design_name)


    elif mode == "multi-config":
        for config_file in glob.glob("configs/*.toml"):
            print(f"Working on config {config_file}...")
            CONFIG.load(Path(config_file))
            main.gogo()

    elif mode == "measure-proggen":

        def measure(
            input: tuple[GenerationStrategy, DataflowStrategy, int, int],
        ) -> tuple[GenerationStrategy, DataflowStrategy, int, int, float]:
            pgs, dfs, pg_len, i = input

            CONFIG.generation_strategy = pgs
            CONFIG.dataflow_strategy = dfs
            CONFIG.max_num_statements = pg_len
            CONFIG.min_num_statements = pg_len

            proggen_dur = time.time()
            _ = Program("myfunc")
            proggen_dur = time.time() - proggen_dur

            return pgs, dfs, pg_len, i, proggen_dur

        def recursively_default_dict() -> dict[Any, Any]:
            return collections.defaultdict(recursively_default_dict)

        CONFIG.load(Path(args.config_path))

        proggen_durs_results = recursively_default_dict()

        proglens = [1, 10, 100, 1000]

        num_workloads = len(
            list(
                itertools.product(
                    GenerationStrategy,
                    DataflowStrategy,
                    proglens,
                    range(5),
                )
            )
        )
        workloads = itertools.product(
            GenerationStrategy, DataflowStrategy, proglens, range(5)
        )

        with Progress() as progress:
            task = progress.add_task("re-verifying:", total=num_workloads)
            with multiprocessing.Pool(CONFIG.num_processes_proggen) as pool:
                for result in pool.imap_unordered(measure, workloads):
                    pgs, dfs, pg_len, i, dur = result
                    proggen_durs_results[f"{pgs.name}_{dfs.name}"][str(pg_len)][str(i)] = (
                        dur
                    )
                    progress.advance(task)

        with open(Path("proggen_durs_results.json"), "w") as fp:
            json.dump(proggen_durs_results, fp)


    else:
        CONFIG.load(Path(args.config_path))
        main.gogo()


if __name__ == "__main__":
    main_cli()
