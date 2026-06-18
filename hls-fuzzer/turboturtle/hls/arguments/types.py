import random

from enum import Enum, auto
from attrs import define


@define
class HLSArg:
    name: str

    def __str__(self) -> str:
        return self.name


class HLSArgConcatType(Enum):
    EQUAL = auto()
    DIRECT = auto()
    SPACE = auto()


@define
class HLSArgEnum(HLSArg):
    values: list[str]
    concat_type: HLSArgConcatType

    def __str__(self) -> str:
        if len(self.values) == 0:
            raise Exception(
                "An HLSArgEnum with no values to choose from is not allowed!"
            )

        idx = random.randint(0, len(self.values) - 1)

        if self.concat_type == HLSArgConcatType.EQUAL:
            return f"{self.name}={self.values[idx]}"
        elif self.concat_type == HLSArgConcatType.DIRECT:
            return f"{self.name}{self.values[idx]}"
        elif self.concat_type == HLSArgConcatType.SPACE:
            return f"{self.name} {self.values[idx]}"
        else:
            raise Exception(f"The concat type {self.concat_type} is not supported.")


@define
class HLSArgEnumMulti(HLSArg):
    values: list[str]
    concat_type: HLSArgConcatType

    def __str__(self) -> str:
        if len(self.values) == 0:
            raise Exception(
                "An HLSArgEnum with no values to choose from is not allowed!"
            )

        selection = random.sample(self.values, random.randint(1, len(self.values) - 1))
        selection_str = " ".join(selection)

        if self.concat_type == HLSArgConcatType.EQUAL:
            return f"{self.name}={selection_str}"
        elif self.concat_type == HLSArgConcatType.DIRECT:
            return f"{self.name}{selection_str}"
        elif self.concat_type == HLSArgConcatType.SPACE:
            return f"{self.name} {selection_str}"
        else:
            raise Exception(f"The concat type {self.concat_type} is not supported.")


@define
class HLSArgExclusives:
    """
    Collection of HLS arguments that cannot be passed together.
    """

    args: list[HLSArg | HLSArgEnum]

    def __str__(self) -> str:
        return str(self.args[random.randint(0, len(self.args) - 1)])


@define
class HLSArgCollection(HLSArg):
    """
    For arguments in the form of: cmd_name -opt1 <val1> -opt2 <val2>
    """

    args: list[HLSArgEnum]

    def __str__(self) -> str:
        arg_str = self.name

        for arg in self.args:
            arg_str += f" {arg}"

        return arg_str
