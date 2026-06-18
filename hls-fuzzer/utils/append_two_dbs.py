import sys
from pathlib import Path
from tinydb import TinyDB, Query

assert len(sys.argv) >= 3

target_db_path = sys.argv[1]
source_db_paths = sys.argv[2:]

target_db = TinyDB(target_db_path)
target_run_table = target_db.table("runs")
target_pipeline_table = target_db.table("pipelines")

for source_db_path in source_db_paths:
    source_db = TinyDB(source_db_path)

    source_run_table = source_db.table("runs")
    source_pipeline_table = source_db.table("pipelines")

    for run in source_run_table.all():
        target_run_table.insert(dict(run))

    for pipeline in source_pipeline_table.all():
        target_pipeline_table.insert(dict(pipeline))
