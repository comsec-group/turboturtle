import sys

from pathlib import Path
from tinydb import TinyDB, Query

run_db_file = Path(sys.argv[-1])
db = TinyDB(run_db_file)

run_table = db.table("runs")
pipeline_table = db.table("pipelines")
query = Query()

cexes = pipeline_table.search(
    query.fragment({"hls_tool": "BAMBU_2024_10", "prove_status": "CEX"})
)

spec_cexes = []
non_spec_cexes = []

for cex in cexes:
    is_ct_input = True
    for fuzzer_arg in cex["fuzzer_args"]:
        if fuzzer_arg == "--secret-conditionals":
            is_ct_input = False
        # if fuzzer_arg == "--linearization":
        #     is_ct_input = False
        elif fuzzer_arg.startswith("--datatypes=") or fuzzer_arg.startswith(
            "--operations="
        ):
            if "div" in fuzzer_arg or "mod" in fuzzer_arg:
                is_ct_input = False

    if not is_ct_input:
        continue

    print(cex["name"])
    print(cex["fuzzer_args"])
    print(cex["hls_args"])
    print("")

    for hls_arg in cex["hls_args"]:
        if hls_arg == "--speculative-sdc-scheduling":
            spec_cexes.append(cex["name"])
        elif "--parametric-list-based" in hls_arg:
            non_spec_cexes.append(cex["name"])

print(len(spec_cexes))
print(len(non_spec_cexes))
