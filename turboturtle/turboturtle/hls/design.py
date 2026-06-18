import copy
import time
import json
import random
import pickle
import itertools

from pathlib import Path
from typing import Callable

from turboturtle.pipeline.report import PipelineReport
from turboturtle.pipeline.config import PipelineConfig
from turboturtle.pipeline.pipeline import (
    T_Pipeline,
    BambuPipeline,
    DynamaticPipeline,
)
from turboturtle.hls.tool import HLSTool
from turboturtle.test_status import TestStatus
from turboturtle.cturtle.program import Program
from turboturtle.cturtle.statement import (
    ForLoopIterationStatement,
    CompoundStatement,
    PragmaDirective,
)

from turboturtle.ttutils import (
    create_new_file,
    ttcall,
    REDUCTION_TIMEOUT,
)
from turboturtle.hls.arguments import bambu
from turboturtle.hls.arguments.argument import Arg
from turboturtle.report import DesignReport
from turboturtle.exceptions import HLSRuleApplicationException, ReductionException
from turboturtle.config import CONFIG


def get_error_pipeline_report() -> PipelineReport:
    return PipelineReport(
        test_status=TestStatus.ERROR,
        simulator="",
        synthesis_duration=0.0,
        verilation_duration=0.0,
        verification_duration=0.0,
        design_a_done_count=0,
        design_b_done_count=0,
        has_sim_timeout=False,
        has_subprocess_timeout=False,
        is_combinational=False,
    )


