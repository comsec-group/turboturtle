from typing import TYPE_CHECKING

from turboturtle.ttutils import BASE_INDENT
from turboturtle.cturtle.declaration import Declaration
from turboturtle.cturtle.identifier_database import IdentifierDatabase, T_FilterRule
from turboturtle.cturtle.statement import Statement, ReturnJumpStatement
from turboturtle.cturtle.expression import (
    ChainAddOperationExpression,
    AddOperationExpression,
    CastExpression,
)
from turboturtle.cturtle.identifier import Identifier
from turboturtle.cturtle.data_type import *
from turboturtle.cturtle.strategy import DataflowStrategy, GenerationStrategy

if TYPE_CHECKING:
    from turboturtle.cturtle.identifier_database import IdentifierDatabase

from turboturtle.config import CONFIG
from turboturtle.cturtle.rules import C_RULES

class Function:
    def __init__(
        self,
        name: str,
        fn_args: list[Identifier],
        declarations: list[Declaration],
        statements: list[Statement],
        ret_data_type: DataType,
        iddb: "IdentifierDatabase",
    ) -> None:
        self.name = name
        self.fn_args = fn_args
        self.declarations = declarations
        self.statements = statements
        self.ret_data_type = ret_data_type
        self.iddb = iddb

    def render(self, indent: str) -> str:
        filter_rules: list[T_FilterRule[Identifier]] = []

        filter_rules = filter_rules + C_RULES.get_cast_rules(self.ret_data_type)

        if self.iddb.generation_strategy is GenerationStrategy.RANDOM_RESOLVE:
            if self.iddb.data_flow_strategy is DataflowStrategy.MIXED:
                operands = list(self.iddb.identifiers.flatten().values())
            else:
                operands = list(
                    filter(
                        lambda x: x.is_secret, self.iddb.identifiers.flatten().values()
                    )
                )

            operands = list(filter(lambda x: self.iddb.is_assigned(x), operands))
            for rule in filter_rules:
                operands = [op for op in operands if rule(op)]

            return_stmt = ReturnJumpStatement(
                ChainAddOperationExpression(
                    [
                        CastExpression(operand, self.ret_data_type)
                        for operand in operands
                    ]
                )
            )

        elif self.iddb.generation_strategy is GenerationStrategy.RANDOM:
            if self.iddb.data_flow_strategy is DataflowStrategy.MIXED:
                secret_identifier = self.iddb.get_one(
                    is_assigned=True, rules=[lambda x: x.is_secret] + filter_rules
                )
                public_identifier = self.iddb.get_one(
                    is_assigned=True, rules=[lambda x: not x.is_secret] + filter_rules
                )
                # TODO: what happens if we cannot get a public/secret identifier matching the rules?
                # And what do we want to do in this case?
                identifier = AddOperationExpression(
                    CastExpression(secret_identifier, self.ret_data_type),
                    CastExpression(public_identifier, self.ret_data_type),
                )
            else:
                identifier = self.iddb.get_one(
                    is_assigned=True, rules=[lambda x: x.is_secret] + filter_rules
                )
                identifier = CastExpression(identifier, self.ret_data_type)

            return_stmt = ReturnJumpStatement(identifier)

        elif self.iddb.generation_strategy is GenerationStrategy.DEPENDENCY_CHAIN:
            if self.iddb.data_flow_strategy is DataflowStrategy.MIXED:
                secret_identifier = self.iddb.get_last_assigned(
                    rules=[
                        lambda x: x.is_secret,
                        lambda x: self.iddb.is_assigned(x),
                    ] + filter_rules
                )
                public_identifier = self.iddb.get_last_assigned(
                    rules=[
                        lambda x: not x.is_secret,
                        lambda x: self.iddb.is_assigned(x),
                    ] + filter_rules
                )
                identifier = AddOperationExpression(
                    CastExpression(secret_identifier, self.ret_data_type),
                    CastExpression(public_identifier, self.ret_data_type),
                )
            else:
                identifier = self.iddb.get_last_assigned(
                    rules=[
                        lambda x: x.is_secret,
                        lambda x: self.iddb.is_assigned(x),
                    ] + filter_rules
                )
                identifier = CastExpression(identifier, self.ret_data_type)

            return_stmt = ReturnJumpStatement(identifier)

        else:
            raise Exception(
                f"Unsupported generation strategy! -> {self.iddb.generation_strategy}"
            )

        fn_arg_str = ", ".join(
            [f"{fn_arg.data_type} {fn_arg}" for fn_arg in self.fn_args]
        )
        fn_str = f"{indent}{self.ret_data_type} {self.name}({fn_arg_str}) " + "{\n"
        fn_str += "".join(
            [decl.render(indent + BASE_INDENT) for decl in self.declarations]
        )
        fn_str += "".join(
            [stmt.render(indent + BASE_INDENT) for stmt in self.statements]
        )
        fn_str += return_stmt.render(indent + BASE_INDENT)
        fn_str += "}\n"

        return fn_str


class SubFunction(Function):
    def __init__(
        self,
        name: str,
        fn_args: list[Identifier],
        declarations: list[Declaration],
        statements: list[Statement],
        ret_data_type: DataType,
        iddb: IdentifierDatabase,
    ) -> None:
        super().__init__(name, fn_args, declarations, statements, ret_data_type, iddb)

    # def render(self, indent: str) -> str:

    #     fn_arg_str = ", ".join(
    #         [f"{fn_arg.data_type} {fn_arg}" for fn_arg in self.fn_args]
    #     )
    #     fn_str = f"{indent}{self.ret_data_type} {self.name}({fn_arg_str}) " + "{\n"
    #     fn_str += "".join(
    #         [decl.render(indent + BASE_INDENT) for decl in self.declarations]
    #     )
    #     fn_str += "".join(
    #         [stmt.render(indent + BASE_INDENT) for stmt in self.statements]
    #     )
    #     # fn_str += return_stmt.render(indent + "  ")
    #     fn_str += "}\n"

    #     return fn_str
