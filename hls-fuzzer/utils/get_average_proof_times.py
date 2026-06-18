import sys
import csv
from pathlib import Path
from tinydb import TinyDB, Query


def get_time_to(pipeline_name: str):
    run_name = "_".join(pipeline_name.split("_")[:2])

    report_csv_file = Path(
        f"/data/zdenis/pipelines/{run_name}/{pipeline_name}/verif/report.csv"
    )

    time = None

    with open(report_csv_file, "r") as report_csv:
        reader = csv.reader(report_csv, delimiter=",")

        for row in reader:
            if row[1] == "no_sidechannel":
                time_str = row[5]
                time = float(time_str.split(" ")[0])

    return time


run_db_file = Path(sys.argv[-1])
db = TinyDB(run_db_file)
pipeline_table = db.table("pipelines")

pipeline = Query()

for status in ["PROVEN", "CEX"]:
    cexes = pipeline_table.search(pipeline.fragment({"prove_status": status}))

    num_cexes = 0
    average_time_to_cex = 0.0

    max_time_to_cex = 0.0

    max_time_to_cex_bambu = 0.0

    for cex in cexes:
        # print(cex["name"], cex["hls_tool"])

        time_to_cex = get_time_to(cex["name"])

        if not time_to_cex is None:
            if time_to_cex > max_time_to_cex:
                max_time_to_cex = time_to_cex

            if cex["hls_tool"] == "BAMBU_2024_10":
                if time_to_cex > max_time_to_cex_bambu:
                    max_time_to_cex_bambu = time_to_cex

            average_time_to_cex += time_to_cex
            num_cexes += 1

    average_time_to_cex = average_time_to_cex / num_cexes

    print(f"total {status}:", num_cexes)
    print(f"average time to {status}:", average_time_to_cex)
    print(f"max time to {status}:", max_time_to_cex)
    print(f"max time to {status} bambu:", max_time_to_cex_bambu)
