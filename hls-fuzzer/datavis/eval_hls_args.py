import json
from pprint import pprint
from collections import defaultdict
from pathlib import Path

# base_dir = Path("/data/zdenis/pipelines")
base_dir = Path("/local/home/zdenis/turboturtle_ro/fuzzing")
run_name = "run_20251021224047"
run_dir = Path(f"{base_dir}/{run_name}")


with open(f"{run_dir}/reports.json", "r") as fp:
    reports = json.load(fp)

fail_reports = list(
    filter(lambda r: r["pipeline_report"]["proof_status"] == "FAIL", reports)
)

for report in fail_reports:
    pprint(report["name"])
    pprint(report["reduced_program_report"]["num_statements"])
    # pprint(report["reduced_program_report"]["statements"])
    # pprint(report["argument_effect_map"])
    # pprint(report["argument_effect_status_map"])
