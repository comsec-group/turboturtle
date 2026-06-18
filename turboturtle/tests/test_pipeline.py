import sys
import json
import unittest
from pathlib import Path


sys.path.append(str(Path(__file__).parent.parent.parent))
from turboturtle_v3.pipeline.pipeline import (
    PipelineConfig,
    BambuPipeline,
    DynamaticPipeline,
)
from turboturtle_v3.proof_status import ProofStatus
from turboturtle_v3.ttutils import TURBOTURTLE_ROOT_DIR, SIM_REPEATS, ttcall


class TestBambuPipeline(unittest.TestCase):
    def test_undetermined(self):
        top_fn_name = "myfunction"
        pipeline_name = "bambu_test_undetermined"
        out_dir = Path(f"{TURBOTURTLE_ROOT_DIR}/fuzzing")

        input_program = (
            ""
            "// fn_arg_0_secret,fn_arg_1 \n"
            f"int {top_fn_name}(int fn_arg_0_secret, int fn_arg_1)" + " {\n"
            "  return fn_arg_0_secret + fn_arg_1;\n"
            "}\n"
            ""
        )

        reset_active_low = True
        hls_args = []

        pipeline_config = PipelineConfig(
            name=pipeline_name,
            top_fn_name=top_fn_name,
            out_dir=out_dir,
            backup_dir=Path(),
            backup=False,
            cleanup=True,
        )

        pipeline = BambuPipeline(
            input_program=input_program,
            hls_args=hls_args,
            pipeline_config=pipeline_config,
            reset_active_low=reset_active_low,
        )

        proof_status, _, _, _ = pipeline.start()

        self.assertIs(proof_status, ProofStatus.UNDETERMINED)

        pipeline.do_cleanup()
        ttcall(["rm", "-rf", f"{out_dir}/{pipeline_name}"])

    def test_mixed_design(self):
        top_fn_name = "myfunction"
        pipeline_name = "bambu_test_mixed_design"
        out_dir = Path(f"{TURBOTURTLE_ROOT_DIR}/fuzzing")

        input_program = (
            ""
            "// fn_arg_0_secret,fn_arg_1 \n"
            f"float {top_fn_name}(float fn_arg_0_secret, float fn_arg_1)" + " {\n"
            "  float var = 0.0;\n"
            "  for (int i = 0; i < 4; i++) {\n"
            "    var += (float) i * (fn_arg_0_secret + fn_arg_1);\n"
            "    if (i < 2) {\n"
            "      var -= (float) i;\n"
            "    }\n"
            "  }\n"
            "  return var;\n"
            "}\n"
            ""
        )
        reset_active_low = True
        hls_args = ["--flopoco"]

        pipeline_config = PipelineConfig(
            name=pipeline_name,
            top_fn_name=top_fn_name,
            out_dir=out_dir,
            backup_dir=Path(),
            backup=False,
            cleanup=True,
        )

        pipeline = BambuPipeline(
            input_program=input_program,
            hls_args=hls_args,
            pipeline_config=pipeline_config,
            reset_active_low=reset_active_low,
        )

        proof_status, _, _, _ = pipeline.start()

        self.assertIs(proof_status, ProofStatus.UNDETERMINED)

        pipeline.do_cleanup()
        ttcall(["rm", "-rf", f"{out_dir}/{pipeline_name}"])

    def test_cex(self):
        top_fn_name = "myfunction"
        pipeline_name = "bambu_test_cex"
        out_dir = Path(f"{TURBOTURTLE_ROOT_DIR}/fuzzing")

        input_program = (
            ""
            "// fn_arg_0_secret,fn_arg_1 \n"
            f"int {top_fn_name}(int fn_arg_0_secret, int fn_arg_1)" + " {\n"
            "  return fn_arg_0_secret / fn_arg_1;\n"
            "}\n"
            ""
        )

        reset_active_low = True
        hls_args = []

        pipeline_config = PipelineConfig(
            name=pipeline_name,
            top_fn_name=top_fn_name,
            out_dir=out_dir,
            backup_dir=Path(),
            backup=False,
            cleanup=True,
        )

        pipeline = BambuPipeline(
            input_program=input_program,
            hls_args=hls_args,
            pipeline_config=pipeline_config,
            reset_active_low=reset_active_low,
        )

        proof_status, _, _, _ = pipeline.start()

        self.assertIs(proof_status, ProofStatus.CEX)

        pipeline.do_cleanup()
        ttcall(["rm", "-rf", f"{out_dir}/{pipeline_name}"])



