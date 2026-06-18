from turboturtle.hls.arguments.types import HLSArgConcatType, HLSArgEnum

REQUIRED_ARGUMENTS = [
    HLSArgEnum("clock", [str(i) for i in range(1, 20)], HLSArgConcatType.EQUAL),
    HLSArgEnum(
        "clock_uncertainty", [f"{i}%" for i in range(5, 80)], HLSArgConcatType.EQUAL
    ),
    # Array Partition Configuration
    HLSArgEnum(
        "syn.array_partition.complete_threshold",
        [str(i) for i in range(100)],
        HLSArgConcatType.EQUAL,
    ),
    HLSArgEnum(
        "syn.array_partition.throughput_driven", ["auto", "off"], HLSArgConcatType.EQUAL
    ),
    # Array Stencil Configuration
    HLSArgEnum(
        "syn.array_stencil.throughput_driven", ["auto", "off"], HLSArgConcatType.EQUAL
    ),
    # Compile Options
    HLSArgEnum("syn.compile.enable_auto_rewind", ["1", "0"], HLSArgConcatType.EQUAL),
    HLSArgEnum("syn.compile.no_signed_zeros", ["1", "0"], HLSArgConcatType.EQUAL),
    HLSArgEnum(
        "syn.compile.pipeline_flush_in_task",
        ["always", "never", "ii1"],
        HLSArgConcatType.EQUAL,
    ),
    HLSArgEnum(
        "syn.compile.pipeline_loops",
        [str(i) for i in range(100)],
        HLSArgConcatType.EQUAL,
    ),
    HLSArgEnum(
        "syn.compile.pipeline_style", ["stp", "flp", "frp"], HLSArgConcatType.EQUAL
    ),
    HLSArgEnum(
        "syn.compile.unsafe_math_optimizations", ["1", "0"], HLSArgConcatType.EQUAL
    ),
    # Dataflow Configuration
    HLSArgEnum(
        "syn.dataflow.default_channel", ["fifo", "pingpong"], HLSArgConcatType.EQUAL
    ),
    HLSArgEnum(
        "syn.dataflow.disable_fifo_sizing_opt", ["1", "0"], HLSArgConcatType.EQUAL
    ),
    # IMPORTANT! Be careful when using this option as incorrect use can result in a design which fails to operate correctly
    # HLSArgEnum("syn.dataflow.fifo_depth", [str(i) for i in range(1, 21)], HLSArgConcatType.EQUAL),
    HLSArgEnum(
        "syn.dataflow.scalar_fifo_depth",
        [str(i) for i in range(1, 21)],
        HLSArgConcatType.EQUAL,
    ),
    HLSArgEnum(
        "syn.dataflow.start_fifo_depth",
        [str(i) for i in range(1, 21)],
        HLSArgConcatType.EQUAL,
    ),
    HLSArgEnum("syn.dataflow.strict_stable_sync", ["1", "0"], HLSArgConcatType.EQUAL),
    HLSArgEnum(
        "syn.dataflow.task_level_fifo_depth",
        [str(i) for i in range(1, 21)],
        HLSArgConcatType.EQUAL,
    ),
    # Operator Configuration
    # ...
    # RTL Configuration
    HLSArgEnum(
        "syn.rtl.fsm_encoding",
        ["auto", "gray", "johnson", "one_hot", "sequential", "none"],
        HLSArgConcatType.EQUAL,
    ),
    HLSArgEnum(
        "syn.rtl.fsm_safe_state",
        ["auto_safe_state", "default_state", "power_on_state", "reset_state", "none"],
        HLSArgConcatType.EQUAL,
    ),
    HLSArgEnum("syn.rtl.mult_keep_attribute", ["1", "0"], HLSArgConcatType.EQUAL),
    HLSArgEnum("syn.rtl.register_all_io", ["1", "0"], HLSArgConcatType.EQUAL),
    # Schedule Setting
    HLSArgEnum("syn.schedule.enable_dsp_full_reg", ["1", "0"], HLSArgConcatType.EQUAL),
    # Storage Configuration
    # ...
    # Unroll Setting
    HLSArgEnum(
        "syn.unroll.tripcount_threshold",
        [str(i) for i in range(20)],
        HLSArgConcatType.EQUAL,
    ),
]


PIPELINE_PRAGMA_CONTENTS: list[str] = [
    "HLS pipeline II=1",
    "HLS pipeline II=1 off",
    "HLS pipeline II=1 rewind style=stp",
    "HLS pipeline II=1 rewind style=flp",
    "HLS pipeline II=1 rewind style=frp",
]

DATAFLOW_PRAGMA_CONTENTS: list[str] = [
    #     "HLS dataflow",
    #     "HLS dataflow disable_start_propagation",
]


LOOP_PRAGMA_CONTENTS: list[str] = [
    "HLS loop_flatten",
    "HLS loop_flatten off",
    "HLS loop_merge",
    "HLS loop_merge force",
    "HLS unroll",
    "HLS unroll off=true",
    "HLS performance target_ti=10 target_tl=10",
    *PIPELINE_PRAGMA_CONTENTS,
    *DATAFLOW_PRAGMA_CONTENTS,
]


TOP_FUNCTION_PRAGMA_CONTENTS: list[str] = []


FUNCTION_PRAGMA_CONTENTS: list[str] = [
    "HLS inline",
    "HLS inline off",
    "HLS inline recursive",
    "HLS expression_balance",
    "HLS expression_balance off",
    *PIPELINE_PRAGMA_CONTENTS,
    *DATAFLOW_PRAGMA_CONTENTS,
]
