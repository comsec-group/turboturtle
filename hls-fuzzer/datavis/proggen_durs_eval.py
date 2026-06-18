import json
import matplotlib.pyplot as plt
import numpy as np


with open("/local/home/zdenis/turboturtle/proggen_durs_results.json", "r") as fp:
    results = json.load(fp)

species = tuple(results.keys())


penguin_means = {
    "1": [
        sum(results[key]["1"].values()) / len(results[key]["1"].values())
        for key in results
    ],
    "10": [
        sum(results[key]["10"].values()) / len(results[key]["1"].values())
        for key in results
    ],
    "100": [
        sum(results[key]["100"].values()) / len(results[key]["1"].values())
        for key in results
    ],
    "1000": [
        sum(results[key]["1000"].values()) / len(results[key]["1"].values())
        for key in results
    ],
}


for i, strategy in enumerate(species):
    row_str = strategy

    for num_stmts in penguin_means:
        row_str += f" & ${penguin_means[num_stmts][i]:.2f}$"

    print(row_str)

x = np.arange(len(species))  # the label locations
width = 0.25  # the width of the bars
multiplier = 0

fig, ax = plt.subplots(layout="constrained")

for attribute, measurement in penguin_means.items():
    offset = width * multiplier
    rects = ax.bar(x + offset, measurement, width, label=attribute)
    ax.bar_label(rects, padding=3)
    multiplier += 1

# Add some text for labels, title and custom x-axis tick labels, etc.
ax.set_ylabel("Length (mm)")
ax.set_title("Penguin attributes by species")
ax.set_xticks(x + width, species)
ax.legend(loc="upper left", ncols=3)
ax.set_ylim(0, 1)

plt.savefig("datavis/plots/proggen_durs_eval.png")
