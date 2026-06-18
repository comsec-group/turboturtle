import os
import glob
import time
import json
import random
import jinja2
import shutil
import subprocess
from pathlib import Path
from os.path import relpath
from vcdvcd import VCDVCD

from turboturtle import slang
from turboturtle.port import DesignPort, PortType, PortDirection
from turboturtle.test_status import TestStatus
from turboturtle.pipeline.config import PipelineConfig
from turboturtle.pipeline.report import PipelineReport
from turboturtle.exceptions import (
    SlangCompilationException,
    TestbenchRenderingException,
    TopFnInterfaceParsingException,
    TopFNtoModuleInterfaceMappingException,
    CombinationalDesignException,
    HLSSynthesisException,
    VerilationException,
    VerificationException,
    SanityCheckingException,
)
from turboturtle.ttutils import (
    TIMEOUT_CMD,
    TIMEOUT_SECONDS,
    TIMEOUT_MINUTES,
    TEMPLATES_DIR,
    SIM_REPEATS,
    SIM_TIMEOUT_NS,
    REMOTE_SIM_PYTHON_FILE,
    REMOTE_MULTI_SIM_PYTHON_FILE,
    create_new_file,
    ttcall,
)
from turboturtle.config import CONFIG


def parse_top_fn_interface(input_file: Path) -> list[str]:
    with open(input_file, "r") as fp:
        fn_args_line = fp.readline()

    fn_args_line = fn_args_line.removeprefix("//")
    fn_args_line = fn_args_line.strip()
    fn_args = fn_args_line.split(",")

    if len(fn_args) == 0:
        raise TopFnInterfaceParsingException(
            "Something went wrong while parsing the top function arguments."
        )

    return fn_args


def find_port_by_name(ports: list[DesignPort], name: str) -> DesignPort:
    query = list(filter(lambda port: port.name == name, ports))

    if len(query) == 0:
        raise TopFNtoModuleInterfaceMappingException(
            f"Port {name} not found in top module ports!"
        )
    elif len(query) > 1:
        raise TopFNtoModuleInterfaceMappingException(
            f"Multiple ports found for name {name}!"
        )

    return query[0]


def convert_to_hex(decimal: int) -> str:
    return hex(decimal).removeprefix("0x")


def get_random_hex_number(width_in_bits: int) -> str:
    max_size = 2**width_in_bits
    random_decimal = random.randrange(int(max_size * 0.1), int(max_size * 0.9))
    return convert_to_hex(random_decimal)


def get_random_hex_number_in_lower_ten(width_in_bits: int) -> str:
    max_size = 2**width_in_bits
    random_decimal = random.randrange(1, int(max_size * 0.1))
    return convert_to_hex(random_decimal)


def get_random_hex_number_in_upper_ten(width_in_bits: int) -> str:
    max_size = 2**width_in_bits
    random_decimal = random.randrange(int(max_size * 0.9), max_size)
    return convert_to_hex(random_decimal)


def get_max_hex_number(width_in_bits: int) -> str:
    max_size = 2**width_in_bits
    return convert_to_hex(max_size - 1)


T_SimData = list[dict[str, list[str]]]


