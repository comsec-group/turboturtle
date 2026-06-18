import sys
import glob

from pathlib import Path
from pyDigitalWaveTools.vcd.parser import VcdParser


def sanity_check(vcd_file: Path):
    # check cex traces if the two secret values have different values

    try:
        with open(vcd_file) as fp:
            parser = VcdParser()
            parser.parse(fp)

            tb = parser.scope.children.get("tb")

            sanity_checks: list[bool] = []

            secret_signal_names = []

            for signal_name in tb.children:
                if signal_name.endswith("_secret"):
                    secret_signal_names.append(signal_name)

            secret_signal_names.sort()

            for i_a in range(len(secret_signal_names) // 2):
                i_b = i_a + len(secret_signal_names) // 2

                secret_a = tb.children.get(secret_signal_names[i_a])
                secret_b = tb.children.get(secret_signal_names[i_b])

                _, secret_a_value = secret_a.data[0]
                _, secret_b_value = secret_b.data[0]

                if secret_a_value == secret_b_value:
                    sanity_checks.append(False)
                else:
                    sanity_checks.append(True)

            if not any(sanity_checks):
                # false positive
                raise Exception(
                    f"Secret values in cex traces are the same for no_sidechannel --> false positive."
                )

    except Exception as exception:
        print(str(exception))


run_folder = sys.argv[1]

print(run_folder)
for folder in glob.glob(f"{run_folder}/run_*_pipeline_*"):
    cex_vcd_file = Path(f"{folder}/verif/cex_waves/no_sidechannel.vcd")
    
    if cex_vcd_file.exists():
        print(folder)
        sanity_check(cex_vcd_file)
        print("")
