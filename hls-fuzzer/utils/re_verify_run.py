import os
import sys
import json
import time
import shutil
import random
import subprocess
import multiprocessing

from pathlib import Path
from rich.progress import Progress

sys.path.append(str(Path(__file__).parent.parent))


MAX_VERIF_DURATION = 60 * 60
SIM_RESTARTS = 5000
N_PROCESSES = 22
T_ResultsDict = dict[str, tuple[str, float]]
T_Workload = tuple[str, Path, Path, Path]


def write_results(results: T_ResultsDict, results_file: Path):
    with open(results_file, "w") as fp:
        json.dump(results, fp)


def re_verify(input: T_Workload) -> tuple[str, str, float]:
    # copy verif dir from /data into working dir
    pipeline_name, old_pipeline_dir, new_pipeline_dir, backup_pipeline_dir = input

    if new_pipeline_dir.exists():
        shutil.rmtree(new_pipeline_dir)

    shutil.copytree(old_pipeline_dir, new_pipeline_dir)

    ts_found = False
    can_finish = False
    timeout = False

    verif_duration = time.time()
    try:
        for _, seed in enumerate(random.sample(range(1, 2147483648), SIM_RESTARTS)):
            # re-launch synthesis script
            cproc = subprocess.run(
                f"cd {new_pipeline_dir}/verif/sim && ./obj_dir/Vtb {seed}",
                shell=True,
                capture_output=True,
            )

            stdout_lines = cproc.stdout.decode().splitlines()

            # parse stdout for timing side-channel
            for line in stdout_lines:
                if line.startswith("[bug-ts]"):
                    ts_found = True
                elif line.startswith("[error-timeout]"):
                    timeout = True
                elif line.startswith("[success-finish]"):
                    can_finish = True

            if ts_found:
                break

            partial_verif_duration = time.time() - verif_duration

            if partial_verif_duration > MAX_VERIF_DURATION:
                break

    except Exception as _:
        test_status = "ERROR"
        verif_duration = 0.0
    else:
        verif_duration = time.time() - verif_duration
        if ts_found:
            test_status = "CEX"
        else:
            if timeout and not can_finish:
                test_status = "TIMEOUT"
            else:
                test_status = "UNDETERMINED"

    # backup
    shutil.copytree(new_pipeline_dir, backup_pipeline_dir)

    # cleanup
    shutil.rmtree(new_pipeline_dir)

    return pipeline_name, test_status, verif_duration


fuzzing_dir = Path("/home/zdenis/turboturtle/fuzzing")
runs_dir = Path("/data/zdenis/pipelines")
backup_dir = Path("/data/zdenis/re_verif")

os.mkdir(backup_dir)

run_names = [
    # --
    "run_20250928105020",
    "run_20250929074525",
    "run_20250929213242",
    "run_20250930072246",
    "run_20250930221923",
    "run_20251001072551",
    # # --
    "run_20251001175416",
    "run_20251001182346",
    "run_20251001185321",
    "run_20251001194849",
    "run_20251002022930",
    "run_20251002115513",
    "run_20251003132521",
    "run_20251003090906",
    "run_20251003070805",
    "run_20251003063015",
    "run_20251003033649",
    "run_20251002184546",
    "run_20251003163629",
    "run_20251003212238",
    # 1000+
    "run_20251008232137",  # config_0
    "run_20251015100113",  # config_1
    # "run_20251010055336" # config_2 (crash...)
    "run_20251020215408",  # config_2 (new)
    "run_20251013172242",  # config_3 (part.)
    "run_20251005174657",  # config_4
    "run_20251007091617",  # config_5
]

workloads: list[T_Workload] = []

for run_name in run_names:
    run_dir = Path(f"{runs_dir}/{run_name}")
    reports_file = Path(f"{run_dir}/reports.json")

    with open(reports_file, "r") as fp:
        reports = json.load(fp)

        for report in reports:
            name = report["name"]
            status = report["pipeline_report"]["proof_status"]
            old_pipeline_dir = Path(f"{run_dir}/{name}")

            if status in ["CEX", "UNDETERMINED", "TIMEOUT"]:
                simulator = report["pipeline_report"]["simulator"]

                if simulator != "verilator":
                    print(simulator)
                    continue

                new_pipeline_dir = Path(f"{fuzzing_dir}/{name}")
                backup_pipeline_dir = Path(f"{backup_dir}/{name}")

                workloads.append(
                    (name, old_pipeline_dir, new_pipeline_dir, backup_pipeline_dir)
                )


results: T_ResultsDict = {}
results_file = Path("fuzzing/re_verif_results.json")

if results_file.exists():
    shutil.copyfile(results_file, Path(f"{results_file}_bak"))

with Progress() as progress:
    task = progress.add_task("re-verifying:", total=len(workloads))

    with multiprocessing.Pool(N_PROCESSES) as pool:
        for result in pool.imap_unordered(re_verify, workloads):
            pipeline_name, test_status, verif_duration = result
            results[pipeline_name] = (test_status, verif_duration)

            write_results(results, results_file)

            progress.advance(task)

shutil.copy(results_file, backup_dir)
