import sys
import csv
import json
from pathlib import Path

from tinydb import TinyDB
from tinydb import Query

sys.path.append(str(Path(__file__).resolve().parent.parent))

from dataset_paths import pipelines_root, run_path

json_file = pipelines_root() / "formal_vs_sim_1" / "results.json"
formal_run_db_path = run_path("run_20250430174538") / "db.json"

db = TinyDB(formal_run_db_path)
query = Query()
old_pipeline_table = db.table("pipelines")

with open(json_file, "r") as fp:
    results: dict = json.load(fp)

num_err = 0
num_cex = 0
num_undet = 0
num_timeout = 0

total_verification_duration: float = 0.0
max_verification_duration: float = list(results.values())[0]["verification_duration"]
min_verification_duration: float = list(results.values())[0]["verification_duration"]

count_cex_vs_timeout = 0
count_cex_vs_undetermined = 0

total_sim = 21600.0
total_formal = 21600.0

formal_stop = False
sim_stop = False

stop_counter = 0

with open("formal_vs_sim.csv", "w") as fp:
    csv_writer = csv.writer(fp)
    csv_writer.writerow(["Sim-Name", "Sim-Status", "Formal-Name", "Formal-Status"])

    for name, result in results.items():
        status = result["verification_status"]

        formal_pipeline = old_pipeline_table.get(query.name == result["name"])

        csv_file = run_path("run_20250430174538") / result["name"] / "verif" / "report.csv"

        formal_time = 0.0
        if csv_file.exists():
            with open(csv_file, "r") as formal_fp:
                csv_reader = csv.reader(formal_fp)

                for i, row in enumerate(csv_reader):
                    if i == 1:
                        formal_time = row[5]
                        formal_time = formal_time.replace("s", "").strip()
        else:
            print("csv file missing")

        # print("")
        # print(formal_pipeline)

        if result["verification_duration"] == 0.0 or formal_time == 0.0:
            continue
        else:
            print(stop_counter, result["verification_duration"], formal_time)
            total_formal -= float(formal_time)
            total_sim -= float(result["verification_duration"])

            if total_formal < 0 and not formal_stop:
                print("formal stop at", stop_counter)
                formal_stop = True

            if total_sim < 0 and not sim_stop:
                print("sim stop at", stop_counter)
                sim_stop = True

            stop_counter += 1

            csv_writer.writerow(
                [
                    name,
                    result["verification_status"],
                    result["verification_duration"],
                    result["error_msg"],
                    formal_pipeline["name"],
                    formal_pipeline["prove_status"],
                    formal_pipeline["error_message"],
                ]
            )

        if sim_stop and formal_stop:
            break
