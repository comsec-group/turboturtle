from turboturtle.cturtle.exceptions import ProgGenException
from turboturtle.cturtle.expression import Expression, AssignmentExpression
from turboturtle.cturtle.identifier import Identifier

from turboturtle.ttutils import BASE_INDENT


class Statement:
    def __init__(self) -> None:
        raise NotImplementedError()

    def render(self, indent: str) -> str:
        raise NotImplementedError()

    def report(self):
        raise NotImplementedError()

    def count(self) -> int:
        raise NotImplementedError()


class PragmaDirective(Statement):
    def __init__(self, content: str) -> None:
        self.content = content

    def render(self, indent: str) -> str:
        return f"{indent}#pragma {self.content}\n"

    def count(self) -> int:
        return 0


class LabeledStatement(Statement):
    def __init__(self, identifier: str, statement: Statement) -> None:
        self.identifier = identifier
        self.statement = statement

    def render(self, indent: str) -> str:
        return f"{indent}{self.identifier}:\n{self.statement.render(indent)}"

    def count(self) -> int:
        return self.statement.count()


class CaseLabeledStatement(Statement):
    def __init__(self, constant_expression: int, statement: Statement) -> None:
        self.constant_expression = constant_expression
        self.statement = statement

    def render(self, indent: str) -> str:
        if self.statement is None:
            raise ProgGenException("CaseLabeledStatement: statement is None.")
        return (
            f"{indent}case {self.constant_expression}:\n{self.statement.render(indent)}"
        )

    def count(self) -> int:
        return self.statement.count()


class DefaultLabeledStatement(Statement):
    def __init__(self, statement: Statement) -> None:
        self.statement = statement

    def render(self, indent: str) -> str:
        return f"{indent}default:\n{self.statement.render(indent)}"

    def count(self) -> int:
        return self.statement.count()


class CompoundStatement(Statement):
    def __init__(self, block_item_list: list[Statement]) -> None:
        self.block_item_list = block_item_list

    def render(self, indent: str) -> str:
        less_indent = indent.removeprefix(BASE_INDENT)
        compound_statement_strs = [less_indent + "{\n"]

        if self.block_item_list is None:
            raise ProgGenException("CompoundStatement: block_item_list is None.")

        for block_item in self.block_item_list:
            compound_statement_strs.append(block_item.render(indent + BASE_INDENT))

        compound_statement_strs.append(less_indent + "}\n")

        return f"".join(compound_statement_strs)

    def count(self) -> int:
        count = 0

        for stmt in self.block_item_list:
            count += stmt.count()

        return count


class ExpressionStatement(Statement):
    def __init__(self, expression: Expression) -> None:
        self.expression = expression

    def render(self, indent: str) -> str:
        if self.expression is None:
            raise ProgGenException("ExpressionStatement: expression is None.")
        return f"{indent}{self.expression};\n"

    def report(self):
        return {"ExpressionStatement": self.expression.report()}

    def count(self) -> int:
        return 1


class SelectionStatement(Statement):
    def __init__(self) -> None:
        raise NotImplementedError()


class IfSelectionStatement(SelectionStatement):
    def __init__(self, expression: Expression, true_statement: Statement) -> None:
        self.expression = expression
        self.true_statement = true_statement

    def render(self, indent: str) -> str:
        new_indent = indent + BASE_INDENT

        return (
            f"{indent}if ({self.expression})\n{self.true_statement.render(new_indent)}"
        )

    def count(self) -> int:
        return 1 + self.true_statement.count()

    def report(self) -> dict[str, str]:
        return {"IfSelectionStatement": ""}


class IfElseSelectionStatement(SelectionStatement):
    def __init__(
        self,
        expression: Expression,
        true_statement: Statement,
        false_statement: Statement,
    ) -> None:
        self.expression = expression
        self.true_statement = true_statement
        self.false_statement = false_statement

    def render(self, indent: str) -> str:
        return f"{indent}if ({self.expression})\n{self.true_statement.render(indent + BASE_INDENT)}{indent}else\n{self.false_statement.render(indent + BASE_INDENT)}"

    def count(self) -> int:
        return 1 + self.true_statement.count() + self.false_statement.count()

    def report(self) -> dict[str, str]:
        return {"IfElseSelectionStatement": ""}


class SwitchSelectionStatement(SelectionStatement):
    def __init__(self, identifier: Identifier, statement: Statement) -> None:
        self.identifier = identifier
        self.statement = statement

    def render(self, indent: str) -> str:
        new_statement_indent = indent + BASE_INDENT

        return f"{indent}switch ({self.identifier})\n{self.statement.render(new_statement_indent)}"

    def count(self) -> int:
        return 1 + self.statement.count()

    def report(self) -> dict[str, str]:
        return {"SwitchSelectionStatement": ""}


class IterationStatement(Statement):
    def __init__(self, statement: Statement) -> None:
        self.statement = statement

    def check_statement(self) -> None:
        if self.statement is None:
            raise ProgGenException("IterationStatement: Loop body is None.")

class WhileIterationStatement(IterationStatement):
    def __init__(
        self,
        loop_var_assignment: Expression,
        expression: Expression,
        statement: Statement,
    ) -> None:
        super().__init__(statement)
        self.loop_var_assignment = loop_var_assignment
        self.expression = expression
        self.statement = statement

    def render(self, indent: str) -> str:
        self.check_statement()
        while_iter_stmt = f"{indent}{self.loop_var_assignment};\n"
        while_iter_stmt += f"{indent}while ({self.expression})\n"
        while_iter_stmt += self.statement.render(indent + BASE_INDENT)

        return while_iter_stmt

    def count(self) -> int:
        return 2 + self.statement.count()

    def report(self):
        return {"WhileIterationStatement": ""}


class DoWhileIterationStatement(WhileIterationStatement):
    def render(self, indent: str) -> str:
        self.check_statement()
        do_while_iter_stmt = f"{indent}{self.loop_var_assignment};\n"
        do_while_iter_stmt += f"{indent}do\n"
        do_while_iter_stmt += self.statement.render(indent + BASE_INDENT)
        do_while_iter_stmt += f"{indent}while ({self.expression});\n"

        return do_while_iter_stmt

    def report(self):
        return {"DoWhileIterationStatement": ""}


class ForLoopIterationStatement(IterationStatement):
    def __init__(
        self,
        expression_a: AssignmentExpression,
        expression_b: Expression,
        expression_c: Expression,
        statement: Statement,
        for_loop_id: str,
    ) -> None:
        super().__init__(statement)
        self.for_loop_id = for_loop_id
        self.expression_a = expression_a
        self.expression_b = expression_b
        self.expression_c = expression_c

    def render(self, indent: str) -> str:
        self.check_statement()
        return f"{indent}{self.for_loop_id}: for ({self.expression_a}; {self.expression_b}; {self.expression_c})\n{self.statement.render(indent + BASE_INDENT)}"

    def count(self) -> int:
        return 1 + self.statement.count()

    def report(self) -> dict[str, str]:
        return {"ForLoopIterationStatement": ""}


class JumpStatement(Statement):
    def __init__(self) -> None:
        raise NotImplementedError()


class ReturnJumpStatement(JumpStatement):
    def __init__(self, expression: Expression | Identifier) -> None:
        self.expression = expression

    def render(self, indent: str) -> str:
        return f"{indent}return {self.expression};\n"

    def count(self) -> int:
        return 1


class BreakJumpStatement(JumpStatement):
    def __init__(self) -> None:
        pass

    def render(self, indent: str) -> str:
        return f"{indent}break;\n"

    def count(self) -> int:
        return 1
