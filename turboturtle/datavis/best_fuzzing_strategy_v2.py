import sys
import json
import glob
import tomli

from typing import Any
from pathlib import Path

import matplotlib.pyplot as plt
import numpy as np

sys.path.append(str(Path(__file__).parent.parent))

from datavis.utils import RC_PARAMS, TEXTWIDTH_INCHES, DPI


backup_location = Path("/data/zdenis/pipelines")
fuzzing_runs = [
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


re_verify_file = Path("/data/zdenis/re_verif/re_verif_results.json")
with open(re_verify_file, "r") as fp:
    re_verify = json.load(fp)

strategy_map: dict[str, list[dict[str, Any]]] = {}

n_cex = 0
n_undet = 0
n_timeout = 0
n_error = 0

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
        status = report["pipeline_report"]["proof_status"]

        if status == "CEX":
            n_cex += 1
        elif status == "UNDETERMINED":
            n_undet += 1
        elif status == "TIMEOUT":
            n_timeout += 1
        else:
            n_error += 1

        if strategy not in strategy_map:
            strategy_map[strategy] = [report]
        else:
            strategy_map[strategy].append(report)


print(n_cex, n_undet, n_timeout, n_error)


max_num_statements = 10000
num_statements = np.linspace(0, max_num_statements, max_num_statements)
rel_statuses = [
    "CEX",
    # "UNDETERMINED",
]

strategies_cexes = {
    "RANDOM_SEPARATED": {},
    "RANDOM_MIXED": {},
    "RANDOM_RESOLVE_SEPARATED": {},
    "RANDOM_RESOLVE_MIXED": {},
    "DEPENDENCY_CHAIN_SEPARATED": {},
    "DEPENDENCY_CHAIN_MIXED": {},
}

strategies_durations = {
    "RANDOM_SEPARATED": {},
    "RANDOM_MIXED": {},
    "RANDOM_RESOLVE_SEPARATED": {},
    "RANDOM_RESOLVE_MIXED": {},
    "DEPENDENCY_CHAIN_SEPARATED": {},
    "DEPENDENCY_CHAIN_MIXED": {},
}

for strategy in strategies_cexes:
    for rstatus in rel_statuses:
        strategies_cexes[strategy][rstatus] = {}
        strategies_durations[strategy][rstatus] = {}

max_nums = {
    "CEX": 0,
}

max_durs = {
    "CEX": 0.0,
}

for strategy, reports in strategy_map.items():
    for report in reports:
        name = report["name"]
        if name in re_verify:
            status = re_verify[name][0]
            duration = re_verify[name][1]
        else:
            status = report["pipeline_report"]["proof_status"]
            duration = report["pipeline_report"]["verification_duration"]

        # duration += report["pipeline_report"]["synthesis_duration"]
        # duration += report["pipeline_report"]["verilation_duration"]

        r_num_stmts = report["original_program_report"]["num_statements"]

        if status in rel_statuses:
            if r_num_stmts not in strategies_cexes[strategy][status]:
                strategies_cexes[strategy][status][r_num_stmts] = 0

            strategies_cexes[strategy][status][r_num_stmts] += 1

            if max_nums[status] < strategies_cexes[strategy][status][r_num_stmts]:
                max_nums[status] = strategies_cexes[strategy][status][r_num_stmts]

        if duration == 0.0:
            continue

        status = "CEX"
        if r_num_stmts not in strategies_durations[strategy][status]:
            strategies_durations[strategy][status][r_num_stmts] = duration
        else:
            old_duration = strategies_durations[strategy][status][r_num_stmts]
            strategies_durations[strategy][status][r_num_stmts] = (
                duration + old_duration
            ) / 2.0

        if max_durs[status] < strategies_durations[strategy][status][r_num_stmts]:
            max_durs[status] = strategies_durations[strategy][status][r_num_stmts]


total_cexes = {}
for strategy in strategies_cexes:
    num_cex = sum(strategies_cexes[strategy]["CEX"].values())
    total_cexes[strategy] = num_cex

plt.rcParams.update(RC_PARAMS)

fig, axs = plt.subplots(
    3, 2, figsize=(TEXTWIDTH_INCHES, 3.0), layout="constrained", dpi=DPI
)

n_poly = 3
max_y = 0
dur_axes = []

for ax, strategy in zip(axs.flat, strategies_cexes.keys()):
    ax.set_title(strategy)
    ax2 = ax.twinx()

    for status in rel_statuses:
        x_cex = np.array(list(strategies_cexes[strategy][status].keys()))
        y_cex = np.array(list(strategies_cexes[strategy][status].values()))
        z_cex = np.polyfit(x_cex, y_cex, n_poly)
        p_cex = np.poly1d(z_cex)

        x_dur = np.array(list(strategies_durations[strategy][status].keys()))
        y_dur = np.array(list(strategies_durations[strategy][status].values()))
        y_dur_inv = x_dur / y_dur

        new_max_y = np.max(y_dur_inv)
        if new_max_y > max_y:
            max_y = new_max_y

        z_dur = np.polyfit(x_dur, y_dur_inv, n_poly)
        p_dur = np.poly1d(z_dur)

        # x axis
        ax.plot(num_statements, np.zeros_like(num_statements), color="none")
        # cex scatter + trendline
        color = "r" if status == "CEX" else "y"
        ax.scatter(x_cex, y_cex, label=f"#{status}", color=color)
        ax.plot(num_statements, p_cex(num_statements), "-", color=color)
        # dur scatter + trendline
        color = "b" if status == "CEX" else "g"
        ax2.scatter(x_dur, y_dur_inv, label=f"Throughput\n[stmts/s]", color=color)
        ax2.plot(num_statements, p_dur(num_statements), "-", color=color)
        dur_axes.append(ax2)

    bbox = dict(boxstyle="round", fc="blanchedalmond", ec="orange", alpha=0.5)
    ax.text(
        0.5,
        0.7,
        f"total CEX = {total_cexes[strategy]}",
        bbox=bbox,
        transform=ax.transAxes,
        ha="center",
        va="center",
    )

    ax.set_xlim(num_statements[0], num_statements[-1])
    ax.set_ylim(0, max_nums["CEX"] + 1)

    handles1, labels1 = ax.get_legend_handles_labels()
    handles2, labels2 = ax2.get_legend_handles_labels()
    handles = handles1 + handles2
    labels = labels1 + labels2

    # ax2.legend(handles, labels, loc="best", framealpha=1.0)

for dur_ax in dur_axes:
    dur_ax.set_ylim(0, max_y)
    # dur_ax.set_ylim(0)

title = fig.suptitle("Comparing C program generation strategies")
fig.legend(handles, labels, loc="upper right")
fig.supxlabel("Number of statements")
fig.supylabel("Number of CEX")

# plt.plot(num_statements, np.zeros_like(num_statements), color='none')   # optional: ensure axis spans full x range
plt.savefig("datavis/plots/best_fuzzing_strategy.png")