class Design:
    def __init__(
        self,
        c_program: Program,
        hls_tool: HLSTool,
        pipeline_config: PipelineConfig,
        disable_reduction: bool,
    ) -> None:
        self.c_program: Program = c_program
        self.last_c_program: Program = copy.deepcopy(self.c_program)
        self.original_c_program: Program = copy.deepcopy(self.c_program)
        self.hls_tool: HLSTool = hls_tool
        self.hls_args: list[Arg] = []
        self.last_hls_args: list[Arg] = []
        self.original_hls_args: list[str] = []
        self.pipeline: T_Pipeline | None = None
        self.pipeline_config = pipeline_config
        self.disable_reduction = disable_reduction

    def start_new(self) -> DesignReport:
        tasks: list[Callable[[DesignReport], DesignReport]] = [
            self._inject_hls_pragmas,
            self._select_random_hls_compiler_configuration,
            self._create_pipeline,
            self._start_pipeline,
        ]

        if not self.disable_reduction:
            tasks.append(self._reduce)

        report = DesignReport(
            self.pipeline_config.name,
            self.hls_tool.name,
        )
        report.original_program_report = self.original_c_program.report()

        for task in tasks:
            old_report = copy.deepcopy(report)

            try:
                report = task(report)
                report.executed_tasks.append(task.__name__)
            except Exception as exception:
                report = old_report
                report.failed_task = task.__name__
                report.exception_type = exception.__class__.__name__

                if "SUBPROCESS TIMEOUT" in str(exception):
                    report.pipeline_report.has_subprocess_timeout = True

                report.pipeline_report.test_status = TestStatus.ERROR

                exception_msg = "Exception for task " + task.__name__ + str(exception)
                if self.pipeline is not None:
                    with open(f"{self.pipeline.log_dir}/error.txt", "w") as fp:
                        fp.write(exception_msg)
                else:
                    print(exception_msg)

                break

        report = self._combinational_check(report)

        # store original program as text
        create_new_file(
            self.original_c_program.render().splitlines(),
            Path(
                f"{self.pipeline.working_dir}/{self.pipeline_config.top_fn_name}_original.c"
            ),
        )

        if self.pipeline_config.backup:
            ttcall(
                [
                    "cp",
                    "-r",
                    "--preserve=timestamps",
                    str(self.pipeline.working_dir),
                    str(self.pipeline_config.backup_dir),
                ]
            )

        if self.pipeline_config.cleanup:
            try:
                self.pipeline.do_cleanup()
                ttcall(["rm", "-rf", str(self.pipeline.working_dir)])
            except Exception as exception:
                with open(f"{self.pipeline.log_dir}/cleanup_error.log", "w") as fp:
                    fp.write(str(exception))

        return report

    def _combinational_check(self, report: DesignReport) -> DesignReport:
        if self.pipeline is None:
            return report

        if report.exception_type == "CombinationalDesignException":
            report.pipeline_report.test_status = TestStatus.PASS
            report.pipeline_report.is_combinational = True

        return report

    def _create_pipeline(self, report: DesignReport) -> DesignReport:
        raise NotImplementedError()

    def _start_pipeline(self, report: DesignReport) -> DesignReport:
        if self.pipeline is None:
            raise Exception("Pipeline is not initialized.")

        report.pipeline_report = self.pipeline.start()

        return report

    def _inject_hls_pragmas(self, report: DesignReport) -> DesignReport:
        """Inject HLS tool specific HLS pragmas into the source code."""
        return report

    def _select_random_hls_compiler_configuration(
        self, report: DesignReport
    ) -> DesignReport:
        """Select random HLS compiler configuration."""
        return report

    def _reduce(self, report: DesignReport) -> DesignReport:
        report.original_hls_args = self.original_hls_args

        if report.pipeline_report.test_status is not TestStatus.FAIL:
            return report

        print(f"{self.pipeline.name}: reducing C program")

        report.is_reduced = True
        reduction_duration = time.time()

        new_report = copy.deepcopy(report)
        new_report = self._create_pipeline(new_report)

        reduce_tail = True

        while True:
            self.last_c_program = copy.deepcopy(self.c_program)

            if reduce_tail:
                can_reduce_further = self.c_program.reduce_tail()

                if not can_reduce_further:
                    self.c_program.cleanup_unassigned_decls()
                    break

                new_report = self._create_pipeline(new_report)
                try:
                    pipeline_report = self.pipeline.start()
                except Exception as exception:
                    self.c_program = copy.deepcopy(self.last_c_program)
                    pipeline_report = get_error_pipeline_report()
                    create_new_file(
                        str(exception).splitlines(),
                        Path(f"{self.pipeline.log_dir}/program_reduction_error.log"),
                    )
                    break

                if pipeline_report.test_status in [TestStatus.PASS, TestStatus.ERROR]:
                    self.c_program = copy.deepcopy(self.last_c_program)
                    reduce_tail = False
                else:
                    reduce_tail = True

            else:
                can_reduce_further = self.c_program.reduce_head()

                if not can_reduce_further:
                    self.c_program.cleanup_unassigned_decls()
                    break

                new_report = self._create_pipeline(new_report)
                try:
                    pipeline_report = self.pipeline.start()
                except Exception as exception:
                    self.c_program = copy.deepcopy(self.last_c_program)
                    pipeline_report = get_error_pipeline_report()
                    create_new_file(
                        str(exception).splitlines(),
                        Path(f"{self.pipeline.log_dir}/program_reduction_error.log"),
                    )
                    break

                if pipeline_report.test_status in [TestStatus.PASS, TestStatus.ERROR]:
                    self.c_program = copy.deepcopy(self.last_c_program)
                    break

                else:
                    reduce_tail = True

            reduction_duration_temp = time.time() - reduction_duration
            if reduction_duration_temp > REDUCTION_TIMEOUT:
                raise ReductionException("SUBPROCESS TIMEOUT: Reduction timeout!")

        new_report = self._create_pipeline(new_report)
        pipeline_report = self.pipeline.start()

        if pipeline_report.test_status is TestStatus.PASS:
            raise Exception("Got PASS proof status after final reduction step!")

        effect_map: dict[str, bool] = {}
        hls_args = self.hls_args.copy()

        create_new_file(
            self.original_hls_args,
            Path(f"{self.pipeline.log_dir}/../../{self.pipeline.name}_original_hls_args.txt"),
        )

        print(f"{self.pipeline.name}:", self.original_hls_args)
        print(f"{self.pipeline.name}: determining args with effect")

        for hls_arg_index in range(len(hls_args)):
            others = [
                other_arg for i, other_arg in enumerate(hls_args) if i != hls_arg_index
            ]
            combinations = list(
                itertools.product(
                    hls_args[hls_arg_index].get_others(),
                    *[[other_arg] for other_arg in others],
                )
            )
            total = len(combinations)
            has_effect = False

            for _, combination in enumerate(combinations):
                self.hls_args = list(combination)
                new_report = self._create_pipeline(new_report)
                try:
                    pipeline_report = self.pipeline.start()
                    status = pipeline_report.test_status

                except Exception as _:
                    status = TestStatus.ERROR
                    continue

                if status is TestStatus.PASS:
                    has_effect = True
                    break

            effect_map[hls_args[hls_arg_index].__class__.__name__] = has_effect

            reduction_duration_temp = time.time() - reduction_duration
            if reduction_duration_temp > REDUCTION_TIMEOUT:
                raise ReductionException("SUBPROCESS TIMEOUT: Reduction timeout!")

        args_with_effect = [
            arg for arg in hls_args if effect_map[arg.__class__.__name__]
        ]

        print(f"{self.pipeline.name}:", effect_map)

        num_combinations = len(
            list(itertools.product(*[arg.get_all() for arg in args_with_effect]))
        )

        # if num_combinations > 50:
        #     raise ReductionException(
        #         f"Too many combinations to be tested: {num_combinations}"
        #     )

        print(f"{self.pipeline.name}: testing {num_combinations} arg combinations")

        all_arg_option_combs = itertools.product(
            *[arg.get_all() for arg in args_with_effect]
        )
        args_with_effect_status_map: dict[str, list[list[str]]] = {}

        for comb in all_arg_option_combs:
            args = list(comb)
            args_str = [f"{arg.__class__.__name__}_{arg.option}" for arg in args]

            self.hls_args = args
            new_report = self._create_pipeline(new_report)
            try:
                pipeline_report = self.pipeline.start()
                status = pipeline_report.test_status.name
            except Exception as e:
                print(f"Exception while testing combination {args_str}: {e}")
                status = TestStatus.ERROR.name

            if status not in args_with_effect_status_map:
                args_with_effect_status_map[status] = []

            args_with_effect_status_map[status].append(args_str)

            reduction_duration_temp = time.time() - reduction_duration
            if reduction_duration_temp > REDUCTION_TIMEOUT:
                raise ReductionException("SUBPROCESS TIMEOUT: Reduction timeout!")

        reduction_duration = time.time() - reduction_duration
        report.is_minimal = True
        report.reduction_duration = reduction_duration
        report.reduced_hls_args = [
            f"{arg.__class__.__name__}: {arg}" for arg in self.hls_args
        ]
        report.reduced_program_report = self.c_program.report()
        report.argument_effect_map = effect_map
        report.argument_effect_status_map = args_with_effect_status_map
        # report.argument_effect_map = {}
        # report.argument_effect_status_map = {}

        # simple C program reached
        # store simple program as text and as IR
        create_new_file(
            self.c_program.render().splitlines(),
            Path(
                f"{self.pipeline.working_dir}/{self.pipeline_config.top_fn_name}_reduced.c"
            ),
        )
        with open(
            Path(
                f"{self.pipeline.working_dir}/{self.pipeline_config.top_fn_name}_reduced_ir.pkl"
            ),
            "wb",
        ) as fp:
            pickle.dump(self.c_program, fp, pickle.HIGHEST_PROTOCOL)

        return report


