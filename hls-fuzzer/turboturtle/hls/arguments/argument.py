import random
import typing


T = typing.TypeVar("T", bound="Arg")


class Arg:
    name = ""
    concat = ""
    options: list[str] = []

    def __init__(self, option: str | None = None) -> None:
        if option is None:
            self.option = random.choice(self.options)
        else:
            if option not in self.options:
                raise Exception(f"Not a valid option: {option}")

            self.option = option

    def __str__(self) -> str:
        return f"{self.name}{self.concat}{self.option}"

    def get_others(self: T) -> list[T]:
        others: list[T] = []

        for option in self.options:
            if option != self.option:
                others.append(type(self)(option))

        if len(others) > 5:
            return random.sample(others, 5)
        else:
            return others

    def get_all(self: T) -> list[T]:
        return [type(self)(option) for option in self.options]
