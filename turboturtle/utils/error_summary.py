import sys

from pathlib import Path
from tinydb import TinyDB, Query

run_db_file = Path(sys.argv[-1])
db = TinyDB(run_db_file)

run_table = db.table("runs")
pipeline_table = db.table("pipelines")

query = Query()

error_messages = {}

for pipeline in pipeline_table.search(query.error_message != ""):
    error_message = pipeline["error_message"]
    if error_message in error_messages:
        error_messages[error_message] += 1
    else:
        error_messages[error_message] = 1

for msg, count in error_messages.items():
    print(msg, count)
