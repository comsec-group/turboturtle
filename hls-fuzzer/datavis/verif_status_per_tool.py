import sys
import json
from typing import Any
from pathlib import Path

import matplotlib.pyplot as plt
from vcdvcd import VCDVCD

sys.path.append(str(Path(__file__).parent.parent))
from datavis.utils import RC_PARAMS


def has_timeout(vcd: VCDVCD, clock_name: str) -> bool:
    design_clk = f"tb.{clock_name}"
    clk_signal = vcd[design_clk]
    time, _ = clk_signal.tv[-1]

    if time > 1000 * 10**3:
        return True
    else:
        return False


# backup_location = Path("/data/zdenis/pipelines")
# fuzzing_runs = [
#     # --
#     "run_20250928105020",
#     "run_20250929074525",
#     "run_20250929213242",
#     "run_20250930072246",
#     "run_20250930221923",
#     "run_20251001072551",
#     # --
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
#     "run_20251003033649",
#     "run_20251003063015",
#     "run_20251003070805",
#     "run_20251003090906",
#     "run_20251003132521",
#     "run_20251003163629",
#     "run_20251003063015",
#     "run_20251003070805",
#     "run_20251003090906",
#     "run_20251003132521",
#     "run_20251003163629",
#     "run_20251003212238",
# ]

backup_location = Path("/home/zdenis/turboturtle/fuzzing")
fuzzing_runs = sys.argv[1:]

strategy_map: dict[str, list[dict[str, Any]]] = {}


hls_tool_repots_map = {
    "BAMBU_2024_10": {
        "FAIL": 0,
        "PASS": 0,
        "PASS_COMBINATIONAL": 0,
        "ERROR": 0,
        "ERROR_HLS": 0,
        "ERROR_HLS_SUBPROCESS_TIMEOUT": 0,
        "ERROR_VERIF": 0,
        "ERROR_VERIF_SUBPROCESS_TIMEOUT": 0,
        "ERROR_VERIF_SIM_TIMEOUT": 0,
        "ERROR_VERILATION": 0,
        "ERROR_OTHER": 0,
    },
    "DYNAMATIC_B0F8A59": {
        "FAIL": 0,
        "PASS": 0,
        "PASS_COMBINATIONAL": 0,
        "ERROR": 0,
        "ERROR_HLS": 0,
        "ERROR_HLS_SUBPROCESS_TIMEOUT": 0,
        "ERROR_VERIF": 0,
        "ERROR_VERIF_SUBPROCESS_TIMEOUT": 0,
        "ERROR_VERIF_SIM_TIMEOUT": 0,
        "ERROR_VERILATION": 0,
        "ERROR_OTHER": 0,
    },
    "TOOL_A_2024_2": {
        "FAIL": 0,
        "PASS": 0,
        "PASS_COMBINATIONAL": 0,
        "ERROR": 0,
        "ERROR_HLS": 0,
        "ERROR_HLS_SUBPROCESS_TIMEOUT": 0,
        "ERROR_VERIF": 0,
        "ERROR_VERIF_SUBPROCESS_TIMEOUT": 0,
        "ERROR_VERIF_SIM_TIMEOUT": 0,
        "ERROR_VERILATION": 0,
        "ERROR_OTHER": 0,
    },
    "TOOL_B_2025_1": {
        "FAIL": 0,
        "PASS": 0,
        "PASS_COMBINATIONAL": 0,
        "ERROR": 0,
        "ERROR_HLS": 0,
        "ERROR_HLS_SUBPROCESS_TIMEOUT": 0,
        "ERROR_VERIF": 0,
        "ERROR_VERIF_SUBPROCESS_TIMEOUT": 0,
        "ERROR_VERIF_SIM_TIMEOUT": 0,
        "ERROR_VERILATION": 0,
        "ERROR_OTHER": 0,
    },
}

total_designs = 0

