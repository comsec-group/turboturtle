import subprocess
import glob
from pathlib import Path
from enum import Enum, auto
import attrs

from turboturtle.exceptions import SubprocessException

C_FUNCTION_ARRAY_INPUT_PREFIX = "fn_arg_arrin"
C_FUNCTION_ARRAY_OUTPUT_PREFIX = "fn_arg_arrout"

SIDE_CHANNEL_PROPERTY_NAME = "no_sidechannel"
ADDRESS_ENABLE_PROPERTY_NAME = "address_enable_signals_equal"
ADDRESS_TAINT_PROPERTY_NAME = "no_address_taint"
DOCKER_PLATFORM = "linux/amd64"

TT_CONFIG_FILE = Path("config.toml")

TURBOTURTLE_DIR = Path(__file__).parent
TURBOTURTLE_ROOT_DIR = TURBOTURTLE_DIR.parent
TEMPLATES_DIR = Path(f"{TURBOTURTLE_ROOT_DIR}/templates")
REMOTE_SIM_PYTHON_FILE = Path(f"{TEMPLATES_DIR}/remote_sim.py")
REMOTE_MULTI_SIM_PYTHON_FILE = Path(f"{TEMPLATES_DIR}/remote_multi_sim.py")
PYCPARSER_FAKE_HEADERS = Path(
    f"{TURBOTURTLE_ROOT_DIR}/toolchain/pycparser/utils/fake_libc_include"
)
CTURTLE = Path(f"{TURBOTURTLE_ROOT_DIR}/toolchain/cturtle/cturtle_v2/main.py")
TIMEOUT_MINUTES = 60
REDUCTION_TIMEOUT_MINUTES = 2 * 60
REDUCTION_TIMEOUT = REDUCTION_TIMEOUT_MINUTES * 60
TIMEOUT_SECONDS = TIMEOUT_MINUTES * 60
TIMEOUT_CMD = f"timeout --kill-after=5m {TIMEOUT_MINUTES}m"
SIM_REPEATS = 5000
SIM_TIMEOUT_NS = 10000
SIM_TIMEOUT_NS = 500000000
BASE_INDENT = "  "


def ttcall(
    cmd: list[str], logfile: Path | None = None, combine_stdout_and_stderr: bool = False
):
    debug = True

    if debug:
        cmds = [str(c) for c in cmd]
        cmd_str = " ".join(cmds)
        print(f"excecuting: {cmd_str}")

    process = subprocess.Popen(
        cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, universal_newlines=True
    )
    stdout, stderr = process.communicate()

    if combine_stdout_and_stderr:
        stdout += stderr

    if logfile is not None:
        with open(logfile, "w") as fp:
            _ = fp.write(stdout)

    if debug:
        print(stdout)
        if not combine_stdout_and_stderr:
            print(stderr)

    if process.returncode != 0:
        if process.returncode in [124, 137]:
            if combine_stdout_and_stderr:
                raise SubprocessException(f"SUBPROCESS TIMEOUT: {stdout}")
            else:
                raise SubprocessException(f"SUBPROCESS TIMEOUT {stderr}")

        if combine_stdout_and_stderr:
            raise SubprocessException(stdout)
        else:
            raise SubprocessException(stderr)


def create_new_file(lines: list[str], path: Path):
    """
    Create a new file based on path. (Overrides existing file at path!)
    Puts each string in lines on a new line.
    Ends file with a newline.
    """

    with open(path, "w") as file:
        file.writelines("\n".join(lines))
        file.write("\n")


def collect_synthesis_files(rtl_folder: Path) -> list[Path]:
    rtl_files = glob.glob(str(Path(f"{rtl_folder}/*.v")))

    return [Path(rtl_file) for rtl_file in rtl_files]


def collect_meminit_files(rtl_folder: Path) -> list[Path]:
    mem_files = glob.glob(str(Path(f"{rtl_folder}/*.mem")))

    return [Path(mem_file) for mem_file in mem_files]


def find_instance_name_belonging_to_meminit(source: Path, meminit: str) -> str:
    """
    Find the instance name which uses the specified <name>.mem file (meminit)
    as a parameter during instantiation and return this name.
    This method should probably only be using with files generated using
    PandA Bambu HLS.
    """

    class ParsingState(Enum):
        SEEK_PATTERN = auto()
        SEEK_BRCLOSE = auto()
        SEEK_BROPEN = auto()
        SEEK_INSTNAME = auto()

    meminit_pattern = meminit
    parsing_state = ParsingState.SEEK_PATTERN
    current_index = 0
    next_index = 0
    inst_name_start = 0
    inst_name_end = 0

    inst_names: list[str] = []

    with open(str(source)) as fp:
        file = fp.read()
        while True:
            if parsing_state == ParsingState.SEEK_PATTERN:
                current_index = file.find(meminit_pattern, next_index)
                if current_index == -1:
                    break
                next_index = current_index + len(meminit_pattern)
                parsing_state = ParsingState.SEEK_BRCLOSE
            if parsing_state == ParsingState.SEEK_BRCLOSE:
                current_index = file.find("))", next_index)
                next_index = current_index + len("))")
                inst_name_start = next_index
                parsing_state = ParsingState.SEEK_BROPEN
            if parsing_state == ParsingState.SEEK_BROPEN:
                current_index = file.find("(", next_index)
                next_index = current_index + len("(")
                inst_name_end = current_index - 1
                parsing_state = ParsingState.SEEK_INSTNAME
            if parsing_state == ParsingState.SEEK_INSTNAME:
                inst_name = file[inst_name_start:inst_name_end].strip()
                inst_names.append(inst_name)
                parsing_state = ParsingState.SEEK_PATTERN

    if len(inst_names) > 0:
        return inst_names[0]
    else:
        raise Exception(f"{meminit} not found in file {source}")


def dumper(obj):
    if attrs.has(obj):
        return attrs.asdict(obj)
    else:
        return obj
