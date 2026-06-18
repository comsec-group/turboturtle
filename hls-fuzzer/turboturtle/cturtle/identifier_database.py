from __future__ import annotations

import random

from typing import Callable, TypeVar, Generic
from itertools import count

from turboturtle.cturtle.exceptions import ProgGenException
from turboturtle.cturtle.identifier import Identifier, ArrayIdentifier, FnIdentifier
from turboturtle.cturtle.data_type import DataType, ALL_INTEGER_DATATYPES
from turboturtle.cturtle.strategy import DataflowStrategy, GenerationStrategy
from turboturtle.config import CONFIG


T = TypeVar("T")
T_FilterRule = Callable[[T], bool]


class Forker(Generic[T]):
    def __init__(self) -> None:
        self.forks: list[dict[int, T]] = [{}]

    def add(self, obj_id: int, value: T) -> None:
        self.forks[-1][obj_id] = value

    def remove(self, obj_str: int) -> None:
        for fork in self.forks:
            if obj_str in fork:
                fork.pop(obj_str)

    def fork(self) -> None:
        self.forks.append({})

    def commit(self) -> None:
        self.forks[-2].update(self.forks[-1])
        self.forks.pop()

    def revert(self) -> None:
        self.forks.pop()

    def flatten(self) -> dict[int, T]:
        flattened: dict[int, T] = {}

        for fork in self.forks:
            for key in fork:
                flattened[key] = fork[key]

        return flattened

    def filter(self, rules: list[T_FilterRule[T]] | None) -> list[T]:
        pool: dict[int, T] = self.flatten()

        for fork in self.forks:
            for key in fork:
                pool[key] = fork[key]

        if rules is not None:
            for rule in rules:
                pool = {k: v for k, v in pool.items() if rule(v)}

        return list(pool.values())

    def __repr__(self) -> str:
        return str(self.forks)


class IdentifierDatabase:
    def __init__(
        self,
        generation_strategy: GenerationStrategy,
        data_flow_strategy: DataflowStrategy,
    ) -> None:
        self.generation_strategy = generation_strategy
        self.data_flow_strategy = data_flow_strategy
        self.identifier_id = count()
        self.assignment_id = count()
        self.identifier_name_index = count()
        self.loop_name_index = count()
        self.sub_fn_identifiers: list[FnIdentifier] = []
        self.identifiers = Forker[Identifier | ArrayIdentifier]()
        self.assigned = Forker[bool]()
        self.assignment_ids = Forker[int]()

    def add_new(
        self, is_secret: bool, data_type: DataType, is_assigned: bool = False
    ) -> Identifier:
        obj_id = next(self.identifier_id)
        name = f"var_{next(self.identifier_name_index)}"

        if is_secret:
            name += "_secret"

        identifier = Identifier(obj_id, name, data_type, is_secret)

        self.identifiers.add(obj_id, identifier)
        self.assigned.add(obj_id, is_assigned)
        self.assignment_ids.add(obj_id, next(self.assignment_id))

        return identifier

    def add_new_array(
        self,
        is_secret: bool,
        data_type: DataType,
        is_assigned: bool,
        array_length: int,
    ) -> list[ArrayIdentifier]:
        identifiers: list[ArrayIdentifier] = []
        name = f"arr_{next(self.identifier_name_index)}"

        for _ in range(array_length):
            if is_secret:
                identifier_name = f"{name}_secret"
            else:
                identifier_name = f"{name}"

            obj_id = next(self.identifier_id)

            new_identifier = ArrayIdentifier(
                identifier_id=obj_id,
                name=identifier_name,
                data_type=data_type,
                is_secret=is_secret,
                length=array_length,
                index_identifier=None,
                no_mod_in_array_access=CONFIG.no_mod_in_array_access,
            )

            identifiers.append(new_identifier)
            self.identifiers.add(obj_id, new_identifier)
            self.assigned.add(obj_id, is_assigned)
            self.assignment_ids.add(obj_id, next(self.assignment_id))

        return identifiers

    def remove(self, identifier: Identifier) -> None:
        self.identifiers.remove(identifier.id)
        self.assigned.remove(identifier.id)
        self.assignment_ids.remove(identifier.id)

    def handle_array_identifier(self, identifier: Identifier | ArrayIdentifier) -> None:
        if type(identifier) is ArrayIdentifier:
            if identifier.index_identifier is not None:
                return

            array_index_identifier = self.get_one(
                is_assigned=True,
                rules=[
                    lambda x: x.is_secret == CONFIG.secret_memory_accesses,
                    lambda x: type(x) is Identifier and (x.data_type is DataType.U_CHAR if CONFIG.no_mod_in_array_access else True) ,
                ],
            )

            identifier.set_index_identifier(array_index_identifier)

    def get_one(
        self, is_assigned: bool, rules: list[T_FilterRule[Identifier]] | None
    ) -> Identifier:
        """
        This function throws an IndexError exception when the identifiers list is empty after filtering.
        This is intentional. The exception is caught in the expression factory and a new expression generation attempt is started.
        This way we avoid generating expressions with empty operands (which would lead to invalid programs).
        """
        try:
            identifiers = self.identifiers.filter(rules)
            identifiers = list(
                filter(lambda x: self.assigned.flatten()[x.id] == is_assigned, identifiers)
            )

            choice = random.choice(identifiers)
            self.handle_array_identifier(choice)
        except IndexError:
            raise ProgGenException("No identifier found matching the criteria.")

        return choice

    def get_last_assigned(
        self, rules: list[T_FilterRule[Identifier]] | None
    ) -> Identifier:
        pool = self.identifiers.filter(rules)
        pool = list(filter(lambda x: self.assigned.flatten()[x.id] == True, pool))

        max_v = 0
        max_identifier = None

        for identifier in pool:
            value = self.assignment_ids.flatten()[identifier.id]

            if value > max_v:
                max_v = value
                max_identifier = identifier

        if max_identifier is None:
            raise ProgGenException("Cannot get last assigned identifier that satisifies the rules.")

        self.handle_array_identifier(max_identifier)

        return max_identifier

    def assign(self, identifier: Identifier):
        self.assigned.add(identifier.id, True)
        self.assignment_ids.add(identifier.id, next(self.assignment_id))

    def is_assigned(self, identifier: Identifier) -> bool:
        if identifier.id in self.assigned.flatten():
            return self.assigned.flatten()[identifier.id]
        else:
            return False

    def can_assign(self) -> bool:
        return any(
            [not is_assigned for is_assigned in self.assigned.flatten().values()]
        )

    def fork(self):
        self.identifiers.fork()
        self.assigned.fork()
        self.assignment_ids.fork()

    def commit(self):
        self.identifiers.commit()
        self.assigned.commit()
        self.assignment_ids.commit()

    def revert(self):
        for idtf in self.identifiers.forks[-1].values():
            if type(idtf) is ArrayIdentifier:
                idtf.index_identifier = None

        self.identifiers.revert()
        self.assigned.revert()
        self.assignment_ids.revert()

    def __repr__(self) -> str:
        return repr(self.identifiers) + repr(self.assigned)
