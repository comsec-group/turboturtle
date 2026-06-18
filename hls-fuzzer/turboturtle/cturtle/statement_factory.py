import random

from typing import Callable

from turboturtle.cturtle.exceptions import ProgGenException
from turboturtle.cturtle.statement import (
    Statement,
    CaseLabeledStatement,
    DefaultLabeledStatement,
    CompoundStatement,
    ExpressionStatement,
    IfSelectionStatement,
    IfElseSelectionStatement,
    SwitchSelectionStatement,
    WhileIterationStatement,
    DoWhileIterationStatement,
    ForLoopIterationStatement,
    ReturnJumpStatement,
    BreakJumpStatement,
)
from turboturtle.cturtle.expression import (
    EmptyExpression,
    AssignmentExpression,
    ConstantExpression,
    LessThanOperationExpression,
    PlusPostfixExpression,
    LinearizedExpression,
)
from turboturtle.cturtle.expression_factory import produce_expression, filter_expression
from turboturtle.cturtle.identifier_database import IdentifierDatabase, T_FilterRule
from turboturtle.cturtle.identifier import Identifier, ArrayIdentifier
from turboturtle.cturtle.data_type import ALL_INTEGER_DATATYPES, DataType
from turboturtle.config import CONFIG


T_StatementRule = Callable[[type[Statement]], bool]


def produce_max_k_statements(
    iddb: IdentifierDatabase,
    k: int,
    data_types: list[DataType],
    rule: T_StatementRule | None = None,
):
    stmts: list[Statement] = []
    stmts_left = k

    while stmts_left >= 0:
        while True:
            try:
                # fork
                iddb.fork()
                stmt = produce_statement(iddb, 0, data_types, rule)
                num_stmts = stmt.count()
                if num_stmts <= stmts_left:
                    stmts.append(stmt)
            except ProgGenException as e:
                # For debugging, print the exception message
                # print(f"Reverting statement because of {type(e).__name__}: {str(e)}")
                iddb.revert()
                continue # TODO this is an endless loop if no statements are produced
            else:

                iddb.commit()
                stmts_left -= num_stmts
                break

    return stmts


def produce_statement(
    iddb: IdentifierDatabase,
    recursion_level: int,
    data_types: list[DataType],
    rule: T_StatementRule | None = None,
) -> Statement:
    try:
        iddb.fork()
        stmt = produce_statement_core(iddb, recursion_level, data_types, rule)
    except ProgGenException as e:
        # print(f"Reverting statement core because of {type(e).__name__}:" + str(e))
        iddb.revert()
        raise ProgGenException(e.message)
    else:
        iddb.commit()

    return stmt


