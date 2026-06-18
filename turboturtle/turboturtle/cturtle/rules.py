# Most rules are still implemented in expression_factory.py. Their definitions should be moved here.
# Rules are applied in expression_factory.py when selecting identifiers for expressions.

from turboturtle.cturtle.data_type import *
from turboturtle.config import CONFIG
from typing import Callable
from turboturtle.cturtle.identifier import Identifier
from turboturtle.cturtle.identifier_database import T_FilterRule

class CRules:
    def __init__(self):
        self.rules = {}

        self.rules["no_float_unsigned_casts"] = \
            lambda x, l_value_data_type: not (
                (x.data_type is DataType.FLOAT) # or x is DataType.DOUBLE)
                    and l_value_data_type in ALL_UNSIGNED_DATATYPES
                or x.data_type in ALL_UNSIGNED_DATATYPES
                    and l_value_data_type is DataType.FLOAT
            )
        self.rules["no_float_long_casts"] = \
            lambda x, l_value_data_type: not (
                x.data_type is DataType.FLOAT # or x is DataType.DOUBLE)
                    and l_value_data_type in ALL_LONG_INT_DATATYPES
                or x.data_type in ALL_LONG_INT_DATATYPES
                    and l_value_data_type is DataType.FLOAT
            )

        self.rules["float_to_base_int_casts_only"] = \
            lambda x, l_value_data_type: not (
                x.data_type is DataType.FLOAT and l_value_data_type in list(set(ALL_INTEGER_DATATYPES) - set(ALL_BASE_INT_DATATYPES)) or \
                x.data_type in list(set(ALL_INTEGER_DATATYPES) - set(ALL_BASE_INT_DATATYPES)) and l_value_data_type is DataType.FLOAT
            )

    def get_cast_rules(self, l_value_data_type: DataType):
        cast_rules: list[T_FilterRule[Identifier]] = []

        if not CONFIG.has_float_unsigned_casts:
            cast_rules.append(
                lambda x: self.rules["no_float_unsigned_casts"](x, l_value_data_type)
            )
        if not CONFIG.has_float_long_casts:
            cast_rules.append(
                lambda x: self.rules["no_float_long_casts"](x, l_value_data_type)
            )
        if CONFIG.float_to_base_int_casts_only:
            cast_rules.append(
                lambda x: self.rules["float_to_base_int_casts_only"](x, l_value_data_type)
            )

        return cast_rules

C_RULES = CRules()
