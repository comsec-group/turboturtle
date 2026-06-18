import random

from typing import Callable

from turboturtle.cturtle.exceptions import ProgGenException
from turboturtle.cturtle.expression import *
import turboturtle.cturtle.expression as expressions
from turboturtle.cturtle.identifier_database import IdentifierDatabase, T_FilterRule
from turboturtle.cturtle.identifier import Identifier
from turboturtle.cturtle.strategy import DataflowStrategy, GenerationStrategy
from turboturtle.cturtle.data_type import *
from turboturtle.config import CONFIG
from turboturtle.cturtle.rules import C_RULES


def filter_expression(expr_cls: type[Expression]) -> bool:
    return expr_cls is not EmptyExpression and expr_cls is not AssignmentExpression


def filter_identifier(identifier: Identifier) -> bool:
    return True


T_ExpressionRule = Callable[[type[Expression]], bool]


def produce_expression(
    iddb: IdentifierDatabase,
    is_secret: bool,
    data_types: list[DataType],
    rule: T_ExpressionRule = filter_expression,
    l_value_data_type: DataType | None = None,
) -> Expression:
    """
    Wrapper function that `calls produce_expression_core` and additionaly forks and commits or reverts any changes made to the identifier database.
    """
    if not type(data_types) is list:
        data_types = [data_types]

    try:
        iddb.fork()
        expr = produce_expression_core(
            iddb, is_secret, data_types, rule, l_value_data_type
        )
    except ProgGenException as e:
        exception_string = "Reverting expression because of " + type(e).__name__ + ": " + str(e)
        # For debugging, print the exception message
        # print(exception_string)
        iddb.revert()
        raise ProgGenException(exception_string)
    else:
        iddb.commit()

    return expr


