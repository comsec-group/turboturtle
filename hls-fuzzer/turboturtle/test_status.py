from enum import Enum, auto


class TestStatus(Enum):
    FAIL = auto()
    PASS = auto()
    ERROR = auto()
