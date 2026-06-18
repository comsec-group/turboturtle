import sys
import json
import glob
import tomli

from typing import Any
from pathlib import Path

import matplotlib.pyplot as plt
import matplotlib.patches as mpatches

import numpy as np

sys.path.append(str(Path(__file__).parent.parent))

from datavis.utils import RC_PARAMS, LINEWIDTH_INCHES, DPI

backup_location = Path("/data/zdenis/pipelines")
# fuzzing_runs = [
#     # --
#     # "run_20250928105020",
#     # "run_20250929074525",
#     # "run_20250929213242",
#     # "run_20250930072246",
#     # "run_20250930221923",
#     # "run_20251001072551",
#     # # --
#     "run_20251001175416",
#     "run_20251001182346",
#     "run_20251001185321",
#     "run_20251001194849",
#     "run_20251002022930",
#     "run_20251002115513",
#     "run_20251003132521",
#     "run_20251003090906",
#     "run_20251003070805",
#     "run_20251003063015",
#     "run_20251003033649",
#     "run_20251002184546",
#     "run_20251003163629",
#     "run_20251003212238",
#     # 1000+
#     "run_20251008232137",  # config_0
#     "run_20251015100113",  # config_1
#     # "run_20251010055336" # config_2 (crash...)
#     "run_20251020215408",  # config_2 (new)
#     "run_20251013172242",  # config_3 (part.)
#     "run_20251005174657",  # config_4
#     "run_20251007091617",  # config_5
# ]
fuzzing_runs = [
    "run_20251031222834",
    "run_20251101182755",
    "run_20251101234852",
    "run_20251102033310",
    "run_20251102080544",
    "run_20251102171141",
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

    if len(reports) > 300:
        reports = reports[:300]

    for report in reports:
        status = report["pipeline_report"]["test_status"]

        if status == "FAIL":
            n_cex += 1
        elif status == "PASS":
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


max_num_statements = 1000
num_statements = np.linspace(0, max_num_statements, max_num_statements)
rel_statuses = [
    "FAIL",
    # "UNDETERMINED",
]

strategies_cexes = {}
strategies_durations = {}

for rstatus in rel_statuses:
    strategies_cexes[rstatus] = {}
    strategies_durations[rstatus] = {}

max_nums = {
    "FAIL": 0,
}

max_durs = {
    "FAIL": 0.0,
}

total_nr_designs = 0
for stategy, reports in strategy_map.items():
    for report in reports:
        total_nr_designs += 1
        name = report["name"]
        if name in re_verify:
            status = re_verify[name][0]
            duration = re_verify[name][1]
        else:
            status = report["pipeline_report"]["test_status"]
            duration = report["pipeline_report"]["verification_duration"]

        duration += report["pipeline_report"]["synthesis_duration"]
        duration += report["pipeline_report"]["verilation_duration"]

        r_num_stmts = report["original_program_report"]["num_statements"]

        if status in rel_statuses:
            if r_num_stmts not in strategies_cexes[status]:
                strategies_cexes[status][r_num_stmts] = 0

            strategies_cexes[status][r_num_stmts] += 1

            if max_nums[status] < strategies_cexes[status][r_num_stmts]:
                max_nums[status] = strategies_cexes[status][r_num_stmts]

        if duration == 0.0:
            continue

        status = "FAIL"
        if r_num_stmts not in strategies_durations[status]:
            strategies_durations[status][r_num_stmts] = duration
        else:
            old_duration = strategies_durations[status][r_num_stmts]
            strategies_durations[status][r_num_stmts] = (duration + old_duration) / 2.0

        if max_durs[status] < strategies_durations[status][r_num_stmts]:
            max_durs[status] = strategies_durations[status][r_num_stmts]


total_cexes = {}
num_cex = sum(strategies_cexes["FAIL"].values())
total_cexes = num_cex

print(f"Total number of designs: {total_nr_designs}")

plt.rcParams.update(RC_PARAMS)

fig, ax = plt.subplots(figsize=(LINEWIDTH_INCHES, 1.5), layout="constrained", dpi=DPI)

n_poly = 1
max_y = 0
dur_axes = []

# ax.set_title(strategy)
ax2 = ax.twinx()

for status in rel_statuses:
    x_cex = np.array(list(strategies_cexes[status].keys()))
    y_cex = np.array(list(strategies_cexes[status].values()))
    z_cex = np.polyfit(x_cex, y_cex, n_poly)
    p_cex = np.poly1d(z_cex)

    x_dur = np.array(list(strategies_durations[status].keys()))
    y_dur = np.array(list(strategies_durations[status].values()))
    # y_dur_inv = x_dur / y_dur
    y_dur_inv = y_dur

    new_max_y = np.max(y_dur_inv)
    if new_max_y > max_y:
        max_y = new_max_y

    z_dur = np.polyfit(x_dur, y_dur_inv, n_poly)
    p_dur = np.poly1d(z_dur)

    # x axis
    ax.plot(num_statements, np.zeros_like(num_statements), color="none")
    # cex scatter + trendline
    color = "#994455" if status == "FAIL" else "y"
    ax.scatter(x_cex, y_cex, label=f"#{status}", color=color)
    ax.plot(num_statements, p_cex(num_statements), "-", color=color)
    # dur scatter + trendline
    color = "#6699cc" if status == "FAIL" else "g"
    ax2.scatter(x_dur, y_dur_inv, label=f"Time to Verify\n[s]", color=color)
    ax2.plot(num_statements, p_dur(num_statements), "-", color=color)
    dur_axes.append(ax2)

# bbox = dict(boxstyle="round", fc="#eecc66", ec="#997700", alpha=1.0)
# ax.text(
#     0.5,
#     0.7,
#     f"total Fail = {total_cexes}",
#     bbox=bbox,
#     transform=ax.transAxes,
#     ha="center",
#     va="center",
# )

ax.set_xlim(num_statements[0], num_statements[-1])
ax.set_ylim(0, max_nums["FAIL"] + 1)

ax.set_xlabel("Number of statements")
ax.set_ylabel("Number of Fail")
ax2.set_ylabel("Time until test status [s]")

# ax2.legend(handles, labels, loc="best", framealpha=1.0)

for dur_ax in dur_axes:
    dur_ax.set_ylim(0, 2000)
    # dur_ax.set_ylim(0)

handles = [
    mpatches.Patch(facecolor="#994455", label="Fail"),
    mpatches.Patch(facecolor="#6699cc", label="Time until test status [s]"),
]

# title = fig.suptitle("Comparing C program generation strategies")
fig.legend(handles=handles, ncols=2, loc="outside upper center")

# plt.plot(num_statements, np.zeros_like(num_statements), color='none')   # optional: ensure axis spans full x range
plt.savefig("datavis/plots/best_fuzzing_strategy_v4.pdf")
plt.savefig("datavis/plots/best_fuzzing_strategy_v4.png")
