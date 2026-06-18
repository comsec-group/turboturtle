import random

from turboturtle.cturtle.identifier import Identifier
from turboturtle.cturtle.data_type import DataType
from turboturtle.cturtle.identifier_database import IdentifierDatabase
from turboturtle.cturtle.declaration import Declaration, ArrayDeclaration
from turboturtle.config import CONFIG
from turboturtle.cturtle.rules import C_RULES


def produce_k_declarations(
    iddb: IdentifierDatabase,
    k: int,
    fn_args: list[Identifier],
    data_types: list[DataType],
):
    decls: list[Declaration] = []
    total_array_length = 0

    if CONFIG.internal_arrays:
        max_num_arrays = int(k * 0.01)
        if max_num_arrays == 0:
            max_num_arrays = 1

        num_arrays = random.randint(1, max_num_arrays)

        for _ in range(num_arrays):
            is_secret = random.choice([True, False])

            array_length = 0
            if not CONFIG.no_mod_in_array_access:
                array_length = random.randint(2, 16) # Used for most results
                if total_array_length + array_length > k:
                    break
            else:
                array_length = 256 # Used to avoid % operator in index calculations

            total_array_length += array_length

            if not CONFIG.no_mod_in_array_access:
                data_type = random.choice(data_types)
            else:
                # We need to put a higher weight on U_CHAR to be sure to have potential array index variables in the program
                weights = []
                for dt in data_types:
                    if not dt == DataType.U_CHAR:
                        weights.append(1)
                    else:
                        weights.append(10)
                data_type = random.choices(data_types, weights=weights, k=1)[0]

            identifiers = iddb.add_new_array(
                is_secret=is_secret,
                data_type=data_type,
                is_assigned=False,
                array_length=array_length,
            )

            decls.append(
                ArrayDeclaration(
                    identifier=identifiers[0],
                    length=array_length,
                    init=random.choice(
                        list(filter(lambda x: x.is_secret == is_secret, fn_args))
                    ),
                )
            )

    if CONFIG.no_mod_in_array_access:
        max_decl = k
    else:
        max_decl = k - total_array_length

    for _ in range(max_decl):
        is_secret = random.choice([True, False])
        identifier_data_type = random.choice(data_types)

        # variable
        filtered_args = list(filter(lambda x: x.is_secret == is_secret, fn_args))
        for rule in C_RULES.get_cast_rules(identifier_data_type):
            filtered_args = [arg for arg in filtered_args if rule(arg)]

        init = None
        while not init:
            try:
                init = random.choice(filtered_args)
            except IndexError:
                pass
        identifier = iddb.add_new(
            is_secret=is_secret, data_type=identifier_data_type
        )

        decls.append(Declaration(identifier, init))

    return decls
