import sys
import csv
from pathlib import Path
from tinydb import TinyDB, Query


def get_bound(pipeline_name: str):
    run_name = "_".join(pipeline_name.split("_")[:2])

    report_csv_file = Path(
        f"/data/zdenis/pipelines/{run_name}/{pipeline_name}/verif/report.csv"
    )

    bound = None

    with open(report_csv_file, "r") as report_csv:
        reader = csv.reader(report_csv, delimiter=",")

        for row in reader:
            if row[1] == "no_sidechannel":
                try:
                    bound = int(row[4])
                except:
                    bound = None

    return bound


run_db_file = Path(sys.argv[-1])
db = TinyDB(run_db_file)
pipeline_table = db.table("pipelines")

pipeline = Query()

cexes = pipeline_table.search(pipeline.fragment({"prove_status": "CEX"}))

all_bounds = []

for cex in cexes:
    bound = get_bound(cex["name"])
    if bound is not None:
        all_bounds.append(bound)
    print(cex["name"], cex["hls_tool"], bound)

print(max(all_bounds))
