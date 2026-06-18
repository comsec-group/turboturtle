module {
  handshake.func @mysecretfunction(%arg0: !handshake.channel<i8>, %arg1: !handshake.channel<i8>, %arg2: memref<256xi8>, %arg3: !handshake.control<>, %arg4: !handshake.control<>, ...) -> (!handshake.channel<i8>, !handshake.control<>, !handshake.control<>) attributes {argNames = ["fn_arg_0_secret", "fn_arg_1", "fn_arg_arrout_1", "fn_arg_arrout_1_start", "start"], resNames = ["out0", "fn_arg_arrout_1_end", "end"]} {
    %0:3 = fork [3] %arg4 {handshake.bb = 0 : ui32, handshake.name = "fork0"} : <>
    %1:3 = lsq[%arg2 : memref<256xi8>] (%arg3, %22#0, %addressResult, %addressResult_0, %addressResult_2, %dataResult_3, %result_12)  {groupSizes = [3 : i32], handshake.name = "lsq1"} : (!handshake.control<>, !handshake.control<>, !handshake.channel<i8>, !handshake.channel<i8>, !handshake.channel<i8>, !handshake.channel<i8>, !handshake.control<>) -> (!handshake.channel<i8>, !handshake.channel<i8>, !handshake.control<>)
    %2 = constant %0#0 {handshake.bb = 0 : ui32, handshake.name = "constant2", value = false} : <>, <i1>
    %3:2 = fork [2] %2 {handshake.bb = 0 : ui32, handshake.name = "fork1"} : <i1>
    %4 = br %3#0 {handshake.bb = 0 : ui32, handshake.name = "br1"} : <i1>
    %5 = extsi %4 {handshake.bb = 0 : ui32, handshake.name = "extsi10"} : <i1> to <i4>
    %6 = br %3#1 {handshake.bb = 0 : ui32, handshake.name = "br2"} : <i1>
    %7 = extsi %6 {handshake.bb = 0 : ui32, handshake.name = "extsi11"} : <i1> to <i8>
    %8 = br %arg0 {handshake.bb = 0 : ui32, handshake.name = "br3"} : <i8>
    %9 = br %arg1 {handshake.bb = 0 : ui32, handshake.name = "br4"} : <i8>
    %10 = br %0#2 {handshake.bb = 0 : ui32, handshake.name = "br5"} : <>
    %11 = mux %21#0 [%5, %trueResult] {handshake.bb = 1 : ui32, handshake.name = "mux0"} : <i1>, [<i4>, <i4>] to <i4>
    %12:3 = fork [3] %11 {handshake.bb = 1 : ui32, handshake.name = "fork2"} : <i4>
    %13 = extsi %12#0 {handshake.bb = 1 : ui32, handshake.name = "extsi12"} : <i4> to <i8>
    %14 = extsi %12#1 {handshake.bb = 1 : ui32, handshake.name = "extsi9"} : <i4> to <i8>
    %15 = extsi %12#2 {handshake.bb = 1 : ui32, handshake.name = "extsi13"} : <i4> to <i5>
    %16 = mux %21#3 [%7, %trueResult_4] {handshake.bb = 1 : ui32, handshake.name = "mux1"} : <i1>, [<i8>, <i8>] to <i8>
    %17 = mux %21#1 [%8, %trueResult_6] {handshake.bb = 1 : ui32, handshake.name = "mux2"} : <i1>, [<i8>, <i8>] to <i8>
    %18:3 = fork [3] %17 {handshake.bb = 1 : ui32, handshake.name = "fork3"} : <i8>
    %19 = mux %21#2 [%9, %trueResult_8] {handshake.bb = 1 : ui32, handshake.name = "mux3"} : <i1>, [<i8>, <i8>] to <i8>
    %20:2 = fork [2] %19 {handshake.bb = 1 : ui32, handshake.name = "fork4"} : <i8>
    %result, %index = control_merge [%10, %trueResult_10]  {handshake.bb = 1 : ui32, handshake.name = "control_merge0"} : [<>, <>] to <>, <i1>
    %21:4 = fork [4] %index {handshake.bb = 1 : ui32, handshake.name = "fork5"} : <i1>
    %22:2 = fork [2] %result {handshake.bb = 1 : ui32, handshake.name = "fork6"} : <>
    %23 = source {handshake.bb = 1 : ui32, handshake.name = "source0"} : <>
    %24 = constant %23 {handshake.bb = 1 : ui32, handshake.name = "constant3", value = 1 : i2} : <>, <i2>
    %25 = extsi %24 {handshake.bb = 1 : ui32, handshake.name = "extsi14"} : <i2> to <i5>
    %26 = source {handshake.bb = 1 : ui32, handshake.name = "source1"} : <>
    %27 = constant %26 {handshake.bb = 1 : ui32, handshake.name = "constant6", value = 8 : i5} : <>, <i5>
    %addressResult, %dataResult = load[%14] %1#0 {handshake.bb = 1 : ui32, handshake.deps = #handshake<deps[<"store1" (0)>]>, handshake.mem_interface = #handshake.mem_interface<LSQ: 0>, handshake.name = "load0"} : <i8>, <i8>, <i8>, <i8>
    %28 = addi %dataResult, %18#0 {handshake.bb = 1 : ui32, handshake.name = "addi0"} : <i8>
    %29:2 = fork [2] %28 {handshake.bb = 1 : ui32, handshake.name = "fork7"} : <i8>
    %addressResult_0, %dataResult_1 = load[%29#0] %1#1 {handshake.bb = 1 : ui32, handshake.deps = #handshake<deps[<"store1" (0)>]>, handshake.mem_interface = #handshake.mem_interface<LSQ: 0>, handshake.name = "load3"} : <i8>, <i8>, <i8>, <i8>
    %30 = addi %dataResult_1, %20#0 {handshake.bb = 1 : ui32, handshake.name = "addi1"} : <i8>
    %31 = addi %30, %18#1 {handshake.bb = 1 : ui32, handshake.name = "addi2"} : <i8>
    %32 = addi %16, %31 {handshake.bb = 1 : ui32, handshake.name = "addi3"} : <i8>
    %33:2 = fork [2] %32 {handshake.bb = 1 : ui32, handshake.name = "fork8"} : <i8>
    %34 = addi %13, %33#0 {handshake.bb = 1 : ui32, handshake.name = "addi4"} : <i8>
    %addressResult_2, %dataResult_3 = store[%29#1] %34 {handshake.bb = 1 : ui32, handshake.deps = #handshake<deps[<"load3" (0)>, <"store1" (0)>, <"load0" (0)>]>, handshake.mem_interface = #handshake.mem_interface<LSQ: 0>, handshake.name = "store1"} : <i8>, <i8>, <i8>, <i8>
    %35 = addi %15, %25 {handshake.bb = 1 : ui32, handshake.name = "addi5"} : <i5>
    %36:2 = fork [2] %35 {handshake.bb = 1 : ui32, handshake.name = "fork9"} : <i5>
    %37 = trunci %36#0 {handshake.bb = 1 : ui32, handshake.name = "trunci3"} : <i5> to <i4>
    %38 = cmpi ult, %36#1, %27 {handshake.bb = 1 : ui32, handshake.name = "cmpi0"} : <i5>
    %39:5 = fork [5] %38 {handshake.bb = 1 : ui32, handshake.name = "fork10"} : <i1>
    %trueResult, %falseResult = cond_br %39#0, %37 {handshake.bb = 1 : ui32, handshake.name = "cond_br1"} : <i1>, <i4>
    sink %falseResult {handshake.name = "sink0"} : <i4>
    %trueResult_4, %falseResult_5 = cond_br %39#1, %33#1 {handshake.bb = 1 : ui32, handshake.name = "cond_br2"} : <i1>, <i8>
    %trueResult_6, %falseResult_7 = cond_br %39#4, %18#2 {handshake.bb = 1 : ui32, handshake.name = "cond_br3"} : <i1>, <i8>
    sink %falseResult_7 {handshake.name = "sink1"} : <i8>
    %trueResult_8, %falseResult_9 = cond_br %39#3, %20#1 {handshake.bb = 1 : ui32, handshake.name = "cond_br4"} : <i1>, <i8>
    sink %falseResult_9 {handshake.name = "sink2"} : <i8>
    %trueResult_10, %falseResult_11 = cond_br %39#2, %22#1 {handshake.bb = 1 : ui32, handshake.name = "cond_br5"} : <i1>, <>
    %40 = merge %falseResult_5 {handshake.bb = 2 : ui32, handshake.name = "merge0"} : <i8>
    %result_12, %index_13 = control_merge [%falseResult_11]  {handshake.bb = 2 : ui32, handshake.name = "control_merge1"} : [<>] to <>, <i1>
    sink %index_13 {handshake.name = "sink3"} : <i1>
    end {handshake.bb = 2 : ui32, handshake.name = "end0"} %40, %1#2, %0#1 : <i8>, <>, <>
  }
}

