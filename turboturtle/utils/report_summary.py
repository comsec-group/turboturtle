import sys
from pathlib import Path

from tinydb import TinyDB, Query
from tinydb.table import Document

run_db_file = Path(sys.argv[-1])
db = TinyDB(run_db_file)

run_table = db.table("runs")
pipeline_table = db.table("pipelines")

run = run_table.get(doc_id=1)

assert isinstance(run, Document)
run: Document

run_name: str = run["name"]
c_fuzzer_args: list[str] = run["fuzzer_args"]
hls_tools: list[str] = run["hls_tools"]

print("Run Name:", run_name)
print("Fuzzer Args:", " ".join(c_fuzzer_args))

pipeline = Query()

for hls_tool in hls_tools:
    total = len(pipeline_table.search(pipeline.fragment({"hls_tool": hls_tool})))
    proven = len(
        pipeline_table.search(
            pipeline.fragment({"hls_tool": hls_tool, "prove_status": "PROVEN"})
        )
    )
    cex = len(
        pipeline_table.search(
            pipeline.fragment({"hls_tool": hls_tool, "prove_status": "CEX"})
        )
    )
    undetermined = len(
        pipeline_table.search(
            pipeline.fragment({"hls_tool": hls_tool, "prove_status": "UNDETERMINED"})
        )
    )
    error = len(
        pipeline_table.search(
            pipeline.fragment({"hls_tool": hls_tool, "prove_status": "ERROR"})
        )
    )

    print(
        "HLS Tool:",
        hls_tool,
        "total:",
        total,
        "proven:",
        proven,
        "cex:",
        cex,
        "undetermined:",
        undetermined,
        "error:",
        error,
    )
