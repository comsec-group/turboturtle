from turboturtle.cturtle.identifier import Identifier, FnIdentifier, DataType

import random


class Expression:
    def __init__(self, is_secret: bool):
        self.is_secret = is_secret

    def report(self):
        return ""


class EmptyExpression(Expression):
    def __str__(self) -> str:
        return ""


class ConstantExpression(Expression):
    def __init__(self, value: str, is_secret: bool):
        super().__init__(is_secret)
        self.value = value

    def __str__(self) -> str:
        return self.value


class FnCallExpression(Expression):
    def __init__(
        self,
        is_secret: bool,
        fn_args: list[Identifier],
        fn_identifier: FnIdentifier,
    ):
        super().__init__(is_secret)

        self.fn_args = fn_args
        self.fn_identifier = fn_identifier

    def __str__(self) -> str:
        fn_args_str = ",".join([str(fn_arg) for fn_arg in self.fn_args])
        return f"{self.fn_identifier}({fn_args_str})"


class CastExpression(Expression):
    def __init__(self, identifier: Identifier, data_type: DataType):
        super().__init__(identifier.is_secret)

        self.identifier = identifier
        self.data_type = data_type

    def __str__(self) -> str:
        return f"({self.data_type}) ({self.identifier})"

    def report(self):
        secrecy = "secret" if self.is_secret else "public"

        return {
            "CastExpression": f"{self.identifier.report()} --> {secrecy} {self.data_type.name}"
        }


class OperationExpression(Expression):
    operator = ""

    def __init__(
        self,
        operand_a: Identifier | Expression,
        operand_b: Identifier | ConstantExpression | Expression,
    ):
        if self.operator == "":
            raise NotImplementedError("Don't use this class directly.")

        self.operand_a = operand_a
        self.operand_b = operand_b

        is_secret = operand_a.is_secret or operand_b.is_secret
        super().__init__(is_secret)

    def __str__(self):
        return f"{self.operand_a} {self.operator} {self.operand_b}"

    def report(self):
        return {
            self.__class__.__name__: f"{self.operand_a.report()} {self.operator} {self.operand_b.report()}"
        }


class PostfixExpression(Expression):
    pass


class PlusPostfixExpression(PostfixExpression):
    def __init__(self, identifier: Identifier):
        super().__init__(identifier.is_secret)
        self.identifier = identifier

    def __str__(self) -> str:
        return f"{self.identifier}++"


class ArithmeticTypeOperationExpression(OperationExpression):
    pass


class IntegerTypeOperationExpression(OperationExpression):
    pass


class LogicalOperationExpression(OperationExpression):
    pass


class MultOperationExpression(ArithmeticTypeOperationExpression):
    operator = "*"


class DivOperationExpression(ArithmeticTypeOperationExpression):
    operator = "/"


class AddOperationExpression(ArithmeticTypeOperationExpression):
    operator = "+"


class ChainOperationExpression(Expression):
    pass


class ChainAddOperationExpression(ChainOperationExpression):
    operator = "+"

    def __init__(self, operands: list[Identifier | Expression]):
        self.operands = operands
        super().__init__(any([op.is_secret for op in self.operands]))

    def __str__(self) -> str:
        operand_strs = [str(op) for op in self.operands]

        return f" {self.operator} ".join(operand_strs)


class ChainRandomOperationExpression(ChainOperationExpression):
    operator = ""

    def __init__(self, operands: list[Identifier | Expression]):
        self.operands = operands
        all_operators = [
            "+",
            "-",
            "*",
            "<<",
            ">>",
            "<",
            ">",
            "<=",
            ">=",
            "!=",
            "==",
            "&&",
            "||",
            "&",
            "^",
            "|",
        ]
        self.operators = [
            random.choice(all_operators) for _ in range(len(self.operands))
        ]
        super().__init__(any([op.is_secret for op in self.operands]))

    def __str__(self) -> str:
        operand_strs = [str(op) for op in self.operands]

        final_expr = ""
        for i in range(len(operand_strs)):
            if i == 0:
                final_expr = (
                    f"({operand_strs[i]} {self.operators[i]} {operand_strs[i + 1]})"
                )
            else:
                final_expr = f"({operand_strs[i]} {self.operators[i]} {final_expr})"

        return final_expr


class SubOperationExpression(ArithmeticTypeOperationExpression):
    operator = "-"


class ShiftLeftOperationExpression(IntegerTypeOperationExpression):
    operator = "<<"


class ShiftRightOperationExpression(IntegerTypeOperationExpression):
    operator = ">>"


class ANDOperationExpression(IntegerTypeOperationExpression):
    operator = "&"


class XOROperationExpression(IntegerTypeOperationExpression):
    operator = "^"


class OROperationExpression(IntegerTypeOperationExpression):
    operator = "|"


class ModOperationExpression(IntegerTypeOperationExpression):
    operator = "%"


class LessThanOperationExpression(LogicalOperationExpression):
    operator = "<"


class GreaterThanOperationExpression(LogicalOperationExpression):
    operator = ">"


class LessEqualThanOperationExpression(LogicalOperationExpression):
    operator = "<="


class GreaterEqualThanOperationExpression(LogicalOperationExpression):
    operator = ">="


class EqualOperationExpression(LogicalOperationExpression):
    operator = "=="


class NotEqualOperationExpression(LogicalOperationExpression):
    operator = "!="


class LogicalANDOperationExpression(LogicalOperationExpression):
    operator = "&&"


class LogicalOROperationExpression(LogicalOperationExpression):
    operator = "||"


class BracketLogicalOROperationExpression(LogicalOROperationExpression):
    def __str__(self):
        return f"({self.operand_a}) {self.operator} ({self.operand_b})"


class AssignmentExpression(Expression):
    def __init__(self, l_value: Identifier, r_value: Identifier | Expression):
        self.l_value = l_value
        self.r_value = r_value

        self.l_value.is_secret = self.r_value.is_secret
        super().__init__(self.r_value.is_secret)

    def __str__(self):
        return f"{self.l_value} = {self.r_value}"

    def report(self):
        return {"AssignmentExpression": self.r_value.report()}


class LinearizedExpression(Expression):
    def __init__(self, cond: Expression, true_expr: Expression, false_expr: Expression):
        super().__init__(true_expr.is_secret or false_expr.is_secret or cond.is_secret)

        self.cond = cond
        self.true_expr = true_expr
        self.false_expr = false_expr

    def __str__(self) -> str:
        return f"(({self.cond}) * ({self.true_expr})) + ((1 - ({self.cond})) * ({self.false_expr}))"

    def report(self):
        return {
            "LinearizedExpression": {
                "cond": self.cond.report(),
                "true_expr": self.true_expr.report(),
                "false_expr": self.false_expr.report(),
            }
        }


ALL_EXPRESSION_CLASSES: list[type[Expression]] = [
    EmptyExpression,
    FnCallExpression,
    CastExpression,
    MultOperationExpression,
    DivOperationExpression,
    ModOperationExpression,
    AddOperationExpression,
    SubOperationExpression,
    ShiftLeftOperationExpression,
    ShiftRightOperationExpression,
    LessThanOperationExpression,
    GreaterThanOperationExpression,
    LessEqualThanOperationExpression,
    GreaterEqualThanOperationExpression,
    EqualOperationExpression,
    NotEqualOperationExpression,
    ANDOperationExpression,
    XOROperationExpression,
    OROperationExpression,
    LogicalANDOperationExpression,
    LogicalOROperationExpression,
    AssignmentExpression,
    LinearizedExpression,
]
