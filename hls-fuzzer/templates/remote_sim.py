import sys
import json
import subprocess

from pathlib import Path


if "--debug" in sys.argv:
    debug = True
else:
    debug = False


def create_new_file(lines: list[str], path: Path):
    """
    Create a new file based on path. (Overrides existing file at path!)
    Puts each string in lines on a new line.
    Ends file with a newline.
    """

    with open(path, "w") as file:
        file.writelines("\n".join(lines))
        file.write("\n")


if debug:
    random_values = {}


sim_repeats = int(sys.argv[1])
sim_slice = int(sys.argv[2])
ts_found = False
timeout = False
can_finish = False

with open("sim_data.json", "r") as fp:
    sim_data: list[dict[str, list[str]]] = json.load(fp)

with open("all_data_port_names.json", "r") as fp:
    all_data_ports: list[str] = json.load(fp)

for sim_index in range(sim_repeats):
    # prepare data
    sim_iter_data = sim_data[sim_slice * sim_repeats + sim_index]
    for port_name in all_data_ports:
        create_new_file(
            sim_iter_data[port_name],
            Path(f"./{port_name}.mem"),
        )

    # launch simulation # TODO: since we generate the random numbers in a prepared file, we could launch Questa once,
    # and reset the design from within Questa. Would save startup overhead and require less requests to the license server.
    completed_process = subprocess.run(
        [
            "questa-2022.3-bt",
            "vsim",
            "-batch",
            "-sv_seed",
            "random",
            "-do",
            "start_sim.tcl",
        ],
        capture_output=True,
    )

    if completed_process.returncode != 0:
        print(completed_process.stdout.decode())
        raise Exception(
            f"Failed to simulate the design: {completed_process.stderr.decode()}"
        )

    stdout_lines = completed_process.stdout.decode().splitlines()
    # parse stdout for timing side-channel
    for line in stdout_lines:
        if line.startswith("# [bug-ts]"):
            ts_found = True
        elif line.startswith("# [error-timeout]"):
            timeout = True
        elif line.startswith("# [success-finish]"):
            can_finish = True

        if debug:
            if line.startswith("# [debug-random-input]"):
                line = line.replace("# [debug-random-input]", "")
                line = line.strip()
                random_value = int(line)

                if random_value in random_values:
                    random_values[random_value] += 1
                else:
                    random_values[random_value] = 1

    if ts_found or timeout:
        break

if debug:
    with open("random_inputs.json", "w") as fp:
        json.dump(random_values, fp)

print(completed_process.stdout.decode())

with open(Path("test_status.txt"), "w") as fp:
    if ts_found:
        fp.write("FAIL\n")
    else:
        if timeout or not can_finish:
            fp.write("ERROR\n")
        else:
            fp.write("PASS\n")
