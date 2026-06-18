from typing import Any

T_ProgramReportDict = dict[str, str | Any]


class ProgramReport:
    def __init__(
        self,
        generation_strategy: str,
        data_flow_strategy: str,
        num_statements: int,
        statements: list[dict[str, Any]] | None = None,
    ) -> None:
        self.generation_strategy = generation_strategy
        self.data_flow_strategy = data_flow_strategy
        self.num_statements = num_statements
        if statements is None:
            self.statements = []
        else:
            self.statements = statements

    def as_dict(self) -> T_ProgramReportDict:
        return {
            "generation_strategy": self.generation_strategy,
            "data_flow_strategy": self.data_flow_strategy,
            "num_statements": self.num_statements,
            "statements": self.statements,
        }
