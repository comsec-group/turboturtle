import json

from pathlib import Path


results_file = Path("fuzzing/re_verif_results.json")

with open(results_file, "r") as fp:
    results = json.load(fp)


n_cex = len(list(filter(lambda x: results[x][0] == "CEX", results)))
n_undet = len(list(filter(lambda x: results[x][0] == "UNDETERMINED", results)))
n_timeout = len(list(filter(lambda x: results[x][0] == "TIMEOUT", results)))

others = list(
    filter(lambda x: results[x][0] not in ["CEX", "UNDETERMINED", "TIMEOUT"], results)
)
n_other = len(others)

print("CEX:", n_cex, "UNDETERMINED:", n_undet, "TIMEOUT:", n_timeout, "ERROR:", n_other)

for other in others:
    print(other, results[other])

max_dur = 0.0

for result in results:
    dur = results[result][1]

    if dur > max_dur:
        max_dur = dur

print("max verif duration:", max_dur)
