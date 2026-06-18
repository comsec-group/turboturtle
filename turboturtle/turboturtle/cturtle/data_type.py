from enum import Enum, auto


class DataType(Enum):
    CHAR = auto()
    U_CHAR = auto()
    SHORT_INT = auto()
    U_SHORT_INT = auto()
    INT = auto()
    U_INT = auto()
    LONG_INT = auto()
    U_LONG_INT = auto()
    LONG_LONG_INT = auto()
    U_LONG_LONG_INT = auto()
    FLOAT = auto()
    DOUBLE = auto()
    LONG_DOUBLE = auto()

    def __str__(self) -> str:
        if self.name == "CHAR":
            return "char"
        elif self.name == "U_CHAR":
            return "unsigned char"
        elif self.name == "SHORT_INT":
            return "short int"
        elif self.name == "U_SHORT_INT":
            return "unsigned short int"
        elif self.name == "INT":
            return "int"
        elif self.name == "U_INT":
            return "unsigned int"
        elif self.name == "LONG_INT":
            return "long int"
        elif self.name == "U_LONG_INT":
            return "unsigned long int"
        elif self.name == "LONG_LONG_INT":
            return "long long int"
        elif self.name == "U_LONG_LONG_INT":
            return "unsigned long long int"
        elif self.name == "FLOAT":
            return "float"
        elif self.name == "DOUBLE":
            return "double"
        elif self.name == "LONG_DOUBLE":
            return "long double"
        else:
            raise NotImplementedError(
                f"String representation of enum member {self.name} not implemented!"
            )


ALL_INTEGER_DATATYPES = [
    DataType.CHAR,
    DataType.U_CHAR,
    DataType.SHORT_INT,
    DataType.U_SHORT_INT,
    DataType.INT,
    DataType.U_INT,
    DataType.LONG_INT,
    DataType.U_LONG_INT,
    DataType.LONG_LONG_INT,
    DataType.U_LONG_LONG_INT,
]

ALL_BASE_INT_DATATYPES = [
    DataType.INT,
    DataType.U_INT
]

ALL_UNSIGNED_DATATYPES = [
    DataType.U_CHAR,
    DataType.U_SHORT_INT,
    DataType.U_INT,
    DataType.U_LONG_INT,
    DataType.U_LONG_LONG_INT,
]

ALL_LONG_INT_DATATYPES = [
    DataType.LONG_INT,
    DataType.U_LONG_INT,
    DataType.LONG_LONG_INT,
    DataType.U_LONG_LONG_INT,
]

ALL_FLOAT_DATATYPES = [
    DataType.FLOAT,
    DataType.DOUBLE,
    DataType.LONG_DOUBLE,
]
