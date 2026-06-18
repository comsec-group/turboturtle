import pickle
from pathlib import Path

import turboturtle_v3
from turboturtle_v3.report import DesignReport
from turboturtle_v3.cturtle_v3.variables import VariableLoop, VariableIf, VariableFakeIf


def main():
    # config_6: run_20250710202034
    # config_4: run_20250713002135
    # config_5: run_20250719200942
    run_names = ["run_20250710202034"]

    reports: list[DesignReport] = []

    for run_name in run_names:
        path = Path(f"/local/home/zdenis/turboturtle_ro/fuzzing/{run_name}/reports.pkl")
        
        with open(path, "rb") as fp:
            reports.extend(pickle.load(fp))

    errors = 0
    no_cex = 0
    cex = 0

    reduced_design_times = []
    synth_times = []
    verilation_times = []
    verification_times = []

    for report in reports:
        if report.error:
            errors += 1
            continue
        elif report.is_minimal:
            cex += 1
            reduced_design_times.append(report.reduction_duration)
            if len(report.reduced_c_program.top_function.vb_fn_body.varpool._varpool) == 1:
                last_var = report.reduced_c_program.top_function.vb_fn_body.varpool._varpool[0]

                if type(last_var) not in [VariableLoop, VariableFakeIf, VariableIf]:
                    print(report.name)
                    print(report.reduced_hls_args)
                    print(report.reduced_c_program)
        else:
            no_cex += 1
        
        synth_times.append(report.synth_duration)
        verilation_times.append(report.verilation_duration)
        verification_times.append(report.verification_duration)

    average_reduction_time = sum(reduced_design_times) / len(reduced_design_times)
    average_reduction_time = average_reduction_time / 60.0
    max_reduction_time = max(reduced_design_times) / 60.0
    min_reduction_time = min(reduced_design_times) / 60.0

    average_synth_time = sum(synth_times) / len(synth_times)
    average_verilation_time = sum(verilation_times) / len(verilation_times)
    average_verification_time = sum(verification_times) / len(verification_times)

    print("num. errors:", errors)
    print("num. no cex:", no_cex)
    print("num. cex:", cex)

    print("average reduction time (minutes):", average_reduction_time)
    print("max reduction time (minutes):", max_reduction_time)
    print("min reduction time (minutes):", min_reduction_time)

    print("average synthesis time (seconds):", average_synth_time)
    print("average verilation time (seconds):", average_verilation_time)
    print("average verification time (seconds):", average_verification_time)


if __name__ == "__main__":
    main()

