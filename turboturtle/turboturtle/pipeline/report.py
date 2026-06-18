from turboturtle.test_status import TestStatus

T_PipelineReportDict = dict[str, str | float | int | bool]


class PipelineReport:
    def __init__(
        self,
        test_status: TestStatus,
        simulator: str,
        synthesis_duration: float,
        verilation_duration: float,
        verification_duration: float,
        design_a_done_count: int,
        design_b_done_count: int,
        has_sim_timeout: bool,
        has_subprocess_timeout: bool,
        is_combinational: bool,
    ) -> None:
        self.test_status = test_status
        self.simulator = simulator
        self.synthesis_duration = synthesis_duration
        self.verilation_duration = verilation_duration
        self.verification_duration = verification_duration
        self.design_a_done_count = design_a_done_count
        self.design_b_done_count = design_b_done_count
        self.has_sim_timeout = has_sim_timeout
        self.has_subprocess_timeout = has_subprocess_timeout
        self.is_combinational = is_combinational

    def as_dict(self) -> T_PipelineReportDict:
        return {
            "test_status": self.test_status.name,
            "simulator": self.simulator,
            "synthesis_duration": self.synthesis_duration,
            "verilation_duration": self.verilation_duration,
            "verification_duration": self.verification_duration,
            "design_a_done_count": self.design_a_done_count,
            "design_b_done_count": self.design_b_done_count,
            "has_sim_timeout": self.has_sim_timeout,
            "has_subprocess_timeout": self.has_subprocess_timeout,
            "is_combinational": self.is_combinational,
        }
