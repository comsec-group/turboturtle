import os
import sys
import time
import json
import glob
import glob
import multiprocessing
from pathlib import Path
from tinydb import TinyDB, Query
from tinydb.table import Table
from tqdm import tqdm

# update path so turboturtle_v3 module can be found
sys.path.append(str(Path(__file__).parent.parent))
from turboturtle_v3.pipeline.pipeline import (
    BambuPipeline
)
from turboturtle_v3.pipeline.config import PipelineConfig
from turboturtle_v3.proof_status import ProofStatus
from turboturtle_v3.ttutils import ttcall, create_new_file

NUM_PROCESSES = 4
BACKUP = True
CLEANUP = True
TIMEOUT = 7500.0

Pipeline_T = BambuPipeline


def start_pipeline(pipeline: Pipeline_T):
    try:
        pipeline._setup_workspace()

        pipeline._program_to_file()

        # synth_time_start = time.time()
        # synth_script = self._synth()
        # synth_duration = time.time() - synth_time_start

        # skip synthesis, instead copy HW design from formal run
        hw_rtl_dir = Path(
            f"/data/zdenis/pipelines/run_20250430174538/{pipeline.name}/verif/rtl"
        )
        hw_files = glob.glob(f"{hw_rtl_dir}/*")

        if len(hw_files) == 0:
            raise Exception(f"No HW files exist from formal run: SynthesisException")

        ttcall(["cp", *hw_files, pipeline.verif_rtl_dir])

        pipeline._generate_testbench()

        verilation_time_start = time.time()
        pipeline._setup_verilator()
        verilation_duration = time.time() - verilation_time_start

        # verification_time_start = time.time()
        # proof_status = pipeline._verify_verilator()
        # verification_duration = time.time() - verification_time_start

        verilation_time_start = time.time()

        while True:
            proof_status = pipeline._verify_verilator()

            if proof_status is ProofStatus.CEX:
                break
            elif time.time() - verilation_time_start >= TIMEOUT:
                break

        verification_duration = time.time() - verilation_time_start

        pipeline_result = (
            proof_status,
            0.0,
            verilation_duration,
            verification_duration,
        )
    except Exception as err:
        pipeline_result = str(err)
    finally:
        if pipeline.backup:
            ttcall(["rm", "-rf", f"{pipeline.backup_dir}/{pipeline.name}"])
            ttcall(["cp", "-r", f"{pipeline.working_dir}", f"{pipeline.backup_dir}"])

        if pipeline.cleanup:
            pipeline.do_cleanup()
            ttcall(["rm", "-rf", f"{pipeline.working_dir}"])

        return (
            pipeline.name,
            pipeline.__class__.__name__.replace("Pipeline", "").upper(),
            pipeline_result,
        )


def reconstruct_pipeline(old_pipeline) -> Pipeline_T:
    hls_tool: str = old_pipeline["hls_tool"]
    input_program: str = old_pipeline["c_program"]
    hls_args: list[str] = old_pipeline["hls_args"]

    if hls_tool.startswith("BAMBU"):
        pipeline_cls = BambuPipeline
        hls_args = hls_args[3:]
    else:
        raise Exception(f"Unknown HLS tool: {hls_tool}")

    pipeline_config = PipelineConfig(
        name=old_pipeline["name"],
        top_fn_name="mysecretfunction",
        out_dir=run_path,
        backup_dir=run_backup_dir,
        backup=BACKUP,
        cleanup=CLEANUP,
    )

    pipeline = pipeline_cls(
        input_program=input_program,
        hls_args=hls_args,
        pipeline_config=pipeline_config,
        reset_active_low=False,
    )

    return pipeline


def get_all_pipelines(old_pipeline_table: Table) -> list[Pipeline_T]:
    pipelines: list[Pipeline_T] = []

    for _, old_pipeline in enumerate(old_pipeline_table):
        pipelines.append(reconstruct_pipeline(old_pipeline))

    return pipelines


def get_leftover_pipelines(old_pipeline_table: Table) -> list[Pipeline_T]:
    pipelines: list[Pipeline_T] = []

    formal_cex_pipelines = old_pipeline_table.search(Query().prove_status == "CEX")

    with open("/data/zdenis/pipelines/formal_vs_sim_v5/results.json", "r") as fp:
        sim_results: dict = json.load(fp)

    for formal_cex_pipeline in formal_cex_pipelines:
        sim_pipeline = sim_results.get(formal_cex_pipeline["name"])

        if sim_pipeline["verification_status"] != "CEX":
            pipeline = reconstruct_pipeline(formal_cex_pipeline)
            pipelines.append(pipeline)

    return pipelines


def get_pipeline_report(
    name: str,
    hls_tool: str,
    verification_status: str,
    synth_duration: float,
    elaboration_duration: float,
    verification_duration: float,
    error_msg: str = "",
) -> dict:
    return {
        "name": name,
        "hls_tool": hls_tool,
        "verification_status": verification_status,
        "synth_duration": synth_duration,
        "elaboration_duration": elaboration_duration,
        "verification_duration": verification_duration,
        "error_msg": error_msg,
    }


db_path = Path("/data/zdenis/pipelines/run_20250430174538/db.json")

db = TinyDB(db_path)
old_pipeline_table = db.table("pipelines")

run_name = "formal_vs_sim_leftovers"
run_path = Path(f"/local/home/zdenis/turboturtle_ro/fuzzing/{run_name}")
run_path.mkdir(exist_ok=True)
run_backup_dir = Path(f"/data/zdenis/pipelines/{run_name}")

if BACKUP:
    ttcall(["mkdir", "-p", str(run_backup_dir)])

pipelines = get_leftover_pipelines(old_pipeline_table)
pipeline_results = {}

time_start = time.time()
with multiprocessing.Pool(NUM_PROCESSES) as pool:
    for pipeline_summary in tqdm(
        pool.imap_unordered(start_pipeline, pipelines),
        total=len(pipelines),
    ):
        name, hls_tool, pipeline_result = pipeline_summary

        if type(pipeline_result) is str:
            pipeline_results[name] = get_pipeline_report(
                name, hls_tool, "ERROR", 0.0, 0.0, 0.0, pipeline_result
            )

        else:
            (
                verif_status,
                synth_duration,
                elaboration_duration,
                verification_duration,
            ) = pipeline_result
            if verif_status is ProofStatus.UNDETERMINED:
                status = "UNDETERMINED"
            elif verif_status is ProofStatus.CEX:
                status = "CEX"

            pipeline_results[name] = get_pipeline_report(
                name,
                hls_tool,
                status,
                synth_duration,
                elaboration_duration,
                verification_duration,
            )

run_duration = time.time() - time_start

create_new_file(
    [f"run duration (s): {run_duration}"], Path(f"{run_path}/run_duration.txt")
)

with open(Path(f"{run_path}/results.json"), "w") as fp:
    json.dump(pipeline_results, fp)

if BACKUP:
    ttcall(["cp", f"{run_path}/run_duration.txt", str(run_backup_dir)])
    ttcall(["cp", f"{run_path}/results.json", str(run_backup_dir)])
