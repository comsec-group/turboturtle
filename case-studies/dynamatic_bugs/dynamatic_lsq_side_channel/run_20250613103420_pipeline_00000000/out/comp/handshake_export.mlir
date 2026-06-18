module {
  handshake.func @mysecretfunction(%arg0: !handshake.channel<i8>, %arg1: !handshake.channel<i8>, %arg2: memref<256xi8>, %arg3: !handshake.control<>, %arg4: !handshake.control<>, ...) -> (!handshake.channel<i8>, !handshake.control<>, !handshake.control<>) attributes {argNames = ["fn_arg_0_secret", "fn_arg_1", "fn_arg_arrout_1", "fn_arg_arrout_1_start", "start"], handshake.cfdfcThroughput = #handshake<cfdfcThroughput {"0" = 1.000000e+00 : f64}>, handshake.cfdfcToBBList = #handshake<cfdfcToBBList {"0" = [1 : ui32]}>, resNames = ["out0", "fn_arg_arrout_1_end", "end"]} {
    %0:3 = fork [3] %arg4 {handshake.bb = 0 : ui32, handshake.bufProps = #handshake<bufProps{"0": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00}>, handshake.name = "fork0"} : <>
    %1:3 = lsq[%arg2 : memref<256xi8>] (%arg3, %24#0, %addressResult, %addressResult_0, %addressResult_2, %dataResult_3, %falseResult_11)  {groupSizes = [3 : i32], handshake.bufProps = #handshake<bufProps{"0": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00, "1": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00, "2": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00, "3": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00, "4": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00, "5": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00, "6": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00}>, handshake.name = "lsq1"} : (!handshake.control<>, !handshake.control<>, !handshake.channel<i8>, !handshake.channel<i8>, !handshake.channel<i8>, !handshake.channel<i8>, !handshake.control<>) -> (!handshake.channel<i8>, !handshake.channel<i8>, !handshake.control<>)
    %2 = constant %0#0 {handshake.bb = 0 : ui32, handshake.name = "constant2", value = false} : <>, <i1>
    %3:2 = fork [2] %2 {handshake.bb = 0 : ui32, handshake.name = "fork1"} : <i1>
    %4 = extsi %3#0 {handshake.bb = 0 : ui32, handshake.name = "extsi10"} : <i1> to <i4>
    %5 = extsi %3#1 {handshake.bb = 0 : ui32, handshake.name = "extsi11"} : <i1> to <i8>
    %6 = mux %23#0 [%4, %trueResult] {handshake.bb = 1 : ui32, handshake.name = "mux0"} : <i1>, [<i4>, <i4>] to <i4>
    %7 = buffer %6 {handshake.bb = 1 : ui32, handshake.name = "buffer0", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_R", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 1}>}} : <i4>
    %8:3 = fork [3] %7 {handshake.bb = 1 : ui32, handshake.name = "fork2"} : <i4>
    %9 = buffer %8#0 {handshake.bb = 1 : ui32, handshake.name = "buffer1", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 8 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i4>
    %10 = extsi %9 {handshake.bb = 1 : ui32, handshake.name = "extsi12"} : <i4> to <i8>
    %11 = extsi %8#1 {handshake.bb = 1 : ui32, handshake.name = "extsi9"} : <i4> to <i8>
    %12 = extsi %8#2 {handshake.bb = 1 : ui32, handshake.name = "extsi13"} : <i4> to <i5>
    %13 = buffer %23#3 {handshake.bb = 1 : ui32, handshake.name = "buffer12", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 7 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i1>
    %14 = mux %13 [%5, %trueResult_4] {handshake.bb = 1 : ui32, handshake.name = "mux1"} : <i1>, [<i8>, <i8>] to <i8>
    %15 = mux %23#1 [%arg0, %trueResult_6] {handshake.bb = 1 : ui32, handshake.name = "mux2"} : <i1>, [<i8>, <i8>] to <i8>
    %16 = buffer %15 {handshake.bb = 1 : ui32, handshake.name = "buffer5", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_DV", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 1, V: 1, R: 0}>}} : <i8>
    %17 = buffer %16 {handshake.bb = 1 : ui32, handshake.name = "buffer6", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_R", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 1}>}} : <i8>
    %18:3 = fork [3] %17 {handshake.bb = 1 : ui32, handshake.name = "fork3"} : <i8>
    %19 = mux %23#2 [%arg1, %trueResult_8] {handshake.bb = 1 : ui32, handshake.name = "mux3"} : <i1>, [<i8>, <i8>] to <i8>
    %20 = buffer %19 {handshake.bb = 1 : ui32, handshake.name = "buffer9", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_DV", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 1, V: 1, R: 0}>}} : <i8>
    %21 = buffer %20 {handshake.bb = 1 : ui32, handshake.name = "buffer10", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_R", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 1}>}} : <i8>
    %22:2 = fork [2] %21 {handshake.bb = 1 : ui32, handshake.name = "fork4"} : <i8>
    %result, %index = control_merge [%0#2, %trueResult_10]  {handshake.bb = 1 : ui32, handshake.name = "control_merge0"} : [<>, <>] to <>, <i1>
    %23:4 = fork [4] %index {handshake.bb = 1 : ui32, handshake.name = "fork5"} : <i1>
    %24:2 = fork [2] %result {handshake.bb = 1 : ui32, handshake.name = "fork6"} : <>
    %25 = source {handshake.bb = 1 : ui32, handshake.name = "source0"} : <>
    %26 = constant %25 {handshake.bb = 1 : ui32, handshake.name = "constant3", value = 1 : i2} : <>, <i2>
    %27 = extsi %26 {handshake.bb = 1 : ui32, handshake.name = "extsi14"} : <i2> to <i5>
    %28 = source {handshake.bb = 1 : ui32, handshake.name = "source1"} : <>
    %29 = constant %28 {handshake.bb = 1 : ui32, handshake.name = "constant6", value = 8 : i5} : <>, <i5>
    %30 = buffer %11 {handshake.bb = 1 : ui32, handshake.name = "buffer2", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i8>
    %addressResult, %dataResult = load[%30] %1#0 {handshake.bb = 1 : ui32, handshake.bufProps = #handshake<bufProps{"0": [0,inf], [0,inf], 1, 0.000000e+00, 0.000000e+00, 0.000000e+00, "1": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00}>, handshake.deps = #handshake<deps[<"store1" (0)>]>, handshake.mem_interface = #handshake.mem_interface<LSQ: 0>, handshake.name = "load0"} : <i8>, <i8>, <i8>, <i8>
    %31 = buffer %18#0 {handshake.bb = 1 : ui32, handshake.name = "buffer7", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 3 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i8>
    %32 = addi %dataResult, %31 {handshake.bb = 1 : ui32, handshake.name = "addi0"} : <i8>
    %33:2 = fork [2] %32 {handshake.bb = 1 : ui32, handshake.name = "fork7"} : <i8>
    %34 = buffer %33#0 {handshake.bb = 1 : ui32, handshake.name = "buffer15", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i8>
    %addressResult_0, %dataResult_1 = load[%34] %1#1 {handshake.bb = 1 : ui32, handshake.bufProps = #handshake<bufProps{"0": [0,inf], [0,inf], 1, 0.000000e+00, 0.000000e+00, 0.000000e+00, "1": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00}>, handshake.deps = #handshake<deps[<"store1" (0)>]>, handshake.mem_interface = #handshake.mem_interface<LSQ: 0>, handshake.name = "load3"} : <i8>, <i8>, <i8>, <i8>
    %35 = buffer %22#0 {handshake.bb = 1 : ui32, handshake.name = "buffer11", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 7 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i8>
    %36 = addi %dataResult_1, %35 {handshake.bb = 1 : ui32, handshake.name = "addi1"} : <i8>
    %37 = buffer %18#1 {handshake.bb = 1 : ui32, handshake.name = "buffer8", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 7 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i8>
    %38 = addi %36, %37 {handshake.bb = 1 : ui32, handshake.name = "addi2"} : <i8>
    %39 = buffer %14 {handshake.bb = 1 : ui32, handshake.name = "buffer3", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_DV", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 1, V: 1, R: 0}>}} : <i8>
    %40 = buffer %39 {handshake.bb = 1 : ui32, handshake.name = "buffer4", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_R", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 1}>}} : <i8>
    %41 = addi %40, %38 {handshake.bb = 1 : ui32, handshake.name = "addi3"} : <i8>
    %42:2 = fork [2] %41 {handshake.bb = 1 : ui32, handshake.name = "fork8"} : <i8>
    %43 = addi %10, %42#0 {handshake.bb = 1 : ui32, handshake.name = "addi4"} : <i8>
    %44 = buffer %33#1 {handshake.bb = 1 : ui32, handshake.name = "buffer16", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i8>
    %45 = buffer %43 {handshake.bb = 1 : ui32, handshake.name = "buffer17", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i8>
    %addressResult_2, %dataResult_3 = store[%44] %45 {handshake.bb = 1 : ui32, handshake.bufProps = #handshake<bufProps{"0": [0,inf], [0,inf], 1, 0.000000e+00, 0.000000e+00, 0.000000e+00, "1": [0,inf], [0,inf], 1, 0.000000e+00, 0.000000e+00, 0.000000e+00}>, handshake.deps = #handshake<deps[<"load3" (0)>, <"store1" (0)>, <"load0" (0)>]>, handshake.mem_interface = #handshake.mem_interface<LSQ: 0>, handshake.name = "store1"} : <i8>, <i8>, <i8>, <i8>
    %46 = addi %12, %27 {handshake.bb = 1 : ui32, handshake.name = "addi5"} : <i5>
    %47 = buffer %46 {handshake.bb = 1 : ui32, handshake.name = "buffer18", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_DV", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 1, V: 1, R: 0}>}} : <i5>
    %48:2 = fork [2] %47 {handshake.bb = 1 : ui32, handshake.name = "fork9"} : <i5>
    %49 = trunci %48#0 {handshake.bb = 1 : ui32, handshake.name = "trunci3"} : <i5> to <i4>
    %50 = cmpi ult, %48#1, %29 {handshake.bb = 1 : ui32, handshake.name = "cmpi0"} : <i5>
    %51:5 = fork [5] %50 {handshake.bb = 1 : ui32, handshake.name = "fork10"} : <i1>
    %trueResult, %falseResult = cond_br %51#0, %49 {handshake.bb = 1 : ui32, handshake.name = "cond_br1"} : <i1>, <i4>
    sink %falseResult {handshake.name = "sink0"} : <i4>
    %52 = buffer %51#1 {handshake.bb = 1 : ui32, handshake.name = "buffer19", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 7 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <i1>
    %trueResult_4, %falseResult_5 = cond_br %52, %42#1 {handshake.bb = 1 : ui32, handshake.name = "cond_br2"} : <i1>, <i8>
    %trueResult_6, %falseResult_7 = cond_br %51#4, %18#2 {handshake.bb = 1 : ui32, handshake.name = "cond_br3"} : <i1>, <i8>
    sink %falseResult_7 {handshake.name = "sink1"} : <i8>
    %trueResult_8, %falseResult_9 = cond_br %51#3, %22#1 {handshake.bb = 1 : ui32, handshake.name = "cond_br4"} : <i1>, <i8>
    sink %falseResult_9 {handshake.name = "sink2"} : <i8>
    %53 = buffer %24#1 {handshake.bb = 1 : ui32, handshake.name = "buffer13", hw.parameters = {BUFFER_TYPE = "ONE_SLOT_BREAK_DV", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 1, V: 1, R: 0}>}} : <>
    %54 = buffer %53 {handshake.bb = 1 : ui32, handshake.name = "buffer14", hw.parameters = {BUFFER_TYPE = "FIFO_BREAK_NONE", NUM_SLOTS = 1 : ui32, TIMING = #handshake<timing {D: 0, V: 0, R: 0}>}} : <>
    %trueResult_10, %falseResult_11 = cond_br %51#2, %54 {handshake.bb = 1 : ui32, handshake.bufProps = #handshake<bufProps{"1": [1,inf], [0,inf], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00}>, handshake.name = "cond_br5"} : <i1>, <>
    end {handshake.bb = 2 : ui32, handshake.name = "end0"} %falseResult_5, %1#2, %0#1 : <i8>, <>, <>
  }
}