class BambuDesign(Design):
    def __init__(
        self,
        c_program: Program,
        pipeline_config: PipelineConfig,
        disable_reduction: bool,
    ) -> None:
        super().__init__(
            c_program, HLSTool.BAMBU_2024_10, pipeline_config, disable_reduction
        )

    def _create_pipeline(
        self,
        report: DesignReport,
    ):
        self.pipeline = BambuPipeline(
            input_program=self.c_program.render(),
            hls_args=[str(arg) for arg in self.hls_args],
            reset_active_low=True,
            pipeline_config=self.pipeline_config,
        )

        return report

    def _backtrack(self, arg_classes, index: int, current_config: list[Arg], tried_options: dict[int, set[str]]) -> list[Arg] | None:
            # Function generated by Claude Sonnet 4.5
            """
            Recursively build a valid configuration using backtracking.

            Args:
                index: Current position in arg_classes
                current_config: Configuration built so far
                tried_options: Map of index -> set of option strings already tried at that index

            Returns:
                Valid configuration or None if no valid configuration exists
            """
            # Base case: we've assigned all arguments
            if index == len(arg_classes):
                if not self._violates_rules(current_config, CONFIG.bambu_hls_rules):
                    return current_config
                else:
                    return None

            # Get the argument class for this position
            arg_class = arg_classes[index]

            # Get all possible options for this argument class
            temp_arg = arg_class()
            all_options = temp_arg.get_all()

            # Randomize the order we try options
            random.shuffle(all_options)

            # Initialize tried options for this index if needed
            if index not in tried_options:
                tried_options[index] = set()

            # Try each option
            for option_arg in all_options:
                option_str = option_arg.option

                # Skip if we've already tried this option at this level
                if option_str in tried_options[index]:
                    continue

                # Mark this option as tried
                tried_options[index].add(option_str)

                # Create a new configuration with this option
                new_config = current_config + [option_arg]

                # Check if this partial configuration violates any rules
                if self._violates_rules(new_config, CONFIG.bambu_hls_rules):
                    # Skip this option, try the next one
                    continue

                # Recurse to fill in the next argument
                result = self._backtrack(arg_classes, index + 1, new_config, tried_options)

                if result is not None:
                    return result

            # If we've tried all options at this level and none worked,
            # clear tried options and return None to backtrack
            tried_options[index].clear()
            return None

    def print_config_and_rule(self, rule, new_hls_args):
            print("Configured options:")
            s = ""
            for arg in new_hls_args:
                s += str(arg) + "\n"
            print(s)
            if rule:
                print("Rule:")
                print(rule)

    def _violates_rules(self, partial_config: list[Arg], rules: list) -> bool:
        # Function generated by Claude Sonnet 4.5
        """Check if current partial configuration violates any rule."""
        for rule in rules:
            # Check if this rule could potentially be violated
            matches_so_far = 0
            for partial_rule in rule:
                name = partial_rule["name"]
                forbidden_options = partial_rule["options"]

                # Check if we have selected this argument type yet
                for arg in partial_config:
                    if type(arg).__name__ == name:
                        if arg.option in forbidden_options:
                            matches_so_far += 1
                            break
                        else:
                            # This arg doesn't match the rule, so the rule can't be violated
                            break
                else:
                    # We haven't selected this argument type yet
                    continue

            # If all parts of the rule matched, it's violated
            if matches_so_far == len(rule):
                return True

        return False

    def _select_random_hls_compiler_configuration(
        self, report: DesignReport
    ) -> DesignReport:

        # Randomized backtracking implementation
        # Example for a rule:
        # [
        #     { name = "SchedulingBambuArg", options = [
        #         "--parametric-list-based=0",
        #         "--parametric-list-based=1",
        #         "--parametric-list-based=2",
        #         "--no-chaining",
        #     ] },
        #     { name = "FloatingPointImplementationBambuArg", options = [
        #         "--soft-float",
        #         "--fp-subnormal",
        #     ] },
        # ],
        # The rule for SchedulingBambuArg or FloatingPointImplementationBambuArg are the partial rules
        # Any combination of options combined in a rule is forbidden

        # Define all argument classes in order
        arg_classes = [
            bambu.CompilerBambuArg,
            bambu.SchedulingBambuArg,
            bambu.HLSDivBambuArg,
            bambu.FloatingPointImplementationBambuArg,
            bambu.CompilerOptBambuArg,
            bambu.AccessAlignmentBambuArg,
            bambu.HLSFPDivBambuArg,
            bambu.RegisterAllocationBambuArg,
            bambu.SharedInputRegistersBambuArg,
            bambu.ModuleBindingBambuArg,
            bambu.MemoryCtrlTypeBambuArg,
            bambu.SparseMemoryBambuArg,
            bambu.DoNotUseAsynchronousMemoriesBambuArg,
            bambu.SerializeMemoryAccessBambuArg,
            bambu.ROMDuplicationBambuArg,
            bambu.BRAMHighLatencyBambuArg,
            bambu.DeviceNameBambuArg,
            bambu.LibmStdRoundingBambuArg,
            bambu.FPSubnormalBambuArg,
            bambu.FPExceptionModeBambuArg,
            bambu.FPRoundingModeBambuArg,
            bambu.FSMEncodingBambuArg,
            bambu.DSPFracturingBambuArg,
            bambu.TimingModelBambuArg,
            bambu.MemoryAllocationPolicyBambuArg,
        ]

        # Start backtracking
        max_attempts = 100
        for attempt in range(max_attempts):
            tried_options: dict[int, set[str]] = {}
            new_hls_args = self._backtrack(arg_classes, 0, [], tried_options)

            if new_hls_args is not None:
                print(f"Found valid configuration after {attempt + 1} attempt(s)")
                self.print_config_and_rule("", new_hls_args)
                self.hls_args.extend(new_hls_args)
                break
        else:
            # If we couldn't find a valid configuration after max_attempts,
            # use default arguments by not specifying any arguments
            print(f"Could not find valid configuration after {max_attempts} attempts, using default arguments")

        self.original_hls_args = [
            f"{arg.__class__.__name__}: {arg}" for arg in self.hls_args
        ]

        return report

    def _combinational_check(self, report: DesignReport) -> DesignReport:
        if self.pipeline is None:
            return report

        bambu_log_file = Path(f"{self.pipeline.log_dir}/bambu.log")

        if not bambu_log_file.exists():
            return report

        with open(bambu_log_file, "r") as fp:
            for line in fp.readlines():
                if (
                    "ISE needs IOB to perform timing analysis of combinational circuit"
                    in line
                ):
                    report.pipeline_report.test_status = TestStatus.PASS
                    report.pipeline_report.is_combinational = True

        return report


