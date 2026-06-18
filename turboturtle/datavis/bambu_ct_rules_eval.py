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
    "run_20251105192134",  # cf CT, ma nCT
    "run_20251103172548",  # CT
    "run_20251103135445",  # CT
    "run_20251104122319",  # CT + Bambu rules
]

T_ResultDict = dict[str, dict[str, dict[str, int]]]
results: T_ResultDict = {
    "BAMBU_2024_10": {},
    "DYNAMATIC_B0F8A59": {},
}

for hls_tool in results:
    results[hls_tool] = {
        "A": {"FAIL": 0, "PASS": 0, "ERROR": 0},
        "B": {"FAIL": 0, "PASS": 0, "ERROR": 0},
        "C": {"FAIL": 0, "PASS": 0, "ERROR": 0},
        "D": {"FAIL": 0, "PASS": 0, "ERROR": 0},
    }

max_val = 0

for fuzzing_run in fuzzing_runs:
    with open(f"{backup_location}/{fuzzing_run}/reports.json", "r") as fp:
        reports = json.load(fp)

    config_file = glob.glob(f"{backup_location}/{fuzzing_run}/*.toml")[0]
    with open(config_file, "rb") as fp:
        config = tomli.load(fp)

    print(fuzzing_run, config["design_types"])

    if config["secret_control_flow"] and config["secret_memory_accesses"]:
        is_ct = "A"
    elif not config["secret_control_flow"] and config["secret_memory_accesses"]:
        is_ct = "B"
    elif fuzzing_run == "run_20251104122319":
        is_ct = "D"
    else:
        is_ct = "C"

    for report in reports:
        hls_tool = report["hls_tool"]
        status = report["pipeline_report"]["test_status"]
        results[hls_tool][is_ct][status] += 1

        # if status == "FAIL" and is_ct == "nCT":
        #     print(hls_tool, report["name"])

        if results[hls_tool][is_ct][status] > max_val and status == "FAIL":
            max_val = results[hls_tool][is_ct][status]

plt.rcParams.update(RC_PARAMS)
fig, ax = plt.subplots(figsize=(LINEWIDTH_INCHES, 1.7), layout="constrained", dpi=DPI)

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
    "ERROR": "#004488",
}

shatches = {
    "A": "///",
    "B": "...",
    "C": "xxx",
    "D": "+++",
}

edgecolor = "#eecc66"

for hls_tool in results:
    offsets = []

    if hls_tool != "BAMBU_2024_10":
        continue

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
ax.set_xticks(label_positions, ["Bambu"])
ax.set_ylim(0, 210)

# box = ax.get_position()
# ax.set_position([box.x0, box.y0, box.width, box.height * 0.9])
# ax.tick_params("x", rotation=15)


handles = [
    mpatches.Patch(facecolor=scolors["FAIL"], label="FAIL"),
    mpatches.Patch(facecolor=scolors["PASS"], label="PASS"),
    mpatches.Patch(facecolor=scolors["ERROR"], label="ERROR"),
    mpatches.Patch(
        facecolor="white",
        edgecolor=edgecolor,
        hatch=shatches["A"],
        linewidth=0.5,
        label="non-CT",
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

fig.legend(handles=handles, ncols=3, loc="outside upper center")

plt.savefig("datavis/plots/bambu_ct_rules_eval.png")