class TestDynamaticPipeline(unittest.TestCase):
    def test_undetermined(self):
        top_fn_name = "myfunction"
        pipeline_name = "dynamatic_test_undetermined"
        out_dir = Path(f"{TURBOTURTLE_ROOT_DIR}/fuzzing")

        input_program = (
            ""
            "// fn_arg_0_secret,fn_arg_1 \n"
            f"int {top_fn_name}(int fn_arg_0_secret, int fn_arg_1)" + " {\n"
            "  int var = 0;\n"
            "  for (int i = 0; i < 4; i++) {\n"
            "    var += i * (fn_arg_0_secret + fn_arg_1);\n"
            "    if (i < 2) {\n"
            "      var -= i;\n"
            "    }\n"
            "  }\n"
            "  return var;\n"
            "}\n"
            "#include <stdlib.h>\n"
            '#include "dynamatic/Integration.h"\n'
            "int main(void) {\n"
            "  int fn_arg_0_secret = rand();\n"
            "  int fn_arg_1 = rand();\n"
            f"  CALL_KERNEL({top_fn_name}, fn_arg_0_secret, fn_arg_1);\n"
            "  return 0;\n"
            "}\n"
            ""
        )
        reset_active_low = False
        hls_args = []

        pipeline_config = PipelineConfig(
            name=pipeline_name,
            top_fn_name=top_fn_name,
            out_dir=out_dir,
            backup_dir=Path(),
            backup=False,
            cleanup=True,
        )

        pipeline = DynamaticPipeline(
            input_program=input_program,
            hls_args=hls_args,
            pipeline_config=pipeline_config,
            reset_active_low=reset_active_low,
        )

        proof_status, _, _, _ = pipeline.start()

        self.assertIs(proof_status, ProofStatus.UNDETERMINED)

        pipeline.do_cleanup()
        ttcall(["rm", "-rf", f"{out_dir}/{pipeline_name}"])

    def test_cex(self):
        top_fn_name = "myfunction"
        pipeline_name = "dynamatic_test_cex"
        out_dir = Path(f"{TURBOTURTLE_ROOT_DIR}/fuzzing")

        input_program = (
            ""
            "// fn_arg_0_secret,fn_arg_1 \n"
            f"int {top_fn_name}(int fn_arg_0_secret, int fn_arg_1)" + " {\n"
            "  int var = 0;\n"
            "  for (int i = 0; i < 4; i++) {\n"
            "    var += i * (fn_arg_0_secret + fn_arg_1);\n"
            "    if (i < 2) {\n"
            "      var -= i;\n"
            "    }\n"
            "    if (i < fn_arg_0_secret) {\n"
            "      break;\n"
            "    }\n"
            "  }\n"
            "  return var;\n"
            "}\n"
            "#include <stdlib.h>\n"
            '#include "dynamatic/Integration.h"\n'
            "int main(void) {\n"
            "  int fn_arg_0_secret = rand();\n"
            "  int fn_arg_1 = rand();\n"
            f"  CALL_KERNEL({top_fn_name}, fn_arg_0_secret, fn_arg_1);\n"
            "  return 0;\n"
            "}\n"
            ""
        )
        reset_active_low = False
        hls_args = []

        pipeline_config = PipelineConfig(
            name=pipeline_name,
            top_fn_name=top_fn_name,
            out_dir=out_dir,
            backup_dir=Path(),
            backup=False,
            cleanup=True,
        )

        pipeline = DynamaticPipeline(
            input_program=input_program,
            hls_args=hls_args,
            pipeline_config=pipeline_config,
            reset_active_low=reset_active_low,
        )

        proof_status, _, _, _ = pipeline.start()

        self.assertIs(proof_status, ProofStatus.CEX)

        pipeline.do_cleanup()
        ttcall(["rm", "-rf", f"{out_dir}/{pipeline_name}"])


