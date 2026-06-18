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

fuzzing_runs = [
    "run_20251103172548",
    "run_20251103135445",
    "run_20251105192134",
    "run_20251103182938",
    "run_20251103220510",
    "run_20251103151233",
    "run_20251103225349",
    "run_20251105172816",
    "run_20251104122319",
    "run_20251112155105",
    "run_20251112131627",
    "run_20251113002507",
    "run_20251113030129",
    "run_20251113134635",
    "run_20251110223525",
    "run_20251113035947",
    "run_20251109163309",
    "run_20251111232414",
    "run_20251112023946",
    "run_20251111141737",
    "run_20251113191844",
    "run_20251113203305",
    "run_20251113205330",
    "run_20251113214952"
]


for fuzzing_run in fuzzing_runs:

    config_file = glob.glob(f"{backup_location}/{fuzzing_run}/*.toml")[0]
    with open(config_file, "rb") as fp:
        config = tomli.load(fp)

        gen_strategy = config["generation_strategy"]
        df_strategy = config["dataflow_strategy"]
        strategy = f"{gen_strategy}_{df_strategy}"
        print(fuzzing_run, strategy)

        min_statements = config.get("min_num_statements")
        max_statements = config.get("max_num_statements")
        print(f"  min_statements: {min_statements}, max_statements: {max_statements}")

















