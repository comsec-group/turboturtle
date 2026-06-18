import glob
import json
import attrs
import pyslang

from pathlib import Path

from turboturtle.exceptions import (
    HLSToolNotSupportedException,
    InitialAssignmentParsingException,
    MissingModuleParsingException,
    MissingModulePortDirectionRetrievalException,
)
from turboturtle.hls.tool import HLSTool
from turboturtle.pipeline.config import PipelineConfig
from turboturtle.port import DesignPort, PortDirection


@attrs.define
class MissingPort:
    name: str
    direction: str
    connection_hierarchical_path: str


@attrs.define
class MissingModule:
    name: str
    instance_name: str
    hierarchical_path: str
    ports: list[MissingPort]


def get_compilation(
    top_fn_name: str,
    verif_rtl_dir: Path,
) -> tuple[pyslang.Driver, pyslang.Compilation]:
    source_files = glob.glob(f"{verif_rtl_dir}/*.v")
    source_files_str = " ".join(source_files)

    driver = pyslang.Driver()
    driver.addStandardArgs()

    cmd_args = [
        f"--top={top_fn_name}",
    ]

    cmd_args_str = " ".join(cmd_args)

    if not driver.parseCommandLine(
        f"{cmd_args_str} {source_files_str}",
        pyslang.CommandLineOptions(),
    ):
        raise Exception("[slang]: Failed to parse commandline options.")

    if not driver.processOptions() or not driver.parseAllSources():
        raise Exception("[slang]: Failed to process options or parse all sources.")

    compilation = driver.createCompilation()
    driver.diagEngine.clearClients()
    driver.reportCompilation(compilation, quiet=True)

    return driver, compilation


def get_missing_modules(
    compilation: pyslang.Compilation, hls_tool: HLSTool, rtl_sources_dir: Path
) -> list[MissingModule]:
    def visitor(arg):
        if (
            isinstance(arg, pyslang.UninstantiatedDefSymbol)
            and arg.definitionName in missing_definition_names
        ):
            ports: list[MissingPort] = []
            for port_name, port_connection in zip(arg.portNames, arg.portConnections):
                if isinstance(port_connection, pyslang.InvalidAssertionExpr):
                    continue

                if isinstance(port_connection.expr, pyslang.ConcatenationExpression):
                    for sub_port_connection in port_connection.expr.operands:
                        ports.append(
                            MissingPort(
                                port_name,
                                "",
                                sub_port_connection.symbol.hierarchicalPath,
                            )
                        )
                else:
                    if type(port_connection.expr) == pyslang.NamedValueExpression:
                        ports.append(
                            MissingPort(
                                port_name,
                                "",
                                port_connection.expr.symbol.hierarchicalPath,
                            )
                        )

            nonlocal missing_modules
            missing_modules.append(
                MissingModule(arg.definitionName, arg.name, arg.hierarchicalPath, ports)
            )

    missing_definition_names: list[str] = []
    missing_modules: list[MissingModule] = []
    try:
        for diagnostic in compilation.getAllDiagnostics():
            if diagnostic.code == pyslang.Diags.UnknownModule:
                missing_definition_names.append(diagnostic.args[0])

        compilation.getRoot().visit(visitor)

    except Exception as exception:
        raise MissingModuleParsingException(exception)

    if len(missing_modules) != 0:
        if hls_tool == HLSTool.BAMBU_2024_10:
            for missing_module in missing_modules:
                if missing_module.name == "pmi_dsp_mult":
                    for port in missing_module.ports:
                        if port.name in ["A", "B", "CLK0", "CLK1", "CLK2", "CLK3"]:
                            port.direction = "in"
                        elif port.name == "P":
                            port.direction = "out"
                        else:
                            raise MissingModulePortDirectionRetrievalException(
                                f"Unknown port name received for module {missing_module.name}: {port.name}"
                            )
                else:
                    raise MissingModulePortDirectionRetrievalException(
                        f"Port retrieval not supported for module {missing_module.name}."
                    )
        else:
            raise HLSToolNotSupportedException(
                "HLS tool not supported to get port directions of missing modules."
            )

    return missing_modules