class TestSimulation(unittest.TestCase):
    def test_random_inputs_verilator(self):
        top_fn_name = "myfunction"
        pipeline_name = "test_random_inputs_verilator"
        out_dir = Path(f"{TURBOTURTLE_ROOT_DIR}/fuzzing")

        input_program = (
            ""
            "// fn_arg_0_secret,fn_arg_1 \n"
            f"int {top_fn_name}(int fn_arg_0_secret, int fn_arg_1)" + " {\n"
            "  int var = 0;\n"
            "  for (int i = 0; i < 4; i++) {\n"
            "    var += i * (fn_arg_0_secret + fn_arg_1);\n"
            "    if (i < 2) {\n"
            "      var -= i;\n"
            "    }\n"
            "  }\n"
            "  return var;\n"
            "}\n"
            ""
        )
        reset_active_low = True
        hls_args = []

        pipeline_config = PipelineConfig(
            name=pipeline_name,
            top_fn_name=top_fn_name,
            out_dir=out_dir,
            backup_dir=Path(),
            backup=False,
            cleanup=True,
        )

        pipeline = BambuPipeline(
            input_program=input_program,
            hls_args=hls_args,
            pipeline_config=pipeline_config,
            reset_active_low=reset_active_low,
        )

        proof_status, _, _, _ = pipeline.start(debug=True)

        with open(
            Path(f"{out_dir}/{pipeline_name}/verif/sim/random_inputs.json"), "r"
        ) as fp:
            random_inputs = json.load(fp)

        # 2 secret + 1 public input (3), 5 sim repeats without reset, 90%
        self.assertGreaterEqual(len(random_inputs), 0.95 * 3 * 5 * SIM_REPEATS)

        pipeline.do_cleanup()
        ttcall(["rm", "-rf", f"{out_dir}/{pipeline_name}"])

    def test_random_inputs_questa(self):
        top_fn_name = "myfunction"
        pipeline_name = "test_random_inputs_questa"
        out_dir = Path(f"{TURBOTURTLE_ROOT_DIR}/fuzzing")

        input_program = (
            ""
            "// fn_arg_0_secret,fn_arg_1 \n"
            f"float {top_fn_name}(float fn_arg_0_secret, float fn_arg_1)" + " {\n"
            "  float var = 0.0;\n"
            "  for (int i = 0; i < 4; i++) {\n"
            "    var += (float) i * (fn_arg_0_secret + fn_arg_1);\n"
            "    if (i < 2) {\n"
            "      var -= (float) i;\n"
            "    }\n"
            "  }\n"
            "  return var;\n"
            "}\n"
            ""
        )
        reset_active_low = True
        hls_args = ["--flopoco"]

        pipeline_config = PipelineConfig(
            name=pipeline_name,
            top_fn_name=top_fn_name,
            out_dir=out_dir,
            backup_dir=Path(),
            backup=False,
            cleanup=True,
        )

        pipeline = BambuPipeline(
            input_program=input_program,
            hls_args=hls_args,
            pipeline_config=pipeline_config,
            reset_active_low=reset_active_low,
        )

        proof_status, _, _, _ = pipeline.start(debug=True)

        with open(
            Path(f"{out_dir}/{pipeline_name}/verif/sim/random_inputs.json"), "r"
        ) as fp:
            random_inputs = json.load(fp)

        # 2 secret + 1 public input (3), 5 sim repeats without reset, 90%
        self.assertGreaterEqual(len(random_inputs), 0.95 * 3 * 5 * SIM_REPEATS)

        pipeline.do_cleanup()
        ttcall(["rm", "-rf", f"{out_dir}/{pipeline_name}"])


if __name__ == "__main__":
    unittest.main()
