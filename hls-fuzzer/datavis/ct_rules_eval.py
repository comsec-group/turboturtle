import sys
import json
import glob
import tomli
from typing import Any
from pathlib import Path
from itertools import count

import matplotlib.pyplot as plt
import matplotlib.patches as mpatches

sys.path.append(str(Path(__file__).parent.parent))
from datavis.utils import RC_PARAMS, LINEWIDTH_INCHES, DPI


backup_location = Path("/data/zdenis/pipelines")
fuzzing_runs = [
    # # --
    # "run_20250928105020",
    # "run_20250929074525",
    # "run_20250929213242",
    # "run_20250930072246",
    # "run_20250930221923",
    # "run_20251001072551",
    # # --
    # "run_20251001175416",
    # "run_20251001182346",
    # "run_20251001185321",
    # "run_20251001194849",
    # "run_20251002022930",
    # "run_20251002115513",
    # "run_20251003132521",
    # "run_20251003090906",
    # "run_20251003070805",
    # "run_20251003063015",
    # "run_20251003033649",
    # "run_20251002184546",
    # "run_20251003033649",
    # "run_20251003063015",
    # "run_20251003070805",
    # "run_20251003090906",
    # "run_20251003132521",
    # "run_20251003163629",
    # "run_20251003063015",
    # "run_20251003070805",
    # "run_20251003090906",
    # "run_20251003132521",
    # "run_20251003163629",
    # "run_20251003212238",
    # # CT
    # "run_20251017174557",
    # "run_20251020103701",
    # "run_20251020154127",
    "run_20251105172816",  # nCT
    # "run_20251105192134",  # cf CT, ma nCT
    # "run_20251103225349",  # cf nCT, ma CT
    # "run_20251103151233",  # cf nCT, ma CT
    "run_20251103172548",  # CT
    "run_20251103135445",  # CT
    "run_20251112155105",  # CT Dynamatic
    "run_20251112131627",  # nCT Dynamatic
]

T_ResultDict = dict[str, dict[str, dict[str, int]]]
results: T_ResultDict = {
    "BAMBU_2024_10": {},
    "TOOL_A_2024_2": {},
    "TOOL_B_2025_1": {},
    "DYNAMATIC_B0F8A59": {},
}

for hls_tool in results:
    results[hls_tool] = {
        "A": {"FAIL": 0, "PASS": 0, "PASS_COMB": 0, "TIMEOUT": 0, "ERROR": 0},
        "B": {"FAIL": 0, "PASS": 0, "PASS_COMB": 0, "TIMEOUT": 0, "ERROR": 0},
        # "A": {"FAIL": 0, "PASS": 0, "PASS_COMB": 0, "TIMEOUT": 0, "ERROR": 0},
        # "C": {"FAIL": 0, "PASS": 0, "PASS_COMB": 0, "TIMEOUT": 0, "ERROR": 0},
    }

max_val = 0

for fuzzing_run in fuzzing_runs:
    with open(f"{backup_location}/{fuzzing_run}/reports.json", "r") as fp:
        reports = json.load(fp)

    config_file = glob.glob(f"{backup_location}/{fuzzing_run}/*.toml")[0]
    with open(config_file, "rb") as fp:
        config = tomli.load(fp)

    if config["secret_control_flow"] or config["secret_memory_accesses"]:
        is_ct = "A"
    # elif config["secret_control_flow"] and not config["secret_memory_accesses"]:
    #     is_ct = "A"
    # elif not config["secret_control_flow"] and config["secret_memory_accesses"]:
    #     is_ct = "B"
    else:
        is_ct = "B"

    for report in reports:
        hls_tool = report["hls_tool"]
        status = report["pipeline_report"]["test_status"]

        if status == "PASS":
            if report["pipeline_report"]["is_combinational"]:
                results[hls_tool][is_ct]["PASS_COMB"] += 1
            else:
                results[hls_tool][is_ct][status] += 1
        elif status == "ERROR":
            if (
                report["pipeline_report"]["has_subprocess_timeout"]
                or report["pipeline_report"]["has_sim_timeout"]
            ):
                results[hls_tool][is_ct]["TIMEOUT"] += 1
            else:
                results[hls_tool][is_ct][status] += 1
        else:
            results[hls_tool][is_ct][status] += 1

        # if status == "FAIL" and is_ct == "nCT":
        #     print(hls_tool, report["name"])

        if results[hls_tool][is_ct][status] > max_val and status == "FAIL":
            max_val = results[hls_tool][is_ct][status]

