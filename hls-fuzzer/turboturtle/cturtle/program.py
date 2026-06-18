import sys
import time
import copy
import random
from pathlib import Path

sys.path.append(str(Path(__file__).parent.parent.parent))

from turboturtle.cturtle.identifier_database import IdentifierDatabase
from turboturtle.cturtle.identifier import Identifier, FnIdentifier, ArrayIdentifier
from turboturtle.cturtle.statement import (
    Statement,
    ReturnJumpStatement,
    ForLoopIterationStatement,
    IfSelectionStatement,
    CompoundStatement,
    BreakJumpStatement,
    CaseLabeledStatement,
    DefaultLabeledStatement,
)
from turboturtle.cturtle.expression import (
    Expression,
    AssignmentExpression,
    CastExpression,
)
from turboturtle.cturtle.statement_factory import produce_max_k_statements
from turboturtle.cturtle.declaration_factory import produce_k_declarations
from turboturtle.cturtle.declaration import Declaration
from turboturtle.cturtle.report import ProgramReport
from turboturtle.cturtle.function import Function, SubFunction
from turboturtle.cturtle.data_type import DataType
from turboturtle.cturtle.strategy import DataflowStrategy, GenerationStrategy
from turboturtle.config import CONFIG


class Program:
    def __init__(
        self,
        generation_strategy: GenerationStrategy,
        data_flow_strategy: DataflowStrategy,
        top_fn_name: str = "main",
        seed: float | None = None,
    ):
        num_data_types = len(CONFIG.all_data_types)
        self.data_types = random.sample(
            CONFIG.all_data_types, random.randint(1, num_data_types)
        )

        self.generation_strategy = generation_strategy
        self.data_flow_strategy = data_flow_strategy

        if CONFIG.linearization:
            if DataType.INT not in self.data_types:
                self.data_types.append(DataType.INT)

        if CONFIG.no_mod_in_array_access:
            if DataType.U_CHAR not in self.data_types:
                self.data_types.append(DataType.U_CHAR)

        if CONFIG.has_float:
            if (
                DataType.FLOAT not in self.data_types
                or DataType.DOUBLE not in self.data_types
                or DataType.LONG_DOUBLE not in self.data_types
            ):
                allowed_floats: list[DataType] = list(
                    filter(
                        lambda x: x
                        in [DataType.FLOAT, DataType.DOUBLE, DataType.LONG_DOUBLE],
                        CONFIG.all_data_types,
                    )
                )
                self.data_types.extend(
                    random.sample(
                        allowed_floats, k=random.randint(1, len(allowed_floats))
                    )
                )

        if CONFIG.allow_sub_functions:
            self.sub_fns = self.generate_sub_functions()
            self.num_stmts_sub_fns = 0

            for sub_fn in self.sub_fns:
                for stmt in sub_fn.statements:
                    self.num_stmts_sub_fns += stmt.count()

        else:
            self.sub_fns: list[SubFunction] = []
            self.num_stmts_sub_fns = 0

        self.top_fn = self.generate_top_function(top_fn_name)

    def generate_top_function(self, name: str):
        iddb = IdentifierDatabase(self.generation_strategy, self.data_flow_strategy)

        for sub_fn in self.sub_fns:
            iddb.sub_fn_identifiers.append(
                FnIdentifier(
                    identifier_id=next(iddb.identifier_id),
                    name=sub_fn.name,
                    data_type=sub_fn.ret_data_type,
                    fn_arg_data_types=[fn_arg.data_type for fn_arg in sub_fn.fn_args],
                )
            )

        fn_args: list[Identifier] = []

        if CONFIG.randomize_num_fn_args:
            num_public_fn_args = random.randint(2, 3)
            num_secret_fn_args = random.randint(2, 8)
        else:
            num_public_fn_args = 2
            num_secret_fn_args = 2

        for _ in range(num_public_fn_args):
            fn_args.append(
                iddb.add_new(
                    is_secret=False,
                    data_type=random.choice(self.data_types),
                    is_assigned=True,
                )
            )

        for _ in range(num_secret_fn_args):
            fn_args.append(
                iddb.add_new(
                    is_secret=True,
                    data_type=random.choice(self.data_types),
                    is_assigned=True,
                )
            )

        min_stmts = CONFIG.min_num_statements
        max_stmts = CONFIG.max_num_statements
        num_stmts = random.randint(min_stmts, max_stmts)

        num_stmts -= self.num_stmts_sub_fns

        decls = produce_k_declarations(iddb, num_stmts, fn_args, self.data_types)
        stmts = produce_max_k_statements(
            iddb,
            num_stmts,
            self.data_types,
            lambda x: x is not ReturnJumpStatement and x is not CompoundStatement,
        )

        return Function(
            name=name,
            fn_args=fn_args,
            declarations=decls,
            statements=stmts,
            ret_data_type=random.choice(self.data_types),
            iddb=iddb,
        )

    def generate_sub_functions(self):
        sub_fns: list[SubFunction] = []

        for index in range(random.randint(1, 2)):
            iddb = IdentifierDatabase(self.generation_strategy, self.data_flow_strategy)

            fn_args = [
                iddb.add_new(
                    is_secret=False,
                    data_type=random.choice(self.data_types),
                    is_assigned=True,
                ),
                iddb.add_new(
                    is_secret=False,
                    data_type=random.choice(self.data_types),
                    is_assigned=True,
                ),
                iddb.add_new(
                    is_secret=True,
                    data_type=random.choice(self.data_types),
                    is_assigned=True,
                ),
                iddb.add_new(
                    is_secret=True,
                    data_type=random.choice(self.data_types),
                    is_assigned=True,
                ),
            ]

            max_num_stmts = int(CONFIG.max_num_statements * 0.1)
            if max_num_stmts == 0:
                max_num_stmts = 2

            num_stmts = random.randint(1, max_num_stmts)

            decls = produce_k_declarations(
                iddb=iddb,
                k=num_stmts,
                fn_args=fn_args,
                data_types=self.data_types,
            )
            stmts = produce_max_k_statements(
                iddb=iddb,
                k=num_stmts,
                data_types=self.data_types,
                rule=lambda x: x is not ReturnJumpStatement
                and x is not CompoundStatement,
            )

            sub_fns.append(
                SubFunction(
                    name=f"fn_{index}",
                    fn_args=fn_args,
                    declarations=decls,
                    statements=stmts,
                    ret_data_type=random.choice(self.data_types),
                    iddb=iddb,
                )
            )

        return sub_fns

    def get_all_loop_statements(self) -> list[Statement]:
        def flatten(stmt: Statement) -> list[Statement]:
            query = list(
                filter(
                    lambda x: isinstance(x, Statement),
                    stmt.__dict__.values(),
                )
            )

            flattened: list[Statement] = []

            for new_stmt in query:
                flattened.append(new_stmt)
                flattened.extend(flatten(new_stmt))

            return flattened

        flattened_stmts: list[Statement] = []
        for stmt in self.top_fn.statements:
            flattened_stmts.append(stmt)
            flattened_stmts.extend(flatten(stmt))

        loop_stmts = list(
            filter(lambda x: type(x) is ForLoopIterationStatement, flattened_stmts)
        )

        return loop_stmts

    def render(self) -> str:
        program_str = (
            "// " + ",".join([str(fn_arg) for fn_arg in self.top_fn.fn_args]) + "\n\n"
        )

        for sub_fn in self.sub_fns:
            program_str += sub_fn.render("") + "\n"

        program_str += self.top_fn.render("") + "\n"

        return program_str

    def report(self) -> ProgramReport:
        num_statements = 0
        statements = []

        for sub_fn in self.sub_fns:
            for stmt in sub_fn.statements:
                num_statements += stmt.count()

        for stmt in self.top_fn.statements:
            num_statements += stmt.count()
            statements.append(stmt.report())

        return ProgramReport(
            generation_strategy=self.generation_strategy.name,
            data_flow_strategy=self.data_flow_strategy.name,
            num_statements=num_statements,
            statements=statements,
        )

    def cleanup_unassigned_decls(self):
        decls_to_delete: list[Declaration] = []
        for decl in self.top_fn.declarations:
            if (
                not self.top_fn.iddb.is_assigned(decl.identifier)
                and type(decl.identifier) is not ArrayIdentifier
            ):
                decls_to_delete.append(decl)

            if type(decl.identifier) is ArrayIdentifier:
                can_remove = True
                for _, idtf_v in self.top_fn.iddb.identifiers.flatten().items():
                    if (
                        decl.identifier.name == idtf_v.name
                        and self.top_fn.iddb.is_assigned(idtf_v)
                    ):
                        can_remove = False

                if can_remove:
                    decls_to_delete.append(decl)

        for decl in decls_to_delete:
            self.top_fn.iddb.remove(decl.identifier)
            self.top_fn.declarations.remove(decl)

    def get_assignment_exprs(self, stmt: Statement) -> list[AssignmentExpression]:
        assignment_exprs: list[AssignmentExpression] = []

        for dir_e in stmt.__dict__.values():
            if isinstance(dir_e, Statement) and not isinstance(
                dir_e, CompoundStatement
            ):
                assignment_exprs.extend(self.get_assignment_exprs(dir_e))
            elif isinstance(dir_e, CompoundStatement):
                for dir_e_bi in dir_e.block_item_list:
                    assignment_exprs.extend(self.get_assignment_exprs(dir_e_bi))
            elif type(dir_e) == AssignmentExpression:
                assignment_exprs.append(dir_e)

        return assignment_exprs

    def replace(
        self,
        stmt: Statement | Expression,
        old: Identifier,
        new: Identifier | CastExpression,
        iddb: IdentifierDatabase,
    ) -> None:
        for dir_k, dir_e in stmt.__dict__.items():
            if isinstance(dir_e, Identifier) and dir_e.id == old.id:
                stmt.__dict__[dir_k] = new
            elif isinstance(dir_e, ArrayIdentifier):
                if dir_e.index_identifier is not None and (
                    dir_e.index_identifier.id == old.id
                    or not iddb.is_assigned(dir_e.index_identifier)
                ):
                    if type(new) is CastExpression:
                        dir_e.index_identifier = new.identifier
                    else:
                        dir_e.index_identifier = new
            elif isinstance(dir_e, CompoundStatement):
                self.replace(dir_e, old, new, iddb)
                for dir_e_stmt in dir_e.block_item_list:
                    self.replace(dir_e_stmt, old, new, iddb)
            elif isinstance(dir_e, (Statement, Expression)):
                self.replace(dir_e, old, new, iddb)

    def _reduce_head(
        self, stmts: list[Statement], decls: list[Declaration], iddb: IdentifierDatabase
    ) -> tuple[bool, list[Statement]]:
        # reduce first statement in block item list
        # if the statement is an assignment, replace the assigned variable with an fn_arg
        if len(stmts) == 1:
            for _, dir_e in stmts[0].__dict__.items():
                if isinstance(dir_e, CompoundStatement):
                    if len(dir_e.block_item_list) == 1:
                        if isinstance(
                            dir_e.block_item_list[0],
                            (DefaultLabeledStatement, CaseLabeledStatement),
                        ) or (
                            isinstance(dir_e.block_item_list[0], IfSelectionStatement)
                            and isinstance(
                                dir_e.block_item_list[0].true_statement,
                                BreakJumpStatement,
                            )
                        ):
                            return True, []
                        else:
                            return True, dir_e.block_item_list
                    elif len(dir_e.block_item_list) == 0:
                        return False, stmts
                    else:
                        return self._reduce_tail(dir_e.block_item_list, decls, iddb)
            else:
                return False, stmts

        else:
            middle = len(stmts) // 2

            removed_identifiers: list[Identifier] = []

            for statement in stmts[:middle]:
                for ass_expr in self.get_assignment_exprs(statement):
                    query = list(
                        filter(
                            lambda x: x.identifier.id == ass_expr.l_value.id,
                            decls,
                        )
                    )

                    if len(query) != 0:
                        decl = query[0]
                        if type(decl.identifier) is not ArrayIdentifier:
                            decls.remove(decl)

                    removed_identifiers.append(ass_expr.l_value)
                    iddb.remove(ass_expr.l_value)

            stmts = stmts[middle:]

            for removed_identifier in removed_identifiers:
                query = list(
                    filter(
                        lambda x: x.is_secret == removed_identifier.is_secret
                        and x.data_type is removed_identifier.data_type,
                        self.top_fn.fn_args,
                    )
                )

                if len(query) == 0:
                    replacement = CastExpression(
                        random.choice(
                            list(
                                filter(
                                    lambda x: x.is_secret
                                    == removed_identifier.is_secret,
                                    self.top_fn.fn_args,
                                )
                            )
                        ),
                        removed_identifier.data_type,
                    )
                else:
                    replacement = random.choice(query)

                for stmt in stmts:
                    self.replace(stmt, removed_identifier, replacement, iddb)

            return True, stmts

    def reduce_head(self):
        if len(self.top_fn.statements) == 1:
            for _, dir_e in self.top_fn.statements[0].__dict__.items():
                if isinstance(dir_e, CompoundStatement):
                    if len(dir_e.block_item_list) == 1:
                        if isinstance(
                            dir_e.block_item_list[0],
                            (DefaultLabeledStatement, CaseLabeledStatement),
                        ) or (
                            isinstance(dir_e.block_item_list[0], IfSelectionStatement)
                            and isinstance(
                                dir_e.block_item_list[0].true_statement,
                                BreakJumpStatement,
                            )
                        ):
                            return False
                        else:
                            self.top_fn.statements = dir_e.block_item_list
                            return True
                    elif len(dir_e.block_item_list) == 0:
                        return False
                    else:
                        can_reduce, dir_e.block_item_list = self._reduce_head(
                            dir_e.block_item_list,
                            self.top_fn.declarations,
                            self.top_fn.iddb,
                        )

                        return can_reduce
            else:
                return False

        # keep removing the last half of the program
        can_reduce, self.top_fn.statements = self._reduce_head(
            self.top_fn.statements, self.top_fn.declarations, self.top_fn.iddb
        )

        return can_reduce

    def _reduce_tail(
        self, stmts: list[Statement], decls: list[Declaration], iddb: IdentifierDatabase
    ) -> tuple[bool, list[Statement]]:
        if len(stmts) == 1:
            for _, dir_e in stmts[0].__dict__.items():
                if isinstance(dir_e, CompoundStatement):
                    if len(dir_e.block_item_list) == 1:
                        if isinstance(
                            dir_e.block_item_list[0],
                            (DefaultLabeledStatement, CaseLabeledStatement),
                        ) or (
                            isinstance(dir_e.block_item_list[0], IfSelectionStatement)
                            and isinstance(
                                dir_e.block_item_list[0].true_statement,
                                BreakJumpStatement,
                            )
                        ):
                            return True, []
                        else:
                            return True, dir_e.block_item_list
                    elif len(dir_e.block_item_list) == 0:
                        return False, stmts
                    else:
                        return self._reduce_tail(dir_e.block_item_list, decls, iddb)
            else:
                return False, stmts

        middle = len(stmts) // 2
        for statement in stmts[middle:]:
            for ass_expr in self.get_assignment_exprs(statement):
                query = list(
                    filter(
                        lambda x: x.identifier.id == ass_expr.l_value.id,
                        decls,
                    )
                )

                if len(query) != 0:
                    decl = query[0]
                    if type(decl.identifier) is not ArrayIdentifier:
                        decls.remove(decl)

                iddb.remove(ass_expr.l_value)

        return True, stmts[:middle]

    def reduce_tail(self) -> bool:
        if len(self.top_fn.statements) == 1:
            for _, dir_e in self.top_fn.statements[0].__dict__.items():
                if isinstance(dir_e, CompoundStatement):
                    if len(dir_e.block_item_list) == 1:
                        if isinstance(
                            dir_e.block_item_list[0],
                            (DefaultLabeledStatement, CaseLabeledStatement),
                        ) or (
                            isinstance(dir_e.block_item_list[0], IfSelectionStatement)
                            and isinstance(
                                dir_e.block_item_list[0].true_statement,
                                BreakJumpStatement,
                            )
                        ):
                            return False
                        else:
                            self.top_fn.statements = dir_e.block_item_list
                            return True
                    elif len(dir_e.block_item_list) == 0:
                        return False
                    else:
                        can_reduce, dir_e.block_item_list = self._reduce_tail(
                            dir_e.block_item_list,
                            self.top_fn.declarations,
                            self.top_fn.iddb,
                        )

                        return can_reduce
            else:
                return False

        # keep removing the last half of the program
        can_reduce, self.top_fn.statements = self._reduce_tail(
            self.top_fn.statements, self.top_fn.declarations, self.top_fn.iddb
        )

        return can_reduce