def get_initial_assignments(
    config: PipelineConfig, compilation: pyslang.Compilation
) -> list[tuple[str, str | list[str]]]:
    def find_initial_values(arg):
        if isinstance(arg, pyslang.ExpressionStatement):
            expr = arg.expr

            if type(expr) == pyslang.CallExpression:
                if expr.subroutineName == "$readmemb":
                    mem_init_file = str(
                        expr.arguments[0].symbol.value.convertToStr()
                    ).replace('"', "")
                    hier_name = str(expr.arguments[1].symbol.hierarchicalPath)
                    read_len_start = int(expr.arguments[1].type.fixedRange.lower)
                    read_len_end = int(expr.arguments[1].type.fixedRange.upper)
                    read_size = int(expr.arguments[1].type.arrayElementType.bitWidth)

                    with open(Path(f"{config.verif_rtl_dir}/{mem_init_file}")) as fp:
                        lines = fp.readlines()

                    values: list[str] = []
                    for line_idx in range(read_len_start, read_len_end + 1):
                        values.append(f"{read_size}'b{lines[line_idx].strip()}")
                    if hier_name.startswith(config.top_fn_name):
                        initial_assignments.append((hier_name, values))
                else:
                    raise Exception(
                        f"Unknown call expression in initial block: {expr.subroutineName}"
                    )
            else:
                if type(expr.left) != pyslang.ElementSelectExpression:
                    hier_name = str(expr.left.symbol.hierarchicalPath)
                    value = str(expr.right.constant.value)

                    if "'sd" in value:
                        value = value.replace("sd", "d")

                    if hier_name.startswith(config.top_fn_name):
                        initial_assignments.append((hier_name, value))
        elif isinstance(arg, pyslang.ForLoopStatement):
            hier_name = str(arg.body.body.expr.left.value.symbol.hierarchicalPath)
            value = int(arg.initializers[0].right.operand.value)
            loopReps = int(arg.stopExpr.right.symbol.value.value)

            initial_assignments.append((hier_name, [str(value)] * loopReps))

    def visitor(arg):
        if (
            isinstance(arg, pyslang.Symbol)
            and arg.kind == pyslang.SymbolKind.ProceduralBlock
            and arg.procedureKind == pyslang.ProceduralBlockKind.Initial
        ):
            arg.body.visit(find_initial_values)

    try:
        initial_assignments: list[tuple[str, str | list[str]]] = []
        compilation.getRoot().visit(visitor)
    except Exception as exception:
        raise InitialAssignmentParsingException(str(exception))

    return initial_assignments


def get_top_module_ports(
    compilation: pyslang.Compilation, name: str
) -> list[DesignPort]:
    class Visitor:
        def __init__(self, name: str) -> None:
            self.name = name
            self.found_instances = []

        def __call__(self, node):
            if (
                isinstance(node, pyslang.Symbol)
                and node.kind == pyslang.SymbolKind.Instance
                and hasattr(node, "name")
            ):
                if node.name == self.name:
                    self.found_instances.append(node)

    visitor = Visitor(name)
    compilation.getRoot().visit(visitor)

    if len(visitor.found_instances) == 0:
        raise Exception(f"Instance {name} not found.")
    else:
        top_instance = visitor.found_instances[0]

    body = top_instance.body
    ports = body.portList

    top_module_ports: list[DesignPort] = []

    for port in ports:
        if port.type.bitWidth <= 1:
            size = ""
        else:
            size = f"[{port.type.bitWidth - 1}:0]"

        if port.direction == pyslang.ArgumentDirection.In:
            direction = PortDirection.INPUT
        elif port.direction == pyslang.ArgumentDirection.Out:
            direction = PortDirection.OUTPUT
        else:
            raise Exception("Unexpected port direction found.")

        top_module_ports.append(DesignPort(port.name, direction, "logic", size))

    return top_module_ports