plt.rcParams.update(RC_PARAMS)
fig, ax = plt.subplots(figsize=(LINEWIDTH_INCHES, 2.5), layout="constrained", dpi=DPI)

label_positions: list[float] = []

offset = count()

# for hls_tool in results:
#     print(hls_tool)

#     total = 0
#     for status in results[hls_tool]["CT"]:
#         total += results[hls_tool]["CT"][status]

#     print(total)

#     total = 0
#     for status in results[hls_tool]["nCT"]:
#         total += results[hls_tool]["nCT"][status]

#     print(total)

scolors = {
    "FAIL": "#994455",
    "PASS": "#6699cc",
    "PASS_COMB": "lightblue",
    "TIMEOUT": "darkgoldenrod",
    "ERROR": "#004488",  # -> unsupported
}

shatches = {
    "A": "",
    "B": "...",
    # "C": "xxx",
    # "D": "",
}

edgecolor = "#eecc66"

for hls_tool in results:
    offsets = []

    for is_ct in results[hls_tool]:
        bottom = None
        boff = next(offset)
        offsets.append(boff)

        for status in results[hls_tool][is_ct]:
            rects = ax.bar(
                boff,
                results[hls_tool][is_ct][status],
                width=0.9,
                bottom=bottom,
                label=status,
                color=scolors[status],
                edgecolor=edgecolor,
                linewidth=0.5,
                hatch=shatches[is_ct],
            )

            if status == "FAIL":
                ax.bar_label(rects)

            if bottom is None:
                bottom = results[hls_tool][is_ct][status]
            else:
                bottom += results[hls_tool][is_ct][status]

        # ax.bar_label(rects, labels=[is_ct])

    label_pos = offsets[0] + ((offsets[-1] - offsets[0]) / 2)
    label_positions.append(label_pos)

    _ = next(offset)

# ax.set_title("Evaluation of CT programming rules")
ax.set_xticks(label_positions, ["Bambu", "Tool A", "Tool B", "Dynamatic"])
ax.set_ylim(0, 210)

# box = ax.get_position()
# ax.set_position([box.x0, box.y0, box.width, box.height * 0.9])
# ax.tick_params("x", rotation=15)


handles = [
    mpatches.Patch(facecolor=scolors["FAIL"], label="Fail"),
    mpatches.Patch(facecolor=scolors["PASS"], label="Pass"),
    mpatches.Patch(facecolor=scolors["PASS_COMB"], label="Pass (comb.)"),
    mpatches.Patch(facecolor=scolors["TIMEOUT"], label="Timeout"),
    mpatches.Patch(facecolor=scolors["ERROR"], label="Unsupported"),
    mpatches.Patch(
        facecolor="white",
        edgecolor=edgecolor,
        hatch=shatches["A"],
        linewidth=0.5,
        label="nCT",
    ),
    mpatches.Patch(
        facecolor="white",
        edgecolor=edgecolor,
        hatch=shatches["B"],
        linewidth=0.5,
        label="CT (rule 1+2)",
    ),
    # mpatches.Patch(
    #     facecolor="white",
    #     edgecolor=edgecolor,
    #     hatch=shatches["A"],
    #     linewidth=0.5,
    #     label="rule 2",
    # ),
    # mpatches.Patch(
    #     facecolor="white",
    #     edgecolor=edgecolor,
    #     hatch=shatches["C"],
    #     linewidth=0.5,
    #     label="CT",
    # ),
]

fig.legend(handles=handles, ncols=2, loc="outside upper center")

plt.savefig("datavis/plots/ct_rules_eval.pdf")
