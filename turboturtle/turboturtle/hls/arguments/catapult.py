from turboturtle.hls.arguments.types import HLSArgEnum, HLSArgConcatType


REQUIRED_ARGUMENTS = [
    # HLSArgEnum("directive set -ADVANCED_TIMING_MODEL", ["estimation", "no"], HLSArgConcatType.SPACE),
    HLSArgEnum(
        "directive set -ADVANCED_TIMING_MODEL_USES_LIB",
        ["use_library", "yes", "no"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -ANNOTATE_RAM_DELAYS", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -AREA_GOAL",
        [str(i) for i in range(1000)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -ARRAY_INDEX_OPTIMIZATION",
        ["true", "false"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -ARRAY_SIZE",
        [str(i) for i in range(1, 2048)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -ASSIGN_OVERHEAD",
        [str(i) for i in range(0, 100)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -ASSUME_ARRAY_INDEX_IN_RANGE",
        ["true", "false"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -ASSUME_ARRAY_INDEX_PROBES",
        ["true", "false"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -BOUNDARY_OPT", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -BUILTIN_MODULARIO", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -CHAN_IO_PROTOCOL",
        ["use_library", "standard", "lzvz", "highfreq", "coupled", "push"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -CHARACTERIZE_OPERATOR",
        ["true", "false"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -CHARACTERIZE_ROM", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -CIRCULAR_BUFFER_REGISTER_OUTPUT",
        ["true", "false"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -CLOCK_OVERHEAD",
        [str(i) for i in range(100)],
        HLSArgConcatType.SPACE,
    ),
    # HLSArgEnumMulti("directive set -CLUSTER", ["multadd", "addtree", "square", "mult"], HLSArgConcatType.SPACE),
    HLSArgEnum(
        "directive set -CLUSTER_ADDTREE_IN_COUNT_THRESHOLD",
        [str(i) for i in range(100)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -CLUSTER_ADDTREE_IN_WIDTH_THRESHOLD",
        [str(i) for i in range(100)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -CLUSTER_CSA_ARCH",
        ["wordwise", "dadda", "wallace"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -CLUSTER_FAST_MODE", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -CLUSTER_INLINE", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -CLUSTER_INPUT_DELAY",
        [str(i) for i in range(100)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -CLUSTER_OPT_CONSTANT_INPUTS",
        ["true", "false"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -CLUSTER_OUTPUT_DELAY",
        [str(i) for i in range(100)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -CLUSTER_TYPE",
        ["combinational", "sequential", "both"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -COMPGRADE_ADD",
        ["fast", "small", "standard"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -COMPGRADE_MUL",
        ["fast", "small", "standard"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -COMPGRADE_MUX",
        ["fast", "small", "standard"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -COMPGRADE_SHIFT",
        ["fast", "small", "standard"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -DEFAULT_VALUE_OPT", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -DESIGN_GOAL", ["area", "latency"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -DISABLE_IF_MERGING", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -DSP_EXTRACTION",
        ["use_library", "yes", "no", "pipe_only"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -DSP_EXTRACTION_COMPLEXMULT",
        ["use_library", "yes", "no"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -DSP_EXTRACTION_COMPLEXMULT",
        ["use_library", "yes", "no"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -DSP_EXTRACTION_TRAV_PREADD_FANOUT",
        ["true", "false"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -DSP_EXTRACTION_UNFOLD_MAC",
        ["true", "false"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -DSP_MAPPING",
        ["tree", "systolic", "cascade"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -EFFORT_LEVEL", ["medium", "high"], HLSArgConcatType.SPACE
    ),
    # HLSArgEnum("directive set -ENABLE_ADVANCED_COMPONENTS", ["true", "false"], HLSArgConcatType.SPACE),
    HLSArgEnum(
        "directive set -ENABLE_DIRECT_INPUT_PUSHING",
        ["true", "false"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -ENABLE_SHORT_CUT_OPERATOR_REPLACEMENT",
        ["true", "false"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -ESTIMATE_LOGIC_DELAYS",
        ["use_library", "yes", "no"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -ESTIMATE_ROM", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -FIFO_DEPTH",
        [str(i) for i in range(-1, 100)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -FSM_BINARY_ENCODING_THRESHOLD",
        [str(i) for i in range(0, 100)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -FSM_ENCODING",
        ["none", "onehot", "gray", "binary"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -GATE_EFFORT", ["high", "normal"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -GATE_EXPAND_MIN_WIDTH",
        [str(i) for i in range(-1, 100)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -GATE_MIN_WIDTH",
        [str(i) for i in range(-1, 100)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -GEN_EXTERNAL_ENABLE", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -INCR_IO_CYCLES", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -INCR_OP_CYCLES", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -INCR_REG_SHARING", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -INCR_RES_SHARING", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -INPUT_REGISTERS", ["true", "false"], HLSArgConcatType.SPACE
    ),
    # HLSArgEnum("directive set -IO_MODE", ["free", "super", "fixed"], HLSArgConcatType.SPACE),
    HLSArgEnum("directive set -LOGIC_OPT", ["true", "false"], HLSArgConcatType.SPACE),
    HLSArgEnum(
        "directive set -LOGIC_OPT_SEQUENTIAL", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -LOGIC_OPT_WIDTH",
        [str(i) for i in range(-1, 100)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -LUT_MAPPING",
        ["no", "schedule", "estimation"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -MAX_LATENCY",
        [str(i) for i in range(-1, 500)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum("directive set -MERGEABLE", ["true", "false"], HLSArgConcatType.SPACE),
    HLSArgEnum(
        "directive set -MUX_PUSHING", ["no", "yes", "force"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum("directive set -MUXPATH", ["true", "false"], HLSArgConcatType.SPACE),
    HLSArgEnum(
        "directive set -NO_FULL_CYCLE",
        ["use_library", "yes", "no"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -OPT_CONST_MULTS",
        ["use_library", "full", "simple_one_adder", "power_of_2"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -OPT_LESS_TO_NEQ", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -OUTPUT_REGISTERS", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -PACKING_MODE",
        ["absolute", "compact", "base_aligned", "sidebyside"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -PIPELINE_INIT_INTERVAL",
        [str(i) for i in range(0, 100)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -PIPELINE_STALL_MODE",
        ["stall", "flush", "bubble"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -PRESERVE_STRUCTS", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -PROTOTYPE_ROM", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -PROTOTYPING_ENGINE", ["oasys", "dc"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum("directive set -REALLOC", ["true", "false"], HLSArgConcatType.SPACE),
    HLSArgEnum(
        "directive set -REDUNDANT_MUX_OPT", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -REG_MAX_FANOUT",
        [str(i) for i in range(0, 100)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -REGISTER_SHARING_LIMIT",
        [str(i) for i in range(0, 100)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -REGISTER_SHARING_MAX_WIDTH_DIFFERENCE",
        [str(i) for i in range(0, 100)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -ROM_THRESHOLD",
        [str(i) for i in range(0, 1000)],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum("directive set -SAFE_FSM", ["true", "false"], HLSArgConcatType.SPACE),
    HLSArgEnum(
        "directive set -SCHED_USE_REG_DLY",
        ["use_library", "yes", "no"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -SCHED_USE_WAIT_DLY", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -SCHEDULER_BEST_TRY", ["true", "false"], HLSArgConcatType.SPACE
    ),
    # HLSArgEnum("directive set -SCHEDULER_RETIMING", ["true", "false"], HLSArgConcatType.SPACE),
    HLSArgEnum("directive set -SPECULATE", ["true", "false"], HLSArgConcatType.SPACE),
    HLSArgEnum(
        "directive set -STAGE_IO_CNS",
        ["soft", "true", "none", "false", "hard"],
        HLSArgConcatType.SPACE,
    ),
    HLSArgEnum(
        "directive set -STAGE_REPLICATION", ["0", "1", "2", "3"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -STRUCT_LAYOUT", ["legacy", "c_style"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -TIMING_CHECKS", ["true", "false"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum(
        "directive set -UNIQUIFY", ["none", "auto", "all"], HLSArgConcatType.SPACE
    ),
    HLSArgEnum("directive set -UNROLL", ["yes", "no"], HLSArgConcatType.SPACE),
    HLSArgEnum("directive set -USE_LIB_MUX", ["true", "false"], HLSArgConcatType.SPACE),
    # HLSArgEnum("directive set -X_PHD_SYNTHESIS", ["true", "false"], HLSArgConcatType.SPACE),
]

OPTIONAL_ARGUMENTS = []
