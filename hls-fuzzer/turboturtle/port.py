from enum import Enum, auto


class PortDirection(Enum):
    INPUT = auto()
    OUTPUT = auto()


class PortType(Enum):
    UNKNOWN = auto()
    CLOCK = auto()
    RESET = auto()
    START = auto()
    DONE = auto()
    READY = auto()
    DATA_VALID = auto()
    DATA_READY = auto()
    PUBLIC_DATA = auto()
    SECRET_DATA = auto()


class DesignPort:
    def __init__(
        self,
        name: str,
        direction: PortDirection,
        vartype: str,
        size: str,
        type: PortType = PortType.UNKNOWN,
        altname: str = "",
    ):
        self.name = name
        self.direction = direction
        self.type = type
        self.vartype = vartype
        self.size = size

        if altname == "":
            self.altname = self.name
        else:
            self.altname = altname

    def __str__(self) -> str:
        return self.name

    def get_size_in_bits(self) -> int:
        if self.size == "":
            return 1
        else:
            # self.size = "[7:0]"
            bitsize = self.size.removeprefix("[")
            bitsize = bitsize.removesuffix("]")
            bitsize = bitsize.split(":")[0]
            return int(bitsize) + 1
