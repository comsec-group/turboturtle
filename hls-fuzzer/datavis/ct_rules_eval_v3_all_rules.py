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


backup_location = Path("/data/zdenis/pipelines/")
fuzzing_runs = [
    "/data/zdenis/pipelines/run_20251103172548",
    "/data/zdenis/pipelines/run_20251103135445",
    # "run_20251105192134",
    "/data/zdenis/pipelines/run_20251103182938",
    "/data/zdenis/pipelines/run_20251103220510",
    "/data/zdenis/pipelines/run_20251103151233",
    "/data/zdenis/pipelines/run_20251103225349",
    "/data/zdenis/pipelines/run_20251105172816",
    "/data/zdenis/pipelines/run_20251104122319",  # Bambu CT + HLS rules
    "/data/zdenis/pipelines/run_20251112155105",
    "/data/zdenis/pipelines/run_20251112131627",
    "/data/zdenis/pipelines/run_20251113002507",
    "/data/zdenis/pipelines/run_20251113030129",  # Bambu CT + HLS rules + linearisation
    "/data/zdenis/pipelines/run_20251113134635",
]

bambu_int_all_rules_runs = [
    # Bambu integer with all Bambu rules active
    "/data/hls_fuzzing/data_set/run_20260112114545_bambu_int",
    "/data/hls_fuzzing/data_set/run_20260112153936_bamub_int",
    "/data/hls_fuzzing/data_set/run_20260112191222_bambu_int",
    "/data/hls_fuzzing/data_set/run_20260113143138_bambu_int",
]

dynamatic_int_all_rules_runs = [
    # Dynamatic integer with all Dynamatic rules active
    "/data/hls_fuzzing/data_set/run_20260114143604_dynamatic_int",
]

fuzzing_runs.extend(bambu_int_all_rules_runs)
fuzzing_runs.extend(dynamatic_int_all_rules_runs)

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
        "D_BAMBU": {"FAIL": 0, "PASS": 0, "PASS_COMB": 0, "TIMEOUT": 0, "ERROR": 0},
        "D_DYN": {"FAIL": 0, "PASS": 0, "PASS_COMB": 0, "TIMEOUT": 0, "ERROR": 0},
        "E_BAMBU": {"FAIL": 0, "PASS": 0, "PASS_COMB": 0, "TIMEOUT": 0, "ERROR": 0},
    }

max_val = 0
nr_designs_3_tools = 0
nr_designs_bambu = 0
nr_designs_dynamatic = 0
nr_c_programs = 0
nr_c_programs_3_tools = 0
nr_c_programs_bambu = 0
nr_c_programs_dynamatic = 0
for fuzzing_run in fuzzing_runs:
    with open(f"{fuzzing_run}/reports.json", "r") as fp:
        print(f"Processing {fuzzing_run}/reports.json")
        reports = json.load(fp)

    config_file = glob.glob(f"{fuzzing_run}/*.toml")[0]
    with open(config_file, "rb") as fp:
        config = tomli.load(fp)

    nr_c_programs += config["num_designs"]

    if len(config["design_types"]) == 3:
        nr_designs_3_tools += len(reports)
        nr_c_programs_3_tools += config["num_designs"]

    if "BambuDesign" in config["design_types"]:
        nr_designs_bambu += len(reports)
        nr_c_programs_bambu += config["num_designs"]

    if "DynamaticDesign" in config["design_types"]:
        nr_designs_dynamatic += len(reports)
        nr_c_programs_dynamatic += config["num_designs"]



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
        and fuzzing_run in ["/data/zdenis/pipelines/run_20251104122319", "/data/zdenis/pipelines/run_20251113030129"]
    ):
        is_cts.append("D_BAMBU")


    if (
        not config["secret_control_flow"]
        and not config["secret_memory_accesses"]
        and fuzzing_run in bambu_int_all_rules_runs
    ):
        is_cts.append("E_BAMBU")

    if (
        not config["secret_control_flow"]
        and not config["secret_memory_accesses"]
        and fuzzing_run in dynamatic_int_all_rules_runs
    ):
        is_cts.append("D_DYN")

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

print("Fuzzed number of C programs:", nr_c_programs)
print("Fuzzed number of designs synthesized with 3 tools:", nr_designs_3_tools)
print("Fuzzed number of designs synthesized with Bambu:", nr_designs_bambu)
print("Fuzzed number of designs synthesized with Dynamatic:", nr_designs_dynamatic)
print("Fuzzed number of C programs synthesized with 3 tools:", nr_c_programs_3_tools)
print("Fuzzed number of C programs synthesized with Bambu:", nr_c_programs_bambu)
print("Fuzzed number of C programs synthesized with Dynamatic:", nr_c_programs_dynamatic)

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
    "D_BAMBU": "...",
    "E_BAMBU": "",
    "D_DYN": "",
}

edgecolor = "#eecc66"

for hls_tool in results:
    offsets = []

    for is_ct in results[hls_tool]:
        if hls_tool != "BAMBU_2024_10" and is_ct == "D_BAMBU":
            continue
        if hls_tool != "BAMBU_2024_10" and is_ct == "E_BAMBU":
            continue
        if hls_tool != "DYNAMATIC_B0F8A59" and is_ct == "D_DYN":
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
# ax.set_ylim(0, 1240)
ax.set_ylim(0, 1400)

# box = ax.get_position()
# ax.set_position([box.x0, box.y0, box.width, box.height * 0.9])
# ax.tick_params("x", rotation=15)
# ax.margins(x=0.1)
# ax.set_xlim(-0.5, next(offset) - 3.5)

handlesA = [
    mpatches.Patch(facecolor=scolors["FAIL"], label="Fail"),
    mpatches.Patch(facecolor=scolors["PASS"], label="Pass"),
    mpatches.Patch(facecolor=scolors["PASS_COMB"], label="Pass (comb.)"),
    mpatches.Patch(facecolor=scolors["TIMEOUT"], label="Timeout"),
    mpatches.Patch(facecolor=scolors["ERROR"], label="Unsupported"),
    # mpatches.Patch(
    #     facecolor="white",
    #     edgecolor="white",
    #     hatch=shatches["A"],
    #     linewidth=0.5,
    #     label="",
    # ),
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
        hatch=shatches["D_BAMBU"],
        linewidth=0.5,
        label="CT rule 1+2+3",
    ),
    mpatches.Patch(
        facecolor="white",
        edgecolor=edgecolor,
        hatch=shatches["E_BAMBU"],
        linewidth=0.5,
        label="All rules",
    ),
]

fig.legend(handles=handlesA, ncols=5, loc="outside upper center")

plt.savefig("datavis/plots/ct_rules_eval_v3_all_rules.png")
plt.savefig("datavis/plots/ct_rules_eval_v3_all_rules.pdf")
