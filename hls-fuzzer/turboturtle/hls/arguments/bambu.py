from turboturtle.hls.arguments.argument import Arg


class CompilerBambuArg(Arg):
    name = "--compiler"
    concat = "="
    options = [
        "I386_GCC7",
        "I386_GCC8",
        "I386_CLANG6",
        "I386_CLANG7",
        "I386_CLANG8",
        "I386_CLANG9",
        "I386_CLANG10",
        "I386_CLANG11",
        "I386_CLANG12",
    ]


class CompilerOptBambuArg(Arg):
    name = "-O"
    concat = ""
    options = ["0", "1", "2", "3", "s", "fast", "g"]


class SchedulingBambuArg(Arg):
    options = [
        "--parametric-list-based=0",
        "--parametric-list-based=1",
        "--parametric-list-based=2",
        "--speculative-sdc-scheduling",
        # "--pipelining",
        "--no-chaining",
    ]


class RegisterAllocationBambuArg(Arg):
    name = "--register-allocation"
    concat = "="
    options = [
        "WEIGHTED_TS",
        "COLORING",
        "WEIGHTED_COLORING",
        "CHORDAL_COLORING",
        "BIPARTITE_MATCHING",
        "TTT_CLIQUE_COVERING",
        "UNIQUE_BINDING",
    ]


class SharedInputRegistersBambuArg(Arg):
    options = ["--shared-input-registers", ""]


class ModuleBindingBambuArg(Arg):
    name = "--module-binding"
    concat = "="
    options = [
        "WEIGHTED_TS",
        "WEIGHTED_COLORING",
        "COLORING",
        "TTT_FAST",
        "TTT_FAST2",
        "TTT_FULL",
        "TTT_FULL2",
        "TS",
        "BIPARTITE_MATCHING",
        "UNIQUE",
    ]


class MemoryAllocationPolicyBambuArg(Arg):
    name = "--memory-allocation-policy"
    concat = "="
    options = ["ALL_BRAM", "LSS", "GSS", "NO_BRAM", "EXT_PIPELINED_BRAM"]


class MemoryCtrlTypeBambuArg(Arg):
    name = "--memory-ctrl-type"
    concat = "="
    options = ["D00", "D10", "D11", "D21"]


class SparseMemoryBambuArg(Arg):
    name = "--sparse-memory"
    concat = "="
    options = ["on", "off"]


class DoNotUseAsynchronousMemoriesBambuArg(Arg):
    options = ["--do-not-use-asynchronous-memories", ""]


class SerializeMemoryAccessBambuArg(Arg):
    options = ["--serialize-memory-accesses", ""]


class AccessAlignmentBambuArg(Arg):
    options = ["--aligned-access", "--unaligned-access"]


class ROMDuplicationBambuArg(Arg):
    options = ["--rom-duplication", ""]


class BRAMHighLatencyBambuArg(Arg):
    name = "--bram-high-latency"
    concat = "="
    options = ["3", "4"]


class DeviceNameBambuArg(Arg):
    name = "--device-name"
    concat = "="
    options = [
        "5SGXEA7N2F45C1",
        "EP2C70F896C6",
        "EP2C70F896C6-R",
        "EP4SGX530KH40C2",
        "LFE335EA8FN484C",
        "LFE5U85F8BG756C",
        "LFE5UM85F8BG756C",
        "asap7-BC",
        "asap7-TC",
        "asap7-WC",
        "nangate45",
        "nx1h140tsp",
        "nx1h35S",
        "nx2h540tsc",
        "xc4vlx100-10ff1513",
        "xc5vlx110t-1ff1136",
        "xc5vlx330t-2ff1738",
        "xc5vlx50-3ff1153",
        "xc6vlx240t-1ff1156",
        "xc7a100t-1csg324-VVD",
        "xc7vx330t-1ffg1157",
        "xc7vx485t-2ffg1761-VVD",
        "xc7vx690t-3ffg1930-VVD",
        "xc7z020-1clg484",
        "xc7z020-1clg484-VVD",
        "xc7z020-1clg484-YOSYS-VVD",
        "xc7z045-2ffg900-VVD",
        "xcku060-3ffva1156-VVD",
        "xcu280-2Lfsvh2892-VVD",
        "xcu55c-2Lfsvh2892-VVD",
    ]


class FloatingPointImplementationBambuArg(Arg):
    options = ["--soft-float", "--flopoco", "--soft-fp", "--fp-subnormal"]


class LibmStdRoundingBambuArg(Arg):
    options = ["--libm-std-rounding", ""]


class FPSubnormalBambuArg(Arg):
    options = ["--fp-subnormal", ""]


class FPExceptionModeBambuArg(Arg):
    name = "--fp-exception-mode"
    concat = "="
    options = ["ieee", "saturation", "overflow"]


class FPRoundingModeBambuArg(Arg):
    name = "--fp-rounding-mode"
    concat = "="
    options = ["nearest_even", "truncate"]


class HLSDivBambuArg(Arg):
    name = "--hls-div"
    concat = "="
    options = ["none", "nr1", "nr2", "NR", "as"]


class HLSFPDivBambuArg(Arg):
    name = "--hls-fpdiv"
    concat = "="
    options = ["SRT4", "G", "SF"]


class FSMEncodingBambuArg(Arg):
    name = "--fsm-encoding"
    concat = "="
    options = ["auto", "one-hot", "binary"]


class DSPFracturingBambuArg(Arg):
    name = "--DSP-fracturing"
    concat = "="
    options = ["16", "32"]


class TimingModelBambuArg(Arg):
    name = "--timing-model"
    concat = "="
    options = ["EC", "SIMPLE"]
