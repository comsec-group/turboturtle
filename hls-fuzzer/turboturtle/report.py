from turboturtle.pipeline.report import T_PipelineReportDict, PipelineReport
from turboturtle.cturtle.report import T_ProgramReportDict, ProgramReport
from turboturtle.test_status import TestStatus


T_DesignReportDict = dict[
    str,
    str
    | list[str]
    | float
    | bool
    | T_PipelineReportDict
    | T_ProgramReportDict
    | dict[str, bool]
    | dict[str, list[list[str]]],
]


class DesignReport:
    def __init__(self, name: str, hls_tool: str) -> None:
        self.name = name
        self.hls_tool = hls_tool
        self.executed_tasks: list[str] = []
        self.failed_task = ""
        self.exception_type = ""
        self.is_reduced = False
        self.is_minimal = False
        self.reduction_duration = 0.0
        self.original_hls_args: list[str] = []
        self.reduced_hls_args: list[str] = []
        self.pipeline_report = PipelineReport(
            TestStatus.ERROR, "", 0.0, 0.0, 0.0, 0, 0, False, False, False
        )
        self.original_program_report = ProgramReport("", "", 0)
        self.reduced_program_report = ProgramReport("", "", 0)
        self.argument_effect_map: dict[str, bool] = {}
        self.argument_effect_status_map: dict[str, list[list[str]]] = {}

    def as_dict(self) -> T_DesignReportDict:
        return {
            "name": self.name,
            "hls_tool": self.hls_tool,
            "executed_tasks": self.executed_tasks,
            "failed_task": self.failed_task,
            "exception_type": self.exception_type,
            "is_reduced": self.is_reduced,
            "is_minimal": self.is_minimal,
            "reduction_duration": self.reduction_duration,
            "original_hls_args": self.original_hls_args,
            "reduced_hls_args": self.reduced_hls_args,
            "argument_effect_map": self.argument_effect_map,
            "argument_effect_status_map": self.argument_effect_status_map,
            "pipeline_report": self.pipeline_report.as_dict(),
            "original_program_report": self.original_program_report.as_dict(),
            "reduced_program_report": self.reduced_program_report.as_dict(),
        }