class Pipeline:
    def __init__(
        self,
        input_program: str,
        hls_args: list[str],
        reset_active_low: bool,
        pipeline_config: PipelineConfig,
    ) -> None:
        self.name = pipeline_config.name
        self.top_fn_name = pipeline_config.top_fn_name
        self.input_program = input_program
        self.hls_args = hls_args
        self.out_dir = pipeline_config.out_dir
        self.backup_dir = pipeline_config.backup_dir
        self.backup = pipeline_config.backup
        self.cleanup = pipeline_config.cleanup
        self.reset_active_low = reset_active_low
        # managed fileds
        self.working_dir = Path(f"{self.out_dir}/{self.name}")
        self.log_dir = Path(f"{self.working_dir}/logs")
        self.synth_dir = Path(f"{self.working_dir}/synth")
        self.verif_dir = Path(f"{self.working_dir}/verif")
        self.verif_rtl_dir = Path(f"{self.verif_dir}/rtl")
        self.verif_sim_dir = Path(f"{self.verif_dir}/sim")
        self.vcd_file = Path(f"{self.verif_sim_dir}/traces.vcd")

        self.verif_formal_dir = Path(f"{self.verif_dir}/formal")
        self.input_file = Path(f"{self.working_dir}/{self.top_fn_name}.c")

        self.clock_name = ""
        self.done_name = ""

    def start(self, debug: bool = False) -> PipelineReport:
        self._setup_workspace()
        self._program_to_file()
        synth_time_start = time.time()
        _ = self._synth()
        synth_duration = time.time() - synth_time_start

        # check if there are .v and .vhdl files
        if len(glob.glob(f"{self.verif_rtl_dir}/*.vhd*")) != 0:
            simulator = "questa"
            self._generate_testbench(debug,simulator)
            verilation_duration = time.time()
            self._setup_questa()
            verilation_duration = time.time() - verilation_duration
            verification_duration = time.time()
            test_status = self._verify_questa(debug)
            verification_duration = time.time() - verification_duration
        else:
            simulator = "verilator"
            self._generate_testbench(debug,simulator)
            verilation_duration = time.time()
            self._setup_verilator()
            verilation_duration = time.time() - verilation_duration
            verification_duration = time.time()
            test_status = self._verify_verilator(debug)
            verification_duration = time.time() - verification_duration

        # sanity check

        a_done_count, b_done_count, has_sim_timeout = self._sanity_check(test_status)

        self.cleanup_vcd(test_status)

        report = PipelineReport(
            test_status=test_status,
            simulator=simulator,
            synthesis_duration=synth_duration,
            verilation_duration=verilation_duration,
            verification_duration=verification_duration,
            design_a_done_count=a_done_count,
            design_b_done_count=b_done_count,
            has_sim_timeout=has_sim_timeout,
            has_subprocess_timeout=False,
            is_combinational=False,
        )

        return report

    def _setup_workspace(self):
        """Create required local folders."""
        ttcall(["rm", "-rf", str(self.working_dir)])
        self.working_dir.mkdir(parents=True, exist_ok=True)
        self.log_dir.mkdir(parents=True, exist_ok=True)
        self.synth_dir.mkdir(parents=True, exist_ok=True)
        self.verif_dir.mkdir(parents=True, exist_ok=True)
        self.verif_rtl_dir.mkdir(parents=True, exist_ok=True)
        self.verif_sim_dir.mkdir(parents=True, exist_ok=True)
        self.verif_formal_dir.mkdir(parents=True, exist_ok=True)

    def _program_to_file(self):
        with open(self.input_file, "w") as fp:
            fp.write(self.input_program)

    def _generate_testbench(self, debug: bool, simulator: str) -> None:
        raise NotImplementedError()

    def _synth(self) -> str:
        raise NotImplementedError()

    def map_to_fn_args(self, top_module_ports: list[DesignPort]) -> list[DesignPort]:
        # map all the data ports to the fn args
        fn_args: list[str] = parse_top_fn_interface(self.input_file)

        for fn_arg in fn_args:
            for port in top_module_ports:
                if port.direction is PortDirection.OUTPUT:
                    continue

                if fn_arg in port.name:
                    if fn_arg.endswith("_secret"):
                        port.type = PortType.SECRET_DATA
                    else:
                        port.type = PortType.PUBLIC_DATA

        return top_module_ports

    def get_top_module_ports(self, debug: bool = False) -> list[DesignPort]:
        try:
            _, compilation = slang.get_compilation(self.top_fn_name, self.verif_rtl_dir)
        except Exception as exception:
            raise SlangCompilationException(exception)

        diags: list[str] = []
        for diagnostic in compilation.getAllDiagnostics():
            try:
                diags.append(
                    f"{diagnostic.code}, {diagnostic.args}, {diagnostic.symbol}"
                )
            except:
                continue

        create_new_file(diags, Path(f"{self.log_dir}/slang_diags.log"))

        # parse top module interface ports
        # - control signals
        # - data inputs (map to fn args)
        return slang.get_top_module_ports(compilation, self.top_fn_name)

    def get_public_and_secret_data_ports(
        self, top_module_ports: list[DesignPort]
    ) -> tuple[list[DesignPort], list[DesignPort]]:
        public_data_ports = [
            port
            for port in filter(
                lambda port: port.type is PortType.PUBLIC_DATA, top_module_ports
            )
        ]
        secret_data_ports = [
            port
            for port in filter(
                lambda port: port.type is PortType.SECRET_DATA, top_module_ports
            )
        ]

        return public_data_ports, secret_data_ports

    def check_has_any_secret_data_ports(
        self, top_module_ports: list[DesignPort]
    ) -> None:
        if (
            len(
                list(
                    filter(
                        lambda port: port.type is PortType.SECRET_DATA, top_module_ports
                    )
                )
            )
            == 0
        ):
            raise Exception("No secret data ports in the design.")

    def prepare_sim_data(self) -> tuple[T_SimData, list[DesignPort]]:
        top_module_ports = self.get_top_module_ports()
        top_module_ports = self.map_to_fn_args(top_module_ports)
        public_data_ports = list(
            filter(lambda port: port.type is PortType.PUBLIC_DATA, top_module_ports)
        )
        secret_data_ports = list(
            filter(lambda port: port.type is PortType.SECRET_DATA, top_module_ports)
        )
        all_data_ports: list[DesignPort] = []
        for port in public_data_ports + secret_data_ports:
            if port.type is PortType.SECRET_DATA:
                all_data_ports.append(
                    DesignPort(
                        f"a_{port.name}",
                        port.direction,
                        port.vartype,
                        port.size,
                        port.type,
                        port.altname,
                    )
                )
                all_data_ports.append(
                    DesignPort(
                        f"b_{port.name}",
                        port.direction,
                        port.vartype,
                        port.size,
                        port.type,
                        port.altname,
                    )
                )
            else:
                all_data_ports.append(port)

        sim_data: T_SimData = []

        sim_index = 0

        # zero inputs
        for port in all_data_ports:
            rest_ports = all_data_ports.copy()
            rest_ports.remove(port)

            sim_iter_data = {port.name: ["0", "0", "0", "0", "0"]}
            for rest_port in rest_ports:
                sim_iter_data[rest_port.name] = [
                    get_random_hex_number(rest_port.get_size_in_bits())
                    for _ in range(5)
                ]
            sim_data.append(sim_iter_data)
            sim_index += 1

        # max inputs
        for port in all_data_ports:
            rest_ports = all_data_ports.copy()
            rest_ports.remove(port)

            sim_iter_data = {
                port.name: [
                    get_max_hex_number(port.get_size_in_bits()) for _ in range(5)
                ]
            }
            for rest_port in rest_ports:
                sim_iter_data[rest_port.name] = [
                    get_random_hex_number(rest_port.get_size_in_bits())
                    for _ in range(5)
                ]
            sim_data.append(sim_iter_data)
            sim_index += 1

        # 10 % in lower 10%
        for _ in range(int(SIM_REPEATS * 0.1)):
            sim_iter_data: dict[str, list[str]] = {}

            for port in all_data_ports:
                sim_iter_data[port.name] = [
                    get_random_hex_number_in_lower_ten(port.get_size_in_bits())
                    for _ in range(5)
                ]

            sim_data.append(sim_iter_data)
            sim_index += 1

        # 10% in upper 10%
        for _ in range(int(SIM_REPEATS * 0.1)):
            sim_iter_data: dict[str, list[str]] = {}

            for port in all_data_ports:
                sim_iter_data[port.name] = [
                    get_random_hex_number_in_upper_ten(port.get_size_in_bits())
                    for _ in range(5)
                ]

            sim_data.append(sim_iter_data)
            sim_index += 1

        # just random inputs
        while sim_index < SIM_REPEATS:
            sim_iter_data: dict[str, list[str]] = {}

            for port in all_data_ports:
                sim_iter_data[port.name] = [
                    get_random_hex_number(port.get_size_in_bits()) for _ in range(5)
                ]

            sim_data.append(sim_iter_data)
            sim_index += 1

        with open(f"{self.log_dir}/sim_data.json", "w") as fp:
            json.dump(sim_data, fp)

        return sim_data, all_data_ports

    def _setup_verilator(self):
        wnos = [
            "-Wno-WIDTHEXPAND",
            "-Wno-WIDTHTRUNC",
            "-Wno-PINMISSING",
            "-Wno-TIMESCALEMOD",
            "-Wno-ASCRANGE",
            "-Wno-UNOPTFLAT",
            "-Wno-WIDTHXZEXPAND",
            "-Wno-IMPLICITSTATIC",
            "-Wno-SELRANGE",
            "-Wno-COMBDLY",
            "-Wno-LATCH",
            "-Wno-CASEINCOMPLETE",
            "-Wno-UNSIGNED",
        ]

        wnos_str = " ".join(wnos)

        source_files = glob.glob(str(Path(f"{self.verif_rtl_dir}/*.v"))) + glob.glob(
            str(Path(f"{self.verif_rtl_dir}/*.sv"))
        )
        source_files_paths = [Path(source_file) for source_file in source_files]
        source_files_rels = [f"../rtl/{path.name}" for path in source_files_paths]
        source_files_str = " ".join(source_files_rels)

        docker_cmd = [
            "docker",
            "run",
            "--rm",
            "-e PUID=$(id -u)",
            "-e PGID=$(id -g)",
            f"-v {self.verif_dir}:/work",
            "verilator",
            f"'cd sim;{TIMEOUT_CMD} verilator {wnos_str} --timing --top tb --exe --trace --trace-params --trace-structs --trace-underscore --build --binary -j 4 -I../rtl tb.sv {source_files_str}'",
        ]

        docker_cmd_str = " ".join(docker_cmd)

        verilate_script = Path(f"{self.verif_sim_dir}/verilate.sh")
        create_new_file([docker_cmd_str], verilate_script)
        ttcall(["chmod", "+x", str(verilate_script)])

        sim_script = Path(f"{self.verif_sim_dir}/sim.sh")
        create_new_file(
            [
                f"cd {self.verif_sim_dir};myseed=$1;{TIMEOUT_CMD} ./obj_dir/Vtb +verilator+seed+$myseed;echo [seed] $myseed"
            ],
            sim_script,
        )
        ttcall(["chmod", "+x", str(sim_script)])

        try:
            ttcall(
                ["/bin/bash", str(verilate_script)],
                Path(f"{self.log_dir}/verilate.log"),
            )
        except Exception as exception:
            raise VerilationException(exception)

    def _setup_questa_base(self):
        # copy files to eda_server
        eda_server_remote = CONFIG.eda_server_remote
        eda_server_remote_questa_dir_base = CONFIG.eda_server_remote_questa_dir_base
        eda_server_remote_questa_dir = f"{eda_server_remote_questa_dir_base}/{self.name}"

        sim_data, all_data_ports = self.prepare_sim_data()
        all_data_port_names = [port.name for port in all_data_ports]

        with open(f"{self.verif_sim_dir}/sim_data.json", "w") as fp:
            json.dump(sim_data, fp)

        with open(f"{self.verif_sim_dir}/all_data_port_names.json", "w") as fp:
            json.dump(all_data_port_names, fp)

        ttcall(["ssh", "-T", eda_server_remote, f"mkdir -p {eda_server_remote_questa_dir_base}"])
        try:
            ttcall(["ssh", "-T", eda_server_remote, f"rm -r {eda_server_remote_questa_dir}"])
        except Exception as _:
            pass
        ttcall(["ssh", "-T", f"{eda_server_remote}", f"mkdir {eda_server_remote_questa_dir}"])

        ttcall(
            [
                "scp",
                "-r",
                str(self.verif_rtl_dir),
                f"{eda_server_remote}:{eda_server_remote_questa_dir}",
            ]
        )

        ttcall(
            [
                "scp",
                f"{self.verif_sim_dir}/tb.sv",
                f"{eda_server_remote}:{eda_server_remote_questa_dir}",
            ]
        )

        ttcall(
            [
                "scp",
                f"{self.verif_sim_dir}/sim_data.json",
                f"{eda_server_remote}:{eda_server_remote_questa_dir}",
            ]
        )

        ttcall(
            [
                "scp",
                f"{self.verif_sim_dir}/all_data_port_names.json",
                f"{eda_server_remote}:{eda_server_remote_questa_dir}",
            ]
        )

    def _setup_questa_multi_sim(self, eda_server_remote_questa_dir: str) -> None:
        commands = [
            f"cd {CONFIG.eda_server_remote_questa_dir_base}",
            f"mv {eda_server_remote_questa_dir} {eda_server_remote_questa_dir}slice0",
            f"mkdir {eda_server_remote_questa_dir}",
            f"mv {eda_server_remote_questa_dir}slice0 {eda_server_remote_questa_dir}/slice0",
            *[
                f"cp -r {eda_server_remote_questa_dir}/slice0 {eda_server_remote_questa_dir}/slice{i}"
                for i in range(1, CONFIG.eda_server_remote_multi_sim_num_processes)
            ],
        ]
        separator = ";"
        ttcall(["ssh", "-T", f"{CONFIG.eda_server_remote}", f"{separator.join(commands)}"])

        ttcall(
            [
                "scp",
                f"{REMOTE_MULTI_SIM_PYTHON_FILE}",
                f"{CONFIG.eda_server_remote}:{eda_server_remote_questa_dir}",
            ]
        )

    def _setup_questa(self):
        eda_server_remote = CONFIG.eda_server_remote
        eda_server_remote_questa_dir_base = CONFIG.eda_server_remote_questa_dir_base
        eda_server_remote_questa_dir = f"{eda_server_remote_questa_dir_base}/{self.name}"
        self._setup_questa_base()

        create_new_file(
            [
                "onfinish final",
                "vsim tb_opt -sv_seed random",
                # "vcd file traces.vcd",
                # "vcd add -r .*",
                "run -all",
                "exit",
            ],
            Path(f"{self.verif_sim_dir}/start_sim.tcl"),
        )

        ttcall(
            [
                "scp",
                f"{self.verif_sim_dir}/start_sim.tcl",
                f"{REMOTE_SIM_PYTHON_FILE}",
                f"{eda_server_remote}:{eda_server_remote_questa_dir}",
            ]
        )

        # build
        commands = [
            f"cd {eda_server_remote_questa_dir}",
            f"{TIMEOUT_CMD} questa-2022.3-bt vlib work",
            f"{TIMEOUT_CMD} questa-2022.3-bt vlog rtl/*.v",
            f"{TIMEOUT_CMD} questa-2022.3-bt vlog rtl/*.vh",
            f"{TIMEOUT_CMD} questa-2022.3-bt vlog rtl/*.sv",
            f"{TIMEOUT_CMD} questa-2022.3-bt vcom rtl/*.vhd*",
            f"{TIMEOUT_CMD} questa-2022.3-bt vlog tb.sv",
            f"{TIMEOUT_CMD} questa-2022.3-bt vopt -access=r+/. tb -o tb_opt",
        ]
        separator = ";"

        try:
            ttcall(
                ["ssh", "-T", f"{eda_server_remote}", f"{separator.join(commands)}"],
                Path(f"{self.log_dir}/questa_build.log"),
            )
        except Exception as exception:
            raise VerilationException(
                f"Failed to build the HDL design for simulation: {str(exception)}"
            )

        self._setup_questa_multi_sim(eda_server_remote_questa_dir)

    def _verify_questa_get_test_status(self) -> TestStatus:
        with open(f"{self.verif_sim_dir}/test_status.txt", "r") as fp:
            status_str = fp.readline().strip()

        return TestStatus[status_str]

    def _verify_questa_ip(self, debug: bool = False) -> TestStatus:
        remote_sim_call = f"{CONFIG.eda_server_remote_python_version} remote_multi_sim.py {CONFIG.eda_server_remote_multi_sim_num_processes} {SIM_REPEATS} --ip"

        if debug:
            remote_sim_call += " --debug"

        qr_dir = CONFIG.eda_server_remote_questa_dir_base

        commands = [
            f"mv {qr_dir}/{self.name}/start_sim.tcl {qr_dir}/{self.name}/sim_questa/questa",
            f"mv {qr_dir}/{self.name}/sim_data.json {qr_dir}/{self.name}/sim_questa/questa",
            f"mv {qr_dir}/{self.name}/all_data_port_names.json {qr_dir}/{self.name}/sim_questa/questa",
            f"mv {qr_dir}/{self.name}/remote_sim.py {qr_dir}/{self.name}/sim_questa/questa",
        ]
        separator = ";"

        ttcall(["ssh", "-T", f"{CONFIG.eda_server_remote}", f"{separator.join(commands)}"])

        self._setup_questa_multi_sim(f"{qr_dir}/{self.name}")

        commands = [
            f"cd {qr_dir}/{self.name}",
            f"{TIMEOUT_CMD} {remote_sim_call}",
        ]
        separator = ";"

        try:
            ttcall(
                ["ssh", "-T", f"{CONFIG.eda_server_remote}", f"{separator.join(commands)}"],
                Path(f"{self.log_dir}/verif_sim.log"),
            )
        except Exception as exception:
            raise VerificationException(f"Failed to run simulation: {str(exception)}")

        ttcall(
            [
                "scp",
                f"{CONFIG.eda_server_remote}:{qr_dir}/{self.name}/traces.vcd",
                f"{CONFIG.eda_server_remote}:{qr_dir}/{self.name}/test_status.txt",
                f"{self.verif_sim_dir}/",
            ]
        )

        return self._verify_questa_get_test_status()

    def _verify_questa(self, debug: bool = False) -> TestStatus:
        remote_sim_call = f"{CONFIG.eda_server_remote_python_version} remote_multi_sim.py {CONFIG.eda_server_remote_multi_sim_num_processes} {SIM_REPEATS}"

        if debug:
            remote_sim_call += " --debug"

        remote_questa_dir = f"{CONFIG.eda_server_remote_questa_dir_base}/{self.name}"

        commands = [
            f"cd {remote_questa_dir}",
            f"{TIMEOUT_CMD} {remote_sim_call}",
        ]
        separator = ";"

        try:
            ttcall(
                ["ssh", "-T", f"{CONFIG.eda_server_remote}", f"{separator.join(commands)}"],
                Path(f"{self.log_dir}/verif_sim.log"),
            )
        except Exception as exception:
            raise VerificationException(f"Failed to run simulation: {str(exception)}")

        files = [
            f"{CONFIG.eda_server_remote}:{CONFIG.eda_server_remote_questa_dir_base}/{self.name}/traces.vcd",
            f"{CONFIG.eda_server_remote}:{CONFIG.eda_server_remote_questa_dir_base}/{self.name}/test_status.txt",
        ]

        if debug:
            files.append(
                f"{CONFIG.eda_server_remote}:{CONFIG.eda_server_remote_questa_dir_base}/{self.name}/random_inputs.json"
            )

        ttcall(
            [
                "scp",
                *files,
                f"{self.verif_sim_dir}/",
            ]
        )

        return self._verify_questa_get_test_status()

    def _verify_verilator(self, debug: bool = False) -> TestStatus:
        sim_repeats = SIM_REPEATS
        ts_found = False
        timeout = False
        can_finish = False

        # if debug
        random_values = {}

        sim_data, all_data_ports = self.prepare_sim_data()

        sim_start = time.time()

        try:
            # min and max of the allowed verilator seed value
            for sim_index, seed in enumerate(
                random.sample(range(1, 2147483648), sim_repeats)
            ):
                sim_duration = time.time() - sim_start

                if sim_duration >= TIMEOUT_SECONDS:
                    raise Exception(
                        "SUBPROCESS TIMEOUT: Verification of the design took too long."
                    )

                # prepare data
                sim_iter_data = sim_data[sim_index]
                for port in all_data_ports:
                    create_new_file(
                        sim_iter_data[port.name],
                        Path(f"{self.verif_sim_dir}/{port.name}.mem"),
                    )

                # launch simulation
                completed_process = subprocess.run(
                    ["/bin/bash", f"{self.verif_sim_dir}/sim.sh", str(seed)],
                    capture_output=True,
                )

                if completed_process.returncode != 0:
                    raise VerificationException(completed_process.stderr.decode())

                stdout_lines = completed_process.stdout.decode().splitlines()
                create_new_file(stdout_lines, Path(f"{self.log_dir}/verif_sim.log"))
                # parse stdout for timing side-channel
                for line in stdout_lines:
                    if line.startswith("[bug-ts]"):
                        ts_found = True
                    elif line.startswith("[error-timeout]"):
                        timeout = True
                    elif line.startswith("[success-finish]"):
                        can_finish = True

                    if debug:
                        if line.startswith("[debug-random-input]"):
                            line = line.replace("[debug-random-input]", "")
                            line = line.strip()
                            random_value = int(line)

                            if random_value in random_values:
                                random_values[random_value] += 1
                            else:
                                random_values[random_value] = 1

                if ts_found or timeout:
                    break
        except Exception as exception:
            raise VerificationException(exception)

        if debug:
            with open(f"{self.verif_sim_dir}/random_inputs.json", "w") as fp:
                json.dump(random_values, fp)

        if ts_found:
            return TestStatus.FAIL
        else:
            if timeout or not can_finish:
                print(f"Design {"timed out" if timeout else "did not finish successfully"}, marking test as ERROR.")
                return TestStatus.ERROR
            else:
                return TestStatus.PASS

    def _sanity_check(self, test_status: TestStatus):
        def count_done_signals(vcd: VCDVCD) -> tuple[int, int]:
            design_a_done = f"tb.a_{self.top_fn_name}.{self.done_name}"
            design_b_done = f"tb.b_{self.top_fn_name}.{self.done_name}"

            design_a_count = 0
            design_b_count = 0

            for i, signal_name in enumerate([design_a_done, design_b_done]):
                signal = vcd[signal_name]

                done_count = 0

                edge_start = False
                for _, value in signal.tv:
                    if value == "0":
                        edge_start = True
                    elif value == "1" and edge_start:
                        done_count += 1
                        edge_start = False

                if i == 0:
                    design_a_count = done_count
                else:
                    design_b_count = done_count

            return design_a_count, design_b_count

        def has_timeout(vcd: VCDVCD) -> bool:
            design_clk = f"tb.{self.clock_name}"
            clk_signal = vcd[design_clk]
            time, _ = clk_signal.tv[-1]

            if time > SIM_REPEATS * 10**3:
                return True
            else:
                return False

        if self.vcd_file.exists():
            try:
                vcd = VCDVCD(self.vcd_file)
                a_done_count, b_done_count = count_done_signals(vcd)
                design_has_timeout = has_timeout(vcd)
            except Exception as exception:
                raise SanityCheckingException(exception)
        else:
            a_done_count = 0
            b_done_count = 0
            design_has_timeout = False

        return a_done_count, b_done_count, design_has_timeout

    def do_cleanup(self):
        # delete questasim folder on eda_server
        ttcall(
            [
                "ssh",
                "-T",
                CONFIG.eda_server_remote,
                f"rm -rf {CONFIG.eda_server_remote_questa_dir_base}/{self.name}",
            ]
        )

    def cleanup_vcd(self, test_status: TestStatus):
        if test_status != TestStatus.FAIL and not CONFIG.keep_vcd_files:
            try:
                ttcall(["rm", "-f", str(self.vcd_file)])
            except Exception as _:
                pass

    def get_testbench_template(self, simulator: str):
        env = jinja2.Environment(
            loader=jinja2.FileSystemLoader(TEMPLATES_DIR),
            autoescape=jinja2.select_autoescape(),
        )

        if simulator == "questa":
            template = env.get_template("tb_sim_questa.sv")
        elif simulator == "verilator":
            template = env.get_template("tb_sim_verilator.sv")
        else:
            raise Exception(f"Unsupported simulator: {simulator}")
        return template

