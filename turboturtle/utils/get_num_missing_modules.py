import tinydb

run_name = "run_20250430174538"
path = f"/local/home/zdenis/turboturtle_ro/fuzzing/{run_name}/db.json"
db = tinydb.TinyDB(path)
pipelines = db.table("pipelines")

missing_modules = 0

print(len(pipelines))

for pipeline in pipelines:
    missmods = pipeline["missing_modules"]

    if len(missmods) != 0:
        missing_modules += 1
        print(pipeline["name"], pipeline["prove_status"])
        for missmod in missmods:
            print("    " + missmod)

print(missing_modules)