def produce_expression_core(
    iddb: IdentifierDatabase,
    is_secret: bool,
    data_types: list[DataType],
    rule: T_ExpressionRule = filter_expression,
    l_value_data_type: DataType | None = None,
) -> Expression:
    """
    Generates a random expression.
    """


    selection = CONFIG.allowed_expressions

    if not CONFIG.allow_sub_functions:
        selection = list(filter(lambda x: x is not FnCallExpression, selection))

    if not CONFIG.linearization:
        selection = list(filter(lambda x: x is not LinearizedExpression, selection))

    # Assuming that operands have the same data type as l_value_data_type
    # If we allow mix of data types, we can relax the rule here.
    if CONFIG.base_int_div_only:
        # if l_value_data_type not in (DataType.INT, DataType.U_INT):
        if l_value_data_type != DataType.INT:
            selection = list(
                filter(lambda x: x is not DivOperationExpression, selection)
            )
    if CONFIG.base_int_mod_only:
        # if l_value_data_type not in (DataType.INT, DataType.U_INT):
        if l_value_data_type != DataType.INT:
            selection = list(
                filter(lambda x: x is not ModOperationExpression, selection)
            )

    if not CONFIG.has_logical_and_expression:
        selection = list(
            filter(lambda x: x is not LogicalANDOperationExpression, selection)
        )

    if not CONFIG.has_logical_or_expression:
        selection = list(
            filter(lambda x: x is not LogicalOROperationExpression, selection)
        )

    selection = list(filter(rule, selection))

    weights = []
    for expr in selection:
        if expr in CONFIG.expression_types_and_weights.keys():
            weights.append(CONFIG.expression_types_and_weights[expr])
        else:
            weights.append(CONFIG.expression_types_and_weights[getattr(expressions, "Expression")])

    expr_cls = random.choices(selection, weights=weights, k=1)[0]

    if issubclass(expr_cls, OperationExpression):
        filter_rules: list[T_FilterRule[Identifier]] = []

        if l_value_data_type is not None:
            filter_rules.append(lambda x: x.data_type is l_value_data_type)

        if issubclass(expr_cls, IntegerTypeOperationExpression):
            filter_rules.append(lambda x: x.data_type in ALL_INTEGER_DATATYPES)

        # additional CT rule example:
        # if expr_cls is DivOperationExpression:
        #     filter_rules.append(lambda x: x.data_type is DataType.INT)

        if iddb.generation_strategy is GenerationStrategy.DEPENDENCY_CHAIN:
            filter_rules.append(lambda x: x.is_secret == is_secret)
            operand_a = iddb.get_last_assigned(filter_rules)

            if iddb.data_flow_strategy is DataflowStrategy.MIXED:
                if is_secret:
                    filter_rules.append(lambda x: x.name != operand_a.name)
                    operand_b = iddb.get_one(is_assigned=True, rules=filter_rules)
                else:
                    filter_rules.append(
                        lambda x: x.name != operand_a.name and not x.is_secret
                    )
                    operand_b = iddb.get_one(
                        is_assigned=True,
                        rules=filter_rules,
                    )

            else:
                filter_rules.append(
                    lambda x: x.name != operand_a.name and x.is_secret == is_secret
                )
                operand_b = iddb.get_one(is_assigned=True, rules=filter_rules)

        else:
            if iddb.data_flow_strategy is DataflowStrategy.MIXED:
                if is_secret:
                    operand_a = iddb.get_one(is_assigned=True, rules=filter_rules)
                else:
                    filter_rules.append(lambda x: not x.is_secret)
                    operand_a = iddb.get_one(
                        is_assigned=True,
                        rules=filter_rules,
                    )

            else:
                filter_rules.append(lambda x: x.is_secret == is_secret)
                operand_a = iddb.get_one(
                    is_assigned=True,
                    rules=filter_rules,
                )

            filter_rules.append(
                lambda x: x.name != operand_a.name and x.is_secret == is_secret
            )
            operand_b = iddb.get_one(
                is_assigned=True,
                rules=filter_rules,
            )

        return expr_cls(operand_a, operand_b)

    elif issubclass(expr_cls, FnCallExpression):
        if l_value_data_type is not None:
            identiers = list(
                    filter(
                        lambda x: x.data_type is l_value_data_type,
                        iddb.sub_fn_identifiers,
                    )
                )
            if (len(identiers) == 0):
                raise ProgGenException("No sub-function available that satisfies the rules.")
            fn_identifier = random.choice(identiers)
        else:
            if (len(iddb.sub_fn_identifiers) == 0):
                raise ProgGenException("No sub-function available.")
            fn_identifier = random.choice(iddb.sub_fn_identifiers)

        fn_args: list[Identifier] = []
        for i, fn_arg_data_type in enumerate(fn_identifier.fn_arg_data_types):
            if is_secret:
                fn_arg_is_secret = False if i < 2 else True
            else:
                fn_arg_is_secret = False

            fn_args.append(
                iddb.get_one(
                    is_assigned=True,
                    rules=[
                        lambda x: x.is_secret == fn_arg_is_secret,
                        lambda x: x.data_type is fn_arg_data_type,
                    ],
                )
            )

        return expr_cls(
            is_secret=is_secret, fn_args=fn_args, fn_identifier=fn_identifier
        )

    elif expr_cls is EmptyExpression:
        raise Exception("Why are we generating empty expressions??")
        return expr_cls(is_secret)

    elif expr_cls is CastExpression:
        filter_rules: list[T_FilterRule[Identifier]] = []

        filter_rules.append(lambda x: x.is_secret == is_secret)

        filter_rules = filter_rules + C_RULES.get_cast_rules(l_value_data_type)

        if iddb.generation_strategy is GenerationStrategy.DEPENDENCY_CHAIN:
            identifier = iddb.get_last_assigned(filter_rules)
        else:
            identifier = iddb.get_one(
                is_assigned=True, rules=filter_rules
            )

        if l_value_data_type is not None:
            data_type = l_value_data_type
        else:
            data_type = random.choice(data_types)

        return expr_cls(identifier, data_type)

    elif issubclass(expr_cls, AssignmentExpression):  # pyright: ignore[reportUnnecessaryIsInstance]
        l_value = iddb.get_one(is_assigned=False, rules=None)

        secret_lvalue = l_value.is_secret

        if iddb.generation_strategy is GenerationStrategy.DEPENDENCY_CHAIN:
            identifier = iddb.get_last_assigned(
                [lambda x: x.is_secret == secret_lvalue]
            )
        else:
            identifier = iddb.get_one(
                is_assigned=True, rules=[lambda x: x.is_secret == secret_lvalue]
            )

        if l_value.data_type is DataType.INT:
            expression_rule: T_ExpressionRule = lambda x: filter_expression(x)
        elif l_value.data_type in ALL_INTEGER_DATATYPES:
            expression_rule: T_ExpressionRule = lambda x: filter_expression(
                x
            ) and not issubclass(x, LogicalOperationExpression)
        else:
            expression_rule: T_ExpressionRule = (
                lambda x: filter_expression(x)
                and not issubclass(x, LogicalOperationExpression)
                and not issubclass(x, IntegerTypeOperationExpression)
            )

        r_value = produce_expression(
            iddb=iddb,
            is_secret=secret_lvalue,
            data_types=data_types,
            rule=expression_rule,
            l_value_data_type=l_value.data_type,
        )

        iddb.assign(l_value)

        return expr_cls(l_value, r_value)

    elif issubclass(expr_cls, LinearizedExpression):
        cond = produce_expression(
            iddb=iddb,
            is_secret=is_secret,
            data_types=data_types,
            rule=lambda x: issubclass(x, LogicalOperationExpression),
            l_value_data_type=DataType.INT,
        )

        true_expr = ChainRandomOperationExpression(
            operands=[
                iddb.get_one(
                    is_assigned=True,
                    rules=[
                        lambda x: x.is_secret == is_secret,
                        lambda x: x.data_type is DataType.INT,
                        lambda x: type(x) is Identifier,
                    ],
                )
                for _ in range(random.randint(3, 10))
            ]
        )

        false_expr = produce_expression(
            iddb=iddb,
            is_secret=is_secret,
            data_types=data_types,
            l_value_data_type=DataType.INT,
        )

        if random.choice([True, False]):
            return expr_cls(
                cond=cond,
                true_expr=true_expr,
                false_expr=false_expr,
            )
        else:
            return expr_cls(
                cond=cond,
                true_expr=false_expr,
                false_expr=true_expr,
            )

    else:
        raise Exception(f"Unknown expression class {expr_cls.__name__}!")
