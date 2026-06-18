from turboturtle.hls.arguments.types import (
    HLSArgEnum,
    HLSArgConcatType,
    HLSArg,
    HLSArgExclusives,
)


REQUIRED_ARGUMENTS = [
    # Frontend Compiler Options:
    HLSArgEnum(
        "--compiler",
        [
            "I386_GCC7",
            "I386_GCC8",
            "I386_CLANG6",
            "I386_CLANG7",
            "I386_CLANG8",
            "I386_CLANG9",
            "I386_CLANG10",
            "I386_CLANG11",
            "I386_CLANG12",
        ],
        HLSArgConcatType.EQUAL,
    ),
    HLSArgEnum(
        "-O", ["0", "1", "2", "3", "4", "5", "s", "fast", "g"], HLSArgConcatType.DIRECT
    ),
    # Scheduling:
    HLSArgExclusives(
        [
            HLSArg("--speculative-sdc-scheduling"),
            HLSArgEnum(
                "--parametric-list-based", ["0", "1", "2"], HLSArgConcatType.EQUAL
            ),
        ]
    ),
    # Binding:
    HLSArgEnum(
        "--register-allocation",
        [
            "WEIGHTED_TS",
            "COLORING",
            "WEIGHTED_COLORING",
            "CHORDAL_COLORING",
            "BIPARTITE_MATCHING",
            "TTT_CLIQUE_COVERING",
            "UNIQUE_BINDING",
        ],
        HLSArgConcatType.EQUAL,
    ),
    HLSArgEnum(
        "--module-binding",
        [
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
        ],
        HLSArgConcatType.EQUAL,
    ),
    # Memory Allocation:
    HLSArgEnum(
        "--memory-allocation-policy",
        ["ALL_BRAM", "LSS", "GSS", "NO_BRAM", "EXT_PIPELINED_BRAM"],
        HLSArgConcatType.EQUAL,
    ),
    # This is fixed in the setup down below.
    # HLSArgEnum(
    #     "--channels-type",
    #     ["MEM_ACC_11", "MEM_ACC_N1", "MEM_ACC_NN"],
    #     HLSArgConcatType.EQUAL,
    # ),
    HLSArgEnum(
        "--memory-ctrl-type", ["D00", "D10", "D11", "D21"], HLSArgConcatType.EQUAL
    ),
    HLSArgEnum("--sparse-memory", ["on", "off"], HLSArgConcatType.EQUAL),
    HLSArgEnum(
        "--distram-threshold",
        [str(2**exp) for exp in range(1, 13)],
        HLSArgConcatType.EQUAL,
    ),
    # RTL Synthesis:
    HLSArgEnum(
        "--device-name",
        [
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
        ],
        HLSArgConcatType.EQUAL,
    ),
    HLSArgEnum(
        "--clock-period",
        [
            # "1",
            # "2",
            # "3",
            # "4",
            # "5",
            # "6",
            # "7",
            # "8",
            # "9",
            "10",
            "11",
            "12",
            "13",
            "14",
            "15",
            "16",
            "17",
            "18",
            "19",
            "20",
        ],
        HLSArgConcatType.EQUAL,
    ),
    HLSArgExclusives(
        [
            HLSArg("--soft-float"),
            HLSArg("--flopoco"),
            HLSArg("--soft-fp"),
            HLSArg("--fp-subnormal"),
        ]
    ),
    HLSArgEnum(
        "--fp-exception-mode",
        ["ieee", "saturation", "overflow"],
        HLSArgConcatType.EQUAL,
    ),
    HLSArgEnum(
        "--fp-rounding-mode", ["nearest_even", "truncate"], HLSArgConcatType.EQUAL
    ),
    HLSArgEnum("--hls-div", ["none", "nr1", "nr2", "NR", "as"], HLSArgConcatType.EQUAL),
    HLSArgEnum("--hls-fpdiv", ["SRT4", "G"], HLSArgConcatType.EQUAL),
    HLSArgEnum("--fsm-encoding", ["auto", "one-hot", "binary"], HLSArgConcatType.EQUAL),
    HLSArgEnum("--DSP-fracturing", ["16", "32"], HLSArgConcatType.EQUAL),
    HLSArgEnum("--timing-model", ["EC", "SIMPLE"], HLSArgConcatType.EQUAL),
    # Other Options:
    HLSArgEnum(
        "--num-accelerators", [str(2**exp) for exp in range(6)], HLSArgConcatType.EQUAL
    ),
    HLSArgEnum("--AXI-burst-type", ["FIXED", "INCREMENTAL"], HLSArgConcatType.EQUAL),
]

OPTIONAL_ARGUMENTS = [
    # Frontend Compiler Options:
    # HLSArg("-fgcse-after-reload"),
    # HLSArg("-fipa-cp-clone"),
    # HLSArg("-ftree-partial-pre"),
    # HLSArg("-funswitch-loops"),
    # HLSArg("-finline-functions"),
    # HLSArg("-fdisable-tree-bswap"),
    # HLSArg("-fno-tree-loop-ivcanon"),
    # HLSArg("-ftree-vectorize"),
    # Scheduling:
    # HLSArg("--pipelining"),
    HLSArg("--no-chaining"),
    # Binding:
    HLSArg("--shared-input-registers"),
    # Memory Allocation:
    HLSArg("--do-not-use-asynchronous-memories"),
    # HLSArgExclusives([HLSArg("--unaligned-access"), HLSArg("--aligned-access")]),
    HLSArg("--do-not-chain-memories"),
    HLSArg("--rom-duplication"),
    # RTL Synthesis:
    HLSArg("--power-optimization"),
    HLSArg("--libm-std-rounding"),
    HLSArgEnum(
        "--fp-format", ["inline-math", "inline-conversion"], HLSArgConcatType.EQUAL
    ),
    # Other Options:
    HLSArg("--disable-bitvalue-ipa"),
    HLSArgExclusives(
        [
            HLSArg("--enable-function-proxy"),
            HLSArg("--disable-function-proxy"),
        ]
    ),
]
