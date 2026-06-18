module {
  handshake.func @mysecretfunction(%arg0: !handshake.channel<i8>, %arg1: !handshake.channel<i8>, %arg2: memref<256xi8>, %arg3: !handshake.control<>, %arg4: !handshake.control<>, ...) -> (!handshake.channel<i8>, !handshake.control<>, !handshake.control<>) attributes {argNames = ["fn_arg_0_secret", "fn_arg_1", "fn_arg_arrout_1", "fn_arg_arrout_1_start", "start"], handshake.cfdfcThroughput = #handshake<cfdfcThroughput {"0" = 1.000000e+00 : f64}>, handshake.cfdfcToBBList = #handshake<cfdfcToBBList {"0" = [1 : ui32]}>, resNames = ["out0", "fn_arg_arrout_1_end", "end"]} {
    %0:3 = fork [3] %arg4 {handshake.bb = 0 : ui32, handshake.bufProps = #handshake<bufProps{"0": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00}>, handshake.name = "fork0"} : <>
    %1:3 = lsq[%arg2 : memref<256xi8>] (%arg3, %29#0, %addressResult, %addressResult_0, %addressResult_2, %dataResult_3, %result_12)  {groupSizes = [3 : i32], handshake.bufProps = #handshake<bufProps{"0": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00, "1": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00, "2": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00, "3": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00, "4": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00, "5": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00, "6": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00}>, handshake.name = "lsq1"} : (!handshake.control<>, !handshake.control<>, !handshake.channel<i8>, !handshake.channel<i8>, !handshake.channel<i8>, !handshake.channel<i8>, !handshake.control<>) -> (!handshake.channel<i8>, !handshake.channel<i8>, !handshake.control<>)
    %2 = constant %0#0 {handshake.bb = 0 : ui32, handshake.name = "constant2", value = false} : <>, <i1>
    %3:2 = fork [2] %2 {handshake.bb = 0 : ui32, handshake.name = "fork1"} : <i1>
    %4 = br %3#0 {handshake.bb = 0 : ui32, handshake.name = "br1"} : <i1>
    %5 = extsi %4 {handshake.bb = 0 : ui32, handshake.name = "extsi10"} : <i1> to <i4>
    %6 = br %3#1 {handshake.bb = 0 : ui32, handshake.name = "br2"} : <i1>
    %7 = extsi %6 {handshake.bb = 0 : ui32, handshake.name = "extsi11"} : <i1> to <i8>
    %8 = br %arg0 {handshake.bb = 0 : ui32, handshake.bufProps = #handshake<bufProps{"0": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00}>, handshake.name = "br3"} : <i8>
    %9 = br %arg1 {handshake.bb = 0 : ui32, handshake.bufProps = #handshake<bufProps{"0": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00}>, handshake.name = "br4"} : <i8>
    %10 = br %0#2 {handshake.bb = 0 : ui32, handshake.name = "br5"} : <>
    %11 = mux %28#0 [%5, %trueResult] {handshake.bb = 1 : ui32, handshake.name = "mux0"} : <i1>, [<i4>, <i4>] to <i4>
    %12 = buffer %11 {handshake.bb = 1 : ui32, handshake.name = "buffer0", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_R", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 1}>}} : <i4>
    %13:3 = fork [3] %12 {handshake.bb = 1 : ui32, handshake.name = "fork2"} : <i4>
    %14 = buffer %13#0 {handshake.bb = 1 : ui32, handshake.name = "buffer1", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 8 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i4>
    %15 = extsi %14 {handshake.bb = 1 : ui32, handshake.name = "extsi12"} : <i4> to <i8>
    %16 = extsi %13#1 {handshake.bb = 1 : ui32, handshake.name = "extsi9"} : <i4> to <i8>
    %17 = extsi %13#2 {handshake.bb = 1 : ui32, handshake.name = "extsi13"} : <i4> to <i5>
    %18 = buffer %28#3 {handshake.bb = 1 : ui32, handshake.name = "buffer12", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 7 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i1>
    %19 = mux %18 [%7, %trueResult_4] {handshake.bb = 1 : ui32, handshake.name = "mux1"} : <i1>, [<i8>, <i8>] to <i8>
    %20 = mux %28#1 [%8, %trueResult_6] {handshake.bb = 1 : ui32, handshake.name = "mux2"} : <i1>, [<i8>, <i8>] to <i8>
    %21 = buffer %20 {handshake.bb = 1 : ui32, handshake.name = "buffer5", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_DV", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 1, V: 1, R: 0}>}} : <i8>
    %22 = buffer %21 {handshake.bb = 1 : ui32, handshake.name = "buffer6", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_R", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 1}>}} : <i8>
    %23:3 = fork [3] %22 {handshake.bb = 1 : ui32, handshake.name = "fork3"} : <i8>
    %24 = mux %28#2 [%9, %trueResult_8] {handshake.bb = 1 : ui32, handshake.name = "mux3"} : <i1>, [<i8>, <i8>] to <i8>
    %25 = buffer %24 {handshake.bb = 1 : ui32, handshake.name = "buffer9", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_DV", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 1, V: 1, R: 0}>}} : <i8>
    %26 = buffer %25 {handshake.bb = 1 : ui32, handshake.name = "buffer10", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_R", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 1}>}} : <i8>
    %27:2 = fork [2] %26 {handshake.bb = 1 : ui32, handshake.name = "fork4"} : <i8>
    %result, %index = control_merge [%10, %trueResult_10]  {handshake.bb = 1 : ui32, handshake.name = "control_merge0"} : [<>, <>] to <>, <i1>
    %28:4 = fork [4] %index {handshake.bb = 1 : ui32, handshake.name = "fork5"} : <i1>
    %29:2 = fork [2] %result {handshake.bb = 1 : ui32, handshake.name = "fork6"} : <>
    %30 = source {handshake.bb = 1 : ui32, handshake.name = "source0"} : <>
    %31 = constant %30 {handshake.bb = 1 : ui32, handshake.name = "constant3", value = 1 : i2} : <>, <i2>
    %32 = extsi %31 {handshake.bb = 1 : ui32, handshake.name = "extsi14"} : <i2> to <i5>
    %33 = source {handshake.bb = 1 : ui32, handshake.name = "source1"} : <>
    %34 = constant %33 {handshake.bb = 1 : ui32, handshake.name = "constant6", value = 8 : i5} : <>, <i5>
    %35 = buffer %16 {handshake.bb = 1 : ui32, handshake.name = "buffer2", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i8>
    %addressResult, %dataResult = load[%35] %1#0 {handshake.bb = 1 : ui32, handshake.bufProps = #handshake<bufProps{"0": [0,inf], [0,inf], 1, 0.000000e+00, 0.000000e+00, 0.000000e+00, "1": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00}>, handshake.deps = #handshake<deps[<"store1" (0)>]>, handshake.mem_interface = #handshake.mem_interface<LSQ: 0>, handshake.name = "load0"} : <i8>, <i8>, <i8>, <i8>
    %36 = buffer %23#0 {handshake.bb = 1 : ui32, handshake.name = "buffer7", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 3 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i8>
    %37 = addi %dataResult, %36 {handshake.bb = 1 : ui32, handshake.name = "addi0"} : <i8>
    %38:2 = fork [2] %37 {handshake.bb = 1 : ui32, handshake.name = "fork7"} : <i8>
    %39 = buffer %38#0 {handshake.bb = 1 : ui32, handshake.name = "buffer15", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i8>
    %addressResult_0, %dataResult_1 = load[%39] %1#1 {handshake.bb = 1 : ui32, handshake.bufProps = #handshake<bufProps{"0": [0,inf], [0,inf], 1, 0.000000e+00, 0.000000e+00, 0.000000e+00, "1": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00}>, handshake.deps = #handshake<deps[<"store1" (0)>]>, handshake.mem_interface = #handshake.mem_interface<LSQ: 0>, handshake.name = "load3"} : <i8>, <i8>, <i8>, <i8>
    %40 = buffer %27#0 {handshake.bb = 1 : ui32, handshake.name = "buffer11", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 7 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i8>
    %41 = addi %dataResult_1, %40 {handshake.bb = 1 : ui32, handshake.name = "addi1"} : <i8>
    %42 = buffer %23#1 {handshake.bb = 1 : ui32, handshake.name = "buffer8", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 7 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i8>
    %43 = addi %41, %42 {handshake.bb = 1 : ui32, handshake.name = "addi2"} : <i8>
    %44 = buffer %19 {handshake.bb = 1 : ui32, handshake.name = "buffer3", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_DV", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 1, V: 1, R: 0}>}} : <i8>
    %45 = buffer %44 {handshake.bb = 1 : ui32, handshake.name = "buffer4", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_R", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 1}>}} : <i8>
    %46 = addi %45, %43 {handshake.bb = 1 : ui32, handshake.name = "addi3"} : <i8>
    %47:2 = fork [2] %46 {handshake.bb = 1 : ui32, handshake.name = "fork8"} : <i8>
    %48 = addi %15, %47#0 {handshake.bb = 1 : ui32, handshake.name = "addi4"} : <i8>
    %49 = buffer %38#1 {handshake.bb = 1 : ui32, handshake.name = "buffer16", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i8>
    %50 = buffer %48 {handshake.bb = 1 : ui32, handshake.name = "buffer17", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i8>
    %addressResult_2, %dataResult_3 = store[%49] %50 {handshake.bb = 1 : ui32, handshake.bufProps = #handshake<bufProps{"0": [0,inf], [0,inf], 1, 0.000000e+00, 0.000000e+00, 0.000000e+00, "1": [0,inf], [0,inf], 1, 0.000000e+00, 0.000000e+00, 0.000000e+00}>, handshake.deps = #handshake<deps[<"load3" (0)>, <"store1" (0)>, <"load0" (0)>]>, handshake.mem_interface = #handshake.mem_interface<LSQ: 0>, handshake.name = "store1"} : <i8>, <i8>, <i8>, <i8>
    %51 = addi %17, %32 {handshake.bb = 1 : ui32, handshake.name = "addi5"} : <i5>
    %52 = buffer %51 {handshake.bb = 1 : ui32, handshake.name = "buffer18", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_DV", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 1, V: 1, R: 0}>}} : <i5>
    %53:2 = fork [2] %52 {handshake.bb = 1 : ui32, handshake.name = "fork9"} : <i5>
    %54 = trunci %53#0 {handshake.bb = 1 : ui32, handshake.name = "trunci3"} : <i5> to <i4>
    %55 = cmpi ult, %53#1, %34 {handshake.bb = 1 : ui32, handshake.name = "cmpi0"} : <i5>
    %56:5 = fork [5] %55 {handshake.bb = 1 : ui32, handshake.name = "fork10"} : <i1>
    %trueResult, %falseResult = cond_br %56#0, %54 {handshake.bb = 1 : ui32, handshake.name = "cond_br1"} : <i1>, <i4>
    sink %falseResult {handshake.name = "sink0"} : <i4>
    %57 = buffer %56#1 {handshake.bb = 1 : ui32, handshake.name = "buffer19", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 7 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i1>
    %trueResult_4, %falseResult_5 = cond_br %57, %47#1 {handshake.bb = 1 : ui32, handshake.name = "cond_br2"} : <i1>, <i8>
    %trueResult_6, %falseResult_7 = cond_br %56#4, %23#2 {handshake.bb = 1 : ui32, handshake.name = "cond_br3"} : <i1>, <i8>
    sink %falseResult_7 {handshake.name = "sink1"} : <i8>
    %trueResult_8, %falseResult_9 = cond_br %56#3, %27#1 {handshake.bb = 1 : ui32, handshake.name = "cond_br4"} : <i1>, <i8>
    sink %falseResult_9 {handshake.name = "sink2"} : <i8>
    %58 = buffer %29#1 {handshake.bb = 1 : ui32, handshake.name = "buffer13", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_DV", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 1, V: 1, R: 0}>}} : <>
    %59 = buffer %58 {handshake.bb = 1 : ui32, handshake.name = "buffer14", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <>
    %trueResult_10, %falseResult_11 = cond_br %56#2, %59 {handshake.bb = 1 : ui32, handshake.bufProps = #handshake<bufProps{"1": [1,inf], [0,inf], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00}>, handshake.name = "cond_br5"} : <i1>, <>
    %60 = merge %falseResult_5 {handshake.bb = 2 : ui32, handshake.name = "merge0"} : <i8>
    %result_12, %index_13 = control_merge [%falseResult_11]  {handshake.bb = 2 : ui32, handshake.name = "control_merge1"} : [<>] to <>, <i1>
    sink %index_13 {handshake.name = "sink3"} : <i1>
    end {handshake.bb = 2 : ui32, handshake.name = "end0"} %60, %1#2, %0#1 : <i8>, <>, <>
  }
}

