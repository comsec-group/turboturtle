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
from datavis.utils import RC_PARAMS, TEXTWIDTH_INCHES, DPI


backup_location = Path("/data/zdenis/pipelines")
fuzzing_runs = [
    "run_20251103172548",
    "run_20251103135445",
    # "run_20251105192134",
    "run_20251103182938",
    "run_20251103220510",
    "run_20251103151233",
    "run_20251103225349",
    "run_20251105172816",
    "run_20251104122319",  # Bambu CT + HLS rules
    "run_20251112155105",
    "run_20251112131627",
    "run_20251113002507",
    "run_20251113030129",  # Bambu CT + HLS rules + linearisation
    "run_20251113134635",
]

T_ResultDict = dict[str, dict[str, dict[str, int]]]
results: T_ResultDict = {
    "BAMBU_2024_10": {},
    "DYNAMATIC_B0F8A59": {},
    "TOOL_A_2024_2": {},
    "TOOL_B_2025_1": {},
}

for hls_tool in results:
    results[hls_tool] = {
        "A": {"FAIL": 0, "PASS": 0, "PASS_COMB": 0, "TIMEOUT": 0, "ERROR": 0},
        "B": {"FAIL": 0, "PASS": 0, "PASS_COMB": 0, "TIMEOUT": 0, "ERROR": 0},
        "C": {"FAIL": 0, "PASS": 0, "PASS_COMB": 0, "TIMEOUT": 0, "ERROR": 0},
        "D": {"FAIL": 0, "PASS": 0, "PASS_COMB": 0, "TIMEOUT": 0, "ERROR": 0},
    }

max_val = 0

for fuzzing_run in fuzzing_runs:
    with open(f"{backup_location}/{fuzzing_run}/reports.json", "r") as fp:
        reports = json.load(fp)

    config_file = glob.glob(f"{backup_location}/{fuzzing_run}/*.toml")[0]
    with open(config_file, "rb") as fp:
        config = tomli.load(fp)

    # if config["secret_control_flow"] or config["secret_memory_accesses"]:
    #     is_ct = "A"
    # # elif config["secret_control_flow"] and not config["secret_memory_accesses"]:
    # #     is_ct = "A"
    # # elif not config["secret_control_flow"] and config["secret_memory_accesses"]:
    # #     is_ct = "B"
    # else:
    #     is_ct = "B"

    is_cts: list[str] = ["A"]

    if not config["secret_control_flow"]:
        is_cts.append("B")

    if not config["secret_control_flow"] and not config["secret_memory_accesses"]:
        is_cts.append("C")

    if (
        not config["secret_control_flow"]
        and not config["secret_memory_accesses"]
        and fuzzing_run in ["run_20251104122319", "run_20251113030129"]
    ):
        is_cts.append("D")

    for is_ct in is_cts:
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
fig, ax = plt.subplots(figsize=(TEXTWIDTH_INCHES, 1.35), layout="constrained", dpi=DPI)

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
    "A": "///",
    "B": "|||",
    "C": "xxx",
    "D": "",
}

edgecolor = "#eecc66"

for hls_tool in results:
    offsets = []

    for is_ct in results[hls_tool]:
        if hls_tool != "BAMBU_2024_10" and is_ct == "D":
            continue

        bottom = None
        boff = next(offset)
        offsets.append(boff)

        for status in results[hls_tool][is_ct]:
            # if is_ct != "A" and status != "FAIL":
            #     continue

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
ax.set_ylabel("Number of\nHDL designs")
ax.set_xticks(label_positions, ["Bambu", "Dynamatic", "Tool A", "Tool B"])
ax.set_ylim(0, 1240)

# box = ax.get_position()
# ax.set_position([box.x0, box.y0, box.width, box.height * 0.9])
# ax.tick_params("x", rotation=15)


handlesA = [
    mpatches.Patch(facecolor=scolors["FAIL"], label="Fail"),
    mpatches.Patch(facecolor=scolors["PASS"], label="Pass"),
    mpatches.Patch(facecolor=scolors["PASS_COMB"], label="Pass (comb.)"),
    mpatches.Patch(facecolor=scolors["TIMEOUT"], label="Timeout"),
    mpatches.Patch(facecolor=scolors["ERROR"], label="Unsupported"),
    mpatches.Patch(
        facecolor="white",
        edgecolor="white",
        hatch=shatches["A"],
        linewidth=0.5,
        label="",
    ),
    mpatches.Patch(
        facecolor="white",
        edgecolor=edgecolor,
        hatch=shatches["A"],
        linewidth=0.5,
        label="No rules",
    ),
    mpatches.Patch(
        facecolor="white",
        edgecolor=edgecolor,
        hatch=shatches["B"],
        linewidth=0.5,
        label="CT rule 1",
    ),
    mpatches.Patch(
        facecolor="white",
        edgecolor=edgecolor,
        hatch=shatches["C"],
        linewidth=0.5,
        label="CT rule 1+2",
    ),
    mpatches.Patch(
        facecolor="white",
        edgecolor=edgecolor,
        hatch=shatches["D"],
        linewidth=0.5,
        label="CT rule 1+2+3",
    ),
]

fig.legend(handles=handlesA, ncols=5, loc="outside upper center")

plt.savefig("datavis/plots/ct_rules_eval.png")
plt.savefig("datavis/plots/ct_rules_eval.pdf")
