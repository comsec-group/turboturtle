from enum import Enum, auto


class GenerationStrategy(Enum):
    RANDOM = auto()
    RANDOM_RESOLVE = auto()
    DEPENDENCY_CHAIN = auto()


class DataflowStrategy(Enum):
    SEPARATED = auto()
    MIXED = auto()
