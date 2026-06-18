from turboturtle.cturtle.identifier import Identifier, ArrayIdentifier


class Declaration:
    def __init__(self, identifier: Identifier, init: Identifier):
        self.identifier = identifier
        self.init = init

    def render(self, indent: str) -> str:
        return f"{indent}{self.identifier.data_type} {self.identifier} = ({self.identifier.data_type}) {self.init};\n"


class ArrayDeclaration(Declaration):
    def __init__(self, identifier: ArrayIdentifier, length: int, init: Identifier):
        super().__init__(identifier, init)
        self.length = length

    def render(self, indent: str) -> str:
        return (
            f"{indent}{self.identifier.data_type} {self.identifier.name}[{self.length}] = "
            + "{ "
            + f"({self.identifier.data_type}) {self.init}"
            + " };\n"
        )