for fuzzing_run in fuzzing_runs:
    # open json file
    with open(f"{fuzzing_run}/reports.json", "r") as fp:
        reports = json.load(fp)

    for report in reports:
        total_designs += 1
        hls_tool_repots_map[report["hls_tool"]][
            report["pipeline_report"]["test_status"]
        ] += 1

        if report["pipeline_report"]["test_status"] == "FAIL":
            print(report["name"])

        if report["pipeline_report"]["test_status"] == "PASS":
            if report["pipeline_report"]["is_combinational"]:
                hls_tool_repots_map[report["hls_tool"]]["PASS_COMBINATIONAL"] += 1

        if report["pipeline_report"]["test_status"] == "ERROR":
            name = report["name"]

            error_log = Path(f"{fuzzing_run}/{name}/logs/error.txt")
            verif_sim = Path(f"{fuzzing_run}/{name}/logs/verif_sim.log")
            # if error_log.exists():
            #     with open(error_log, "r") as fp:
            #         if "SUBPROCESS TIMEOUT" in fp.read():
            #             hls_tool_repots_map[report["hls_tool"]]["ERROR_SUBPROCESS_TIMEOUT"] += 1

            # if report["pipeline_report"]["has_sim_timeout"]:
            #     hls_tool_repots_map[report["hls_tool"]]["ERROR_SIM_TIMEOUT"] += 1

            if report["exception_type"] == "HLSSynthesisException":
                hls_tool_repots_map[report["hls_tool"]]["ERROR_HLS"] += 1
                if error_log.exists():
                    with open(error_log, "r") as fp:
                        log = fp.read()
                else:
                    log = ""

                if "SUBPROCESS TIMEOUT" in log:
                    hls_tool_repots_map[report["hls_tool"]][
                        "ERROR_HLS_SUBPROCESS_TIMEOUT"
                    ] += 1
                else:
                    pass
                    # print(name)
                    # print(log)
                    # print("")
            elif report["exception_type"] == "VerificationException":
                hls_tool_repots_map[report["hls_tool"]]["ERROR_VERIF"] += 1
                if error_log.exists():
                    with open(error_log, "r") as fp:
                        log = fp.read()
                else:
                    log = ""

                if "SUBPROCESS TIMEOUT" in log:
                    hls_tool_repots_map[report["hls_tool"]][
                        "ERROR_VERIF_SUBPROCESS_TIMEOUT"
                    ] += 1

            elif report["exception_type"] == "VerilationException":
                hls_tool_repots_map[report["hls_tool"]]["ERROR_VERILATION"] += 1
            else:
                if verif_sim.exists():
                    with open(verif_sim, "r") as fp:
                        if "[error-timeout]" in fp.read():
                            hls_tool_repots_map[report["hls_tool"]][
                                "ERROR_VERIF_SIM_TIMEOUT"
                            ] += 1
                        else:
                            hls_tool_repots_map[report["hls_tool"]]["ERROR_OTHER"] += 1
                else:
                    hls_tool_repots_map[report["hls_tool"]]["ERROR_OTHER"] += 1


for hls_tool, results in hls_tool_repots_map.items():
    print(hls_tool)

    cex = results["FAIL"]
    undetermined = results["PASS"]
    total = cex + undetermined

    if total != 0:
        print(cex / total)


plt.rcParams.update(RC_PARAMS)
fig, axs = plt.subplots(2, 2, figsize=(10.0, 3.0), layout="constrained", dpi=300.0)

sub_plot_index = 0

for ax, hls_tool in zip(axs.flat, hls_tool_repots_map.keys()):
    ax.set_title(hls_tool)
    ax.grid(True, linestyle="--")

    rects = ax.bar(
        hls_tool_repots_map[hls_tool].keys(), hls_tool_repots_map[hls_tool].values()
    )
    ax.bar_label(rects)
    ax.set_ylim(0)

    if sub_plot_index < 2:
        ax.tick_params(labelbottom=False)

    sub_plot_index += 1

fig.autofmt_xdate()
# fig.align_labels()

plt.savefig("datavis/plots/verif_status_per_tool.png")
