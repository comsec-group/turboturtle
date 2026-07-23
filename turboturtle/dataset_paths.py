from __future__ import annotations

import os
from pathlib import Path


DATASET_ROOT = Path(os.environ.get("TURBOTURTLE_DATASET_ROOT", "/data/turboturtle/dataset_public"))


def dataset_root() -> Path:
    return DATASET_ROOT


def pipelines_root() -> Path:
    return DATASET_ROOT


def re_verif_root() -> Path:
    return DATASET_ROOT / "re_verif"


def hls_fuzzing_data_set_root() -> Path:
    return DATASET_ROOT / "hls_fuzzing" / "data_set"


def run_path(run_name: str) -> Path:
    return pipelines_root() / run_name
