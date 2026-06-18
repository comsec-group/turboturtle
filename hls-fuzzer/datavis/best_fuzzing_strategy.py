import sys
import json
import glob
import tomli

from typing import Any
from pathlib import Path

import matplotlib.pyplot as plt
import numpy as np

sys.path.append(str(Path(__file__).parent.parent))

from datavis.utils import RC_PARAMS


backup_location = Path("/data/zdenis/pipelines")
fuzzing_runs = [
    # --
    "run_20250928105020",
    "run_20250929074525",
    "run_20250929213242",
    "run_20250930072246",
    "run_20250930221923",
    "run_20251001072551",
    # --
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
    "run_20251003033649",
    "run_20251003063015",
    "run_20251003070805",
    "run_20251003090906",
    "run_20251003132521",
    "run_20251003163629",
    "run_20251003063015",
    "run_20251003070805",
    "run_20251003090906",
    "run_20251003132521",
    "run_20251003163629",
    "run_20251003212238",
    #
    # "run_20251015100113",
]

strategy_map: dict[str, list[dict[str, Any]]] = {}

for fuzzing_run in fuzzing_runs:
    # open json file
    with open(f"{backup_location}/{fuzzing_run}/reports.json", "r") as fp:
        reports = json.load(fp)

    config_file = glob.glob(f"{backup_location}/{fuzzing_run}/*.toml")[0]

    with open(config_file, "rb") as fp:
        config = tomli.load(fp)

    gen_strategy = config["generation_strategy"]
    df_strategy = config["dataflow_strategy"]
    strategy = f"{gen_strategy}_{df_strategy}"

    for report in reports:
        if strategy not in strategy_map:
            strategy_map[strategy] = [report]
        else:
            strategy_map[strategy].append(report)

bins = list(range(0, 1100, 25))
num_stmt_status_map = {}
num_stmt_duration_map = {}

relevant_status = ["CEX", "UNDETERMINED"]

for rstatus in relevant_status:
    num_stmt_status_map[rstatus] = {
        "RANDOM_SEPARATED": [0 for _ in bins],
        "RANDOM_MIXED": [0 for _ in bins],
        "RANDOM_RESOLVE_SEPARATED": [0 for _ in bins],
        "RANDOM_RESOLVE_MIXED": [0 for _ in bins],
        "DEPENDENCY_CHAIN_SEPARATED": [0 for _ in bins],
        "DEPENDENCY_CHAIN_MIXED": [0 for _ in bins],
    }

    num_stmt_duration_map[rstatus] = {
        "RANDOM_SEPARATED": [0.0 for _ in bins],
        "RANDOM_MIXED": [0.0 for _ in bins],
        "RANDOM_RESOLVE_SEPARATED": [0.0 for _ in bins],
        "RANDOM_RESOLVE_MIXED": [0.0 for _ in bins],
        "DEPENDENCY_CHAIN_SEPARATED": [0.0 for _ in bins],
        "DEPENDENCY_CHAIN_MIXED": [0.0 for _ in bins],
    }

total_cex_count = 0
total_undetermined_count = 0
total_timeout_count = 0
total_error_count = 0

for strategy, reports in strategy_map.items():
    for report in reports:
        proof_status = report["pipeline_report"]["proof_status"]
        num_stmts = report["original_program_report"]["num_statements"]

        if proof_status in ["CEX", "UNDETERMINED"]:
            duration = report["pipeline_report"]["synthesis_duration"]
            duration += report["pipeline_report"]["verilation_duration"]
            duration += report["pipeline_report"]["verification_duration"]

            if proof_status == "CEX":
                total_cex_count += 1
            else:
                total_undetermined_count += 1

            bin_index = np.digitize([num_stmts], bins)[0]
            num_stmt_status_map[proof_status][strategy][bin_index] += 1

            if num_stmt_duration_map[proof_status][strategy][bin_index] == 0.0:
                num_stmt_duration_map[proof_status][strategy][bin_index] = duration
            else:
                old_duration = num_stmt_duration_map[proof_status][strategy][bin_index]
                num_stmt_duration_map[proof_status][strategy][bin_index] = (
                    old_duration + duration
                ) / 2.0

        elif proof_status == "TIMEOUT":
            total_timeout_count += 1
        elif proof_status == "ERROR":
            total_error_count += 1
        else:
            print(f"unknown proof status: {proof_status}")

# max_cex_count = 0
# for cex_counts in num_stmt_status_map["CEX"].values():
#     for cex_count in cex_counts:
#         if cex_count > max_cex_count:
#             max_cex_count = cex_count

# max_duration = 0.0
# for durations in num_stmt_duration_map.values():
#     for duration in durations:
#         if duration > max_duration:
#             max_duration = duration

plt.rcParams.update(RC_PARAMS)

fig, axs = plt.subplots(3, 2, figsize=(7.026, 3.0), layout="constrained", dpi=300.0)

x = np.array(bins)

sub_plot_index = 0

for ax, strategy in zip(axs.flat, num_stmt_status_map["CEX"].keys()):
    for status in ["CEX", "UNDETERMINED"]:
        y1 = np.array(num_stmt_status_map[status][strategy])
        y2 = np.array(num_stmt_duration_map[status][strategy])

        z1 = np.polyfit(x, y1, 3)
        p1 = np.poly1d(z1)

        z2 = np.polyfit(x, y2, 3)
        p2 = np.poly1d(z2)

        colour = "r" if status == "CEX" else "b"
        ax.scatter(x, y1, color=colour)
        ax.plot(x, p1(x), f"{colour}-")
        ax.yaxis.label.set_color(colour)
        ax.tick_params(axis="y", colors=colour)
        ax.set_title(strategy)
        # ax.set_ylim(0.0, max_cex_count + 1)

        colour = "y" if status == "CEX" else "g"
        ax2 = ax.twinx()
        ax2.scatter(x, y2, color=colour)
        ax2.plot(x, p2(x), f"{colour}-")
        ax2.yaxis.label.set_color(colour)
        ax2.tick_params(axis="y", colors=colour)
        # ax2.set_ylim(0.0, max_duration + 1.0)

    if sub_plot_index >= 4:
        ax.set_xlabel("#statements")

    if sub_plot_index % 2 == 0:
        ax.set_ylabel("#CEX")

    if sub_plot_index % 2 == 1:
        ax2.set_ylabel("#statements/s")

    sub_plot_index += 1

# plt.xlabel("#statements")
# plt.ylabel("#CEX")

plt.savefig("datavis/plots/best_fuzzing_strategy.png")