def produce_statement_core(
    iddb: IdentifierDatabase,
    recursion_level: int,
    data_types: list[DataType],
    rule: T_StatementRule | None = None,
) -> Statement:
    selection = CONFIG.statement_types
    is_secret = False

    if rule:
        selection = list(filter(rule, selection))

    weights = [CONFIG.statement_types_and_weights[stmt] for stmt in selection]

    stmt_cls = random.choices(selection, weights=weights, k=1)[0]

    if stmt_cls is CompoundStatement:
        compound_list: list[Statement] = []

        # compound statement does not count as a statement itself
        # only conained statement count
        max_num_stmts = int(CONFIG.max_num_statements * 0.05)
        if max_num_stmts == 0:
            max_num_stmts = 1

        min_num_stmts = 0

        # TODO: Here we 'randomly' restrict the level of recursion to avoid an infinite generation loop probably.
        # Instead, we should allow arbirtary depth and limit the number of recursion by statement count
        if recursion_level >= 3:
            stmt_filter_rule: T_StatementRule = lambda x: x is ExpressionStatement
        else:
            stmt_filter_rule: T_StatementRule = (
                lambda x: x is not ReturnJumpStatement and x is not CompoundStatement
            )

        for _ in range(random.randint(min_num_stmts, max_num_stmts)):
            stmt = produce_statement(
                iddb, recursion_level + 1, data_types, stmt_filter_rule
            )
            compound_list.append(stmt)

        # stmt = produce_statement(iddb, lambda x: x is not CompoundStatement)
        # compound_list.append(stmt)

        return stmt_cls(compound_list)

    elif stmt_cls is ExpressionStatement:
        if iddb.can_assign():
            expression = produce_expression(
                iddb=iddb,
                is_secret=is_secret,
                data_types=data_types,
                rule=lambda expr_cls: expr_cls is AssignmentExpression,
            )
        else:
            expression = EmptyExpression(False)

        return stmt_cls(expression)

    elif stmt_cls is IfSelectionStatement:
        expression = produce_expression(
            iddb=iddb,
            is_secret=CONFIG.secret_control_flow,
            data_types=random.choice(data_types), # allow only one data type in the condition
            rule=lambda x: x is not LinearizedExpression and filter_expression(x),
        )
        true_statement = produce_statement(
            iddb, recursion_level + 1, data_types, lambda x: x is CompoundStatement
        )
        if true_statement.block_item_list == []:
            raise ProgGenException("IfSelectionStatement: True block is empty.")

        return stmt_cls(expression, true_statement)

    elif stmt_cls is IfElseSelectionStatement:
        expression = produce_expression(
            iddb,
            CONFIG.secret_control_flow,
            data_types=random.choice(data_types), # allow only one data type in the condition
            rule=lambda x: x is not LinearizedExpression and filter_expression(x),
        )
        true_statement = produce_statement(
            iddb, recursion_level + 1, data_types, lambda x: x is CompoundStatement
        )
        false_statement = produce_statement(
            iddb, recursion_level + 1, data_types, lambda x: x is CompoundStatement
        )
        if true_statement.block_item_list == [] and false_statement.block_item_list == []:
            raise ProgGenException("IfElseSelectionStatement: True and false blocks are both emtpy.")

        return stmt_cls(expression, true_statement, false_statement)

    elif stmt_cls is SwitchSelectionStatement:
        switch_is_secret = CONFIG.secret_control_flow
        filter_rule: T_FilterRule[Identifier] = (
            lambda x: x.is_secret == switch_is_secret
            and x.data_type in ALL_INTEGER_DATATYPES
        )
        identifier = iddb.get_one(is_assigned=True, rules=[filter_rule])

        statement_list: list[Statement] = []

        max_num_stmts = int(CONFIG.max_num_statements * 0.05)
        if max_num_stmts == 0:
            max_num_stmts = 1

        # create case
        # create random amount of statements
        num_cases = random.randint(1, 5)
        case_constants = random.sample(list(range(256)), num_cases)

        for case_num in range(num_cases):
            statement_list.append(
                CaseLabeledStatement(
                    case_constants[case_num],
                    ExpressionStatement(EmptyExpression(is_secret)),
                )
            )

            for _ in range(random.randint(0, max_num_stmts)):
                stmt = produce_statement(
                    iddb,
                    recursion_level + 1,
                    data_types,
                    lambda x: x is ExpressionStatement,
                )
                statement_list.append(stmt)

            statement_list.append(BreakJumpStatement())

        # default case
        statement_list.append(
            DefaultLabeledStatement(ExpressionStatement(EmptyExpression(is_secret)))
        )

        for _ in range(random.randint(0, max_num_stmts)):
            stmt = produce_statement(
                iddb,
                recursion_level + 1,
                data_types,
                lambda x: x is ExpressionStatement,
            )
            statement_list.append(stmt)

        compound_statement = CompoundStatement(statement_list)

        return stmt_cls(identifier, compound_statement)

    elif stmt_cls is WhileIterationStatement or stmt_cls is DoWhileIterationStatement:
        loop_var = iddb.get_one(
            is_assigned=False,
            rules=[
                lambda x: x.is_secret == CONFIG.secret_control_flow,
                lambda x: type(x) is not ArrayIdentifier,
            ],
        )
        loop_var_assignment_stmt = AssignmentExpression(
            loop_var, ConstantExpression("0", loop_var.is_secret)
        )
        iddb.assign(loop_var)

        while_cond_0 = LessThanOperationExpression(
            loop_var, ConstantExpression(str(random.randint(4, 16)), loop_var.is_secret)
        )
        # while_cond_1 = produce_expression(
        #     iddb=iddb,
        #     is_secret=CONFIG.secret_control_flow,
        #     data_types=data_types,
        #     l_value_data_type=random.choice(data_types),
        # )
        # while_cond = BracketLogicalOROperationExpression(while_cond_0, while_cond_1)

        statement: CompoundStatement = produce_statement(
            iddb, recursion_level + 1, data_types, rule=lambda x: x is CompoundStatement
        )  # type: ignore
        loop_stop_cond = IfSelectionStatement(
            expression=LessThanOperationExpression(
                loop_var,
                iddb.get_one(
                    is_assigned=True,
                    rules=[
                        lambda x: x.is_secret == CONFIG.secret_control_flow,
                        lambda x: x.id != loop_var.id,
                        lambda x: x.data_type is loop_var.data_type,
                    ],
                ),
            ),
            true_statement=BreakJumpStatement(),
        )
        loop_var_incr_stmt = ExpressionStatement(PlusPostfixExpression(loop_var))
        statement.block_item_list.append(loop_stop_cond)
        statement.block_item_list.append(loop_var_incr_stmt)

        return stmt_cls(
            loop_var_assignment=loop_var_assignment_stmt,
            expression=while_cond_0,
            statement=statement,
        )

    elif stmt_cls is ForLoopIterationStatement:
        loop_var = iddb.get_one(
            is_assigned=False,
            rules=[
                lambda x: x.is_secret == CONFIG.secret_control_flow,
                lambda x: type(x) is not ArrayIdentifier,
            ],
        )

        expression_a = AssignmentExpression(
            loop_var, ConstantExpression("0", loop_var.is_secret)
        )
        iddb.assign(loop_var)

        expression_b0 = LessThanOperationExpression(
            loop_var, ConstantExpression(str(random.randint(4, 16)), loop_var.is_secret)
        )
        # expression_b1 = produce_expression(
        #     iddb=iddb,
        #     is_secret=CONFIG.secret_control_flow,
        #     data_types=data_types,
        #     l_value_data_type=random.choice(data_types),
        # )
        # expression_b = BracketLogicalOROperationExpression(expression_b0, expression_b1)
        expression_c = PlusPostfixExpression(loop_var)

        statement: CompoundStatement = produce_statement(
            iddb, recursion_level + 1, data_types, lambda x: x is CompoundStatement
        )  # type: ignore
        loop_stop_cond = IfSelectionStatement(
            expression=LessThanOperationExpression(
                loop_var,
                iddb.get_one(
                    is_assigned=True,
                    rules=[
                        lambda x: x.is_secret == CONFIG.secret_control_flow,
                        lambda x: x.id != loop_var.id,
                        lambda x: x.data_type is loop_var.data_type,
                    ],
                ),
            ),
            true_statement=BreakJumpStatement(),
        )
        statement.block_item_list.append(loop_stop_cond)
        for_loop_id = f"for_loop_{next(iddb.loop_name_index)}"

        return stmt_cls(
            expression_a, expression_b0, expression_c, statement, for_loop_id
        )

    elif stmt_cls is ReturnJumpStatement:
        expression = produce_expression(iddb, is_secret, data_types)

        return stmt_cls(expression)

    else:
        raise Exception(f"Unknown statement class {stmt_cls.__name__}!")