class BambuPipeline(Pipeline):
    def __init__(self, *args, **kwargs) -> None:
        super().__init__(*args, **kwargs)

        self.clock_name = "clock"
        self.done_name = "done_port"

    def _synth(self) -> str:
        required_base_ops = [
            "--reset-level=low",
            "--reset-type=sync",
        ]

        bambu_cmd = [
            "bambu",
            f"--top-fname={self.top_fn_name}",
            "--no-clean",
            "--pretty-print=a.c",
            "--print-dot",
            "--std=c99",
            # "--connect-iob",
            "--channels-type=MEM_ACC_11",
            # keep arrays internal
            "--distram-threshold=2048", # high for faster verification
            "--memory-allocation-policy=ALL_BRAM",
            *required_base_ops,
            *self.hls_args,
            os.path.relpath(str(self.input_file), str(self.synth_dir)),
        ]

        cd_cmd_str = f"cd {os.path.relpath(str(self.synth_dir), str(self.working_dir))}"
        bambu_cmd_str = " ".join(bambu_cmd)

        synth_cmd = [
            "docker",
            "run",
            "--network",
            "host",
            "--rm",
            "--platform",
            "linux/amd64",
            "-v",
            f"{self.working_dir}:/work",
            "-v",
            "/data:/data",
            "-e",
            f"PUID={os.getuid()}",
            "-e",
            f"PGID={os.getgid()}",
            "bambu:2024_10",
            f"'{cd_cmd_str};{TIMEOUT_CMD} {bambu_cmd_str}'",
        ]

        bambu_synth_script = Path(f"{self.synth_dir}/bambu_synth.sh")
        create_new_file([" ".join(synth_cmd)], bambu_synth_script)
        ttcall(["chmod", "+x", str(bambu_synth_script)])

        try:
            ttcall(
                [f"/bin/bash", f"{bambu_synth_script}"],
                Path(f"{self.log_dir}/bambu.log"),
                True,
            )
        except Exception as exception:
            raise HLSSynthesisException(exception)

        # copy synthesised files to verification folder
        # one .v file
        shutil.copy(f"{self.synth_dir}/{self.top_fn_name}.v", self.verif_rtl_dir)

        hdl_files = (
            glob.glob(str(Path(f"{self.synth_dir}/*.v")))
            + glob.glob(str(Path(f"{self.synth_dir}/*.vhd*")))
            + glob.glob(str(Path(f"{self.synth_dir}/*.sv")))
        )

        for hdl_file in hdl_files:
            shutil.copy(hdl_file, self.verif_rtl_dir)

        # and multiple .mem files used for memory initialisation
        for memfile in glob.glob(str(Path(f"{self.synth_dir}/*.mem"))):
            shutil.copy(memfile, self.verif_rtl_dir)
            shutil.copy(memfile, self.verif_sim_dir)

        return synth_cmd

    def _generate_testbench(self, debug: bool = False, simulator: str = "verilator") -> None:
        top_module_ports = self.get_top_module_ports(debug)

        # find the following ports:
        # clock, reset, start, done
        clock = find_port_by_name(top_module_ports, self.clock_name)
        clock.type = PortType.CLOCK
        reset = find_port_by_name(top_module_ports, "reset")
        reset.type = PortType.RESET
        start = find_port_by_name(top_module_ports, "start_port")
        start.type = PortType.START
        done = find_port_by_name(top_module_ports, self.done_name)
        done.type = PortType.DONE

        top_module_ports = self.map_to_fn_args(top_module_ports)
        self.check_has_any_secret_data_ports(top_module_ports)

        public_data_ports, secret_data_ports = self.get_public_and_secret_data_ports(
            top_module_ports
        )

        try:
            # create tb.sv with miter structure
            env = jinja2.Environment(
                loader=jinja2.FileSystemLoader(TEMPLATES_DIR),
                autoescape=jinja2.select_autoescape(),
            )

            if self.reset_active_low:
                reset_value = "1'b0"
                not_reset_value = "1'b1"
            else:
                reset_value = "1'b1"
                not_reset_value = "1'b0"

            # simulation testbench
            template = env.get_template("tb_sim_bambu.sv")
            tb = template.render(
                sim_timeout=SIM_TIMEOUT_NS,
                top_fn_name=self.top_fn_name,
                reset_value=reset_value,
                not_reset_value=not_reset_value,
                debug=debug,
                clock=clock,
                reset=reset,
                start=start,
                done=done,
                public_data_ports=public_data_ports,
                secret_data_ports=secret_data_ports,
            )

            with open(Path(f"{self.verif_sim_dir}/tb.sv"), "w") as fp:
                _ = fp.write(tb)

        except Exception as exception:
            raise TestbenchRenderingException(exception)


