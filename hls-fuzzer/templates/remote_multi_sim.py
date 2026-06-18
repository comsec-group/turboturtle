import sys
import shutil
import subprocess
import multiprocessing

T_Done = tuple[str, int, str, str]
T_Result = tuple[str, int, str, str, str]

NUM_PROCESSES = int(sys.argv[1])
TOTAL_SIM_REPEATS = int(sys.argv[2])
SLICED_SIM_REPEATS = TOTAL_SIM_REPEATS // NUM_PROCESSES

if "--ip" in sys.argv:
    ip_sim = "/sim_questa/questa"
else:
    ip_sim = ""


def start_sim(input: tuple[str, int]) -> T_Done:
    task, slice_num = input

    commands = [
        f"cd {task}{ip_sim}",
        f"python3.10 remote_sim.py {SLICED_SIM_REPEATS} {slice_num}",
    ]

    command = ";".join(commands)
    cproc = subprocess.run(["bash", "-c", command], capture_output=True)

    return task, cproc.returncode, cproc.stdout.decode(), cproc.stderr.decode()


results: list[T_Result] = []
with multiprocessing.Pool(NUM_PROCESSES) as pool:
    tasks = [(f"slice{i}", i) for i in range(NUM_PROCESSES)]

    for done in pool.imap_unordered(start_sim, tasks):
        task, retcode, stdout, stderr = done

        if retcode != 0:
            print(stderr)
            results.append((task, retcode, stdout, stderr, "ERROR"))
        else:
            with open(f"{task}{ip_sim}/test_status.txt", "r") as fp:
                test_status = fp.readline().strip()

            results.append((task, retcode, stdout, stderr, "ERROR"))

            if test_status == "FAIL":
                pool.terminate()

for status_check in ["FAIL", "ERROR", "PASS"]:
    for result in results:
        task, retcode, stdout, stderr, test_status = result

        if test_status == status_check:
            print(stdout)
            shutil.copy(f"{task}{ip_sim}/test_status.txt", "test_status.txt")
            shutil.copy(f"{task}{ip_sim}/traces.vcd", "traces.vcd")
            sys.exit()
else:
    raise Exception("Something went wrong during questa remote multi sim.")