class DynamaticDesign(Design):
    def __init__(
        self,
        c_program: Program,
        pipeline_config: PipelineConfig,
        disable_reduction: bool,
    ):
        super().__init__(
            c_program, HLSTool.DYNAMATIC_B0F8A59, pipeline_config, disable_reduction
        )

    def _create_pipeline(self, report: DesignReport) -> DesignReport:
        indent = "  "

        c_program = self.c_program.render()
        c_program += "\n"

        main_func = [
            "#include <stdlib.h>",
            '#include "dynamatic/Integration.h"',
            "int main() {",
            *[
                indent
                + f"{fn_arg.data_type} {fn_arg.name} = ({fn_arg.data_type}) rand();"
                for fn_arg in self.c_program.top_fn.fn_args
            ],
            indent
            + "CALL_KERNEL"
            + "("
            + self.pipeline_config.top_fn_name
            + ","
            + ",".join([fn_arg.name for fn_arg in self.c_program.top_fn.fn_args])
            + ");",
            indent + "return 0;",
            "}\n",
        ]

        c_program += "\n".join(main_func)

        self.pipeline = DynamaticPipeline(
            input_program=c_program,
            hls_args=self.hls_args,
            reset_active_low=False,
            pipeline_config=self.pipeline_config,
        )

        return report


def get_design_types(
    design_type_names: list[str],
) -> list[type[BambuDesign | DynamaticDesign]]:
    design_types: list[
        type[BambuDesign | DynamaticDesign]
    ] = []

    for design_type_name in design_type_names:
        if design_type_name == "BambuDesign":
            design_types.append(BambuDesign)
        elif design_type_name == "DynamaticDesign":
            design_types.append(DynamaticDesign)
        else:
            raise Exception(f"Unknown design type: {design_type_name}")

    return design_types