class DynamaticPipeline(Pipeline):
    def __init__(self, *args, **kwargs) -> None:
        super().__init__(*args, **kwargs)

        self.clock_name = "clk"
        self.done_name = "out0_valid"

    def generate_missing_blif(self, exception):
        """When using the mapbuf buffer algorithm, some BLIF files may be missing.
        The Dynamatic output stored in the exception provides the command that needs to be run to generate the missing BLIF file.
        This function extracts that command from the exception output and runs it.
        Returns: True if the BLIF generation command was found and executed successfully, False otherwise.
        """
        blif_gen_script = Path(f"{self.synth_dir}/blif_gen_script.sh")
        blif_log_file = Path(f"{self.log_dir}/dynamatic_blif.log")
        blif_gen_cmd = ""

        for line in str(exception).splitlines():
            if line.startswith("python tools/blif-generator/blif_generator.py"):
                blif_gen_cmd = line.strip()
                break

        if blif_gen_cmd:
            create_new_file(
                [
                    f"cd {CONFIG.dynamatic_path}",
                    f"{TIMEOUT_CMD} {blif_gen_cmd}",
                ],
                blif_gen_script,
            )
            print("Generating missing BLIF files with the following command...")
            print(blif_gen_cmd)
            ttcall(
                ["/bin/bash", str(blif_gen_script)],
                blif_log_file,
            )
            return True
        else:
            print("No BLIF generation command found in the log, so no need to generate a BLIF file.")
            return False

    def _synth(self) -> str:
        base_dir = self.working_dir
        dynamatic_synth_script = Path(f"{self.synth_dir}/dynamatic_synth.sh")
        dynamatic_tasks_script = Path(f"{self.synth_dir}/script.dyn")
        dynamatic_log_file = Path(f"{self.log_dir}/dynamatic.log")

        source_file_rel = relpath(str(self.input_file), str(self.synth_dir))
        synth_dir_rel = relpath(str(self.synth_dir), str(base_dir))

        clock = random.choice(list(range(2, 30))) # should be at least 2 (some units have a delay of 1.9+ ns
        sharing = random.choice(["", "--sharing"])
        # ftd = random.choice(["", "--fast-token-delivery"]) # currently broken according to Dynamatic authors
        ftd = ""
        buffer = random.choice(
            [
                "--buffer-algorithm fpl22",
                # "--buffer-algorithm costaware", # currently broken according to Dynamatic authors
                "--buffer-algorithm mapbuf", # Optionally exclude this for faster runtime
            ]
        )

        # For binary multiplication bug reproducation
        # buffer = "--buffer-algorithm fpl22"
        # clock = 23

        synth_tasks = [
            f"set-dynamatic-path {CONFIG.dynamatic_path}",
            f"set-src {source_file_rel}",
            f"set-clock-period {clock}",
            f"compile {sharing} {ftd} {buffer}",
            "write-hdl --hdl verilog",
            "exit",
        ]


        create_new_file(
            synth_tasks,
            dynamatic_tasks_script,
        )

        create_new_file(
            [
                f"cd {self.synth_dir}",
                f"{TIMEOUT_CMD} {CONFIG.dynamatic_path}/bin/dynamatic --exit-on-failure --run=script.dyn",
            ],
            dynamatic_synth_script,
        )

        ttcall(["chmod", "+x", str(dynamatic_synth_script)])

        synthesis_successful = False
        while not synthesis_successful:
            try:
                ttcall(
                    ["/bin/bash", str(dynamatic_synth_script)],
                    dynamatic_log_file,
                )
                synthesis_successful = True
            except Exception as exception:
                print("Dynamatic synthesis failed. Maybe we need to generate a missing BLIF file?")
                blif_generated = self.generate_missing_blif(exception)
                if blif_generated:
                    print("Dynamatic synthesis failed. Attempting to generate missing BLIF files...")
                    continue
                # use this to save space:
                # ttcall(["rm", "-rf", f"{base_dir}/out"])
                ttcall(["mv", f"{base_dir}/out", str(self.synth_dir)])
                raise HLSSynthesisException(exception)
        print("Synthesis was succesful.")
        ttcall(["mv", f"{base_dir}/out", str(self.synth_dir)])

        for rtlfile in glob.glob(str(Path(f"{self.synth_dir}/out/hdl/*.v"))):
            if not f"{self.top_fn_name}_wrapper" in rtlfile:
                shutil.copy(rtlfile, self.verif_rtl_dir)

        return "\n".join(synth_tasks)

    def map_to_fn_args(self, top_module_ports: list[DesignPort]) -> list[DesignPort]:
        # map all the data ports to the fn args
        fn_args: list[str] = parse_top_fn_interface(self.input_file)

        for fn_arg in fn_args:
            for port in top_module_ports:
                if port.direction is PortDirection.OUTPUT:
                    continue

                if fn_arg in port.name:
                    if port.name.endswith("_secret"):
                        port.type = PortType.SECRET_DATA
                    elif port.name.endswith("_valid"):
                        port.type = PortType.DATA_VALID
                    else:
                        port.type = PortType.PUBLIC_DATA

        return top_module_ports

    def _generate_testbench(self, debug: bool = False, simulator: str = "verilator"):
        top_module_ports = self.get_top_module_ports()

        # find the following ports:
        # clock, reset, start, done
        clock = find_port_by_name(top_module_ports, self.clock_name)
        clock.type = PortType.CLOCK
        reset = find_port_by_name(top_module_ports, "rst")
        reset.type = PortType.RESET
        start = find_port_by_name(top_module_ports, "start_valid")
        start.type = PortType.START
        done = find_port_by_name(top_module_ports, self.done_name)
        done.type = PortType.DONE

        data_ready = find_port_by_name(top_module_ports, "out0_ready")
        data_ready.type = PortType.DATA_READY
        end_ready = find_port_by_name(top_module_ports, "end_ready")
        end_ready.type = PortType.DATA_READY

        top_module_ports = self.map_to_fn_args(top_module_ports)
        self.check_has_any_secret_data_ports(top_module_ports)
        public_data_ports, secret_data_ports = self.get_public_and_secret_data_ports(
            top_module_ports
        )

        try:
            # create tb.sv with miter structure
            env = jinja2.Environment(
                loader=jinja2.FileSystemLoader(TEMPLATES_DIR),
                autoescape=jinja2.select_autoescape(),
            )

            if self.reset_active_low:
                reset_value = "1'b0"
                not_reset_value = "1'b1"
            else:
                reset_value = "1'b1"
                not_reset_value = "1'b0"

            # simulation testbench
            template = env.get_template("tb_sim_dynamatic.sv")
            tb = template.render(
                sim_timeout=SIM_TIMEOUT_NS,
                top_fn_name=self.top_fn_name,
                reset_value=reset_value,
                not_reset_value=not_reset_value,
                debug=debug,
                clock=clock,
                reset=reset,
                start=start,
                done=done,
                public_data_ports=public_data_ports,
                secret_data_ports=secret_data_ports,
                data_valid_ports=list(
                    filter(lambda x: x.type is PortType.DATA_VALID, top_module_ports)
                ),
                data_ready_ports=[data_ready, end_ready],
            )

            with open(Path(f"{self.verif_sim_dir}/tb.sv"), "w") as fp:
                _ = fp.write(tb)

        except Exception as exception:
            raise TestbenchRenderingException(exception)


T_Pipeline = BambuPipeline | DynamaticPipeline
