import random
from turboturtle.cturtle.data_type import DataType

class Identifier:
    def __init__(
        self,
        identifier_id: int,
        name: str,
        data_type: DataType,
        is_secret: bool = False,
        assignment_index: int = 0,
    ):
        self.id = identifier_id
        self.name = name
        self.data_type = data_type
        self.is_secret = is_secret
        self.assignment_index = assignment_index

    def __str__(self) -> str:
        return f"{self.name}"

    def __repr__(self) -> str:
        return str(self)

    def report(self) -> str:
        secrecy = "secret" if self.is_secret else "public"
        return f"{secrecy} {self.data_type.name}"


class ArrayIdentifier(Identifier):
    def __init__(
        self,
        identifier_id: int,
        name: str,
        data_type: DataType,
        is_secret: bool,
        length: int,
        index_identifier: Identifier | None,
        assignment_index: int = 0,
        no_mod_in_array_access: bool = False,
    ) -> None:
        super().__init__(identifier_id, name, data_type, is_secret, assignment_index)
        self.length = length
        self.index_identifier = index_identifier
        self.is_reduced = False
        self.no_mod_in_array_access = no_mod_in_array_access

    def set_index_identifier(self, identifier: Identifier) -> None:
        self.index_identifier = identifier

    def __str__(self) -> str:
        if self.is_reduced:
            return self.name

        if self.index_identifier is None:
            return f"{self.name}[{random.randrange(0, self.length)}]"

        index_idtf_str = f"((int) {self.index_identifier})"

        if self.no_mod_in_array_access:
            return f"{self.name}[{index_idtf_str}]"

        return f"{self.name}[{index_idtf_str} % (int) {self.length}]"
        # return f"{self.name}[{index_idtf_str}]"

    def __repr__(self) -> str:
        return super().__repr__()


class FnIdentifier(Identifier):
    def __init__(
        self,
        identifier_id: int,
        name: str,
        data_type: DataType,
        fn_arg_data_types: list[DataType],
    ):
        super().__init__(identifier_id, name, data_type, False, False)
        self.fn_arg_data_types = fn_arg_data_types

    def __str__(self) -> str:
        return self.name
