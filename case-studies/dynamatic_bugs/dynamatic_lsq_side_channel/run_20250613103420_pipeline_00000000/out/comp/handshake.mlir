module {
  handshake.func @mysecretfunction(%arg0: !handshake.channel<i8>, %arg1: !handshake.channel<i8>, %arg2: memref<256xi8>, %arg3: !handshake.control<>, %arg4: !handshake.control<>, ...) -> (!handshake.channel<i8>, !handshake.control<>, !handshake.control<>) attributes {argNames = ["fn_arg_0_secret", "fn_arg_1", "fn_arg_arrout_1", "fn_arg_arrout_1_start", "start"], resNames = ["out0", "fn_arg_arrout_1_end", "end"]} {
    %0:3 = lsq[%arg2 : memref<256xi8>] (%arg3, %result, %addressResult, %addressResult_0, %addressResult_2, %dataResult_3, %result_12)  {groupSizes = [3 : i32], handshake.name = "lsq0"} : (!handshake.control<>, !handshake.control<>, !handshake.channel<i32>, !handshake.channel<i32>, !handshake.channel<i32>, !handshake.channel<i8>, !handshake.control<>) -> (!handshake.channel<i8>, !handshake.channel<i8>, !handshake.control<>)
    %1 = constant %arg4 {handshake.bb = 0 : ui32, handshake.name = "constant0", value = 0 : i8} : <>, <i8>
    %2 = constant %arg4 {handshake.bb = 0 : ui32, handshake.name = "constant1", value = 0 : i32} : <>, <i32>
    %3 = extsi %arg0 {handshake.bb = 0 : ui32, handshake.name = "extsi0"} : <i8> to <i32>
    %4 = extsi %arg1 {handshake.bb = 0 : ui32, handshake.name = "extsi1"} : <i8> to <i32>
    %5 = br %2 {handshake.bb = 0 : ui32, handshake.name = "br1"} : <i32>
    %6 = br %1 {handshake.bb = 0 : ui32, handshake.name = "br2"} : <i8>
    %7 = br %3 {handshake.bb = 0 : ui32, handshake.name = "br3"} : <i32>
    %8 = br %4 {handshake.bb = 0 : ui32, handshake.name = "br4"} : <i32>
    %9 = br %arg4 {handshake.bb = 0 : ui32, handshake.name = "br5"} : <>
    %10 = mux %index [%5, %trueResult] {handshake.bb = 1 : ui32, handshake.name = "mux0"} : <i1>, [<i32>, <i32>] to <i32>
    %11 = mux %index [%6, %trueResult_4] {handshake.bb = 1 : ui32, handshake.name = "mux1"} : <i1>, [<i8>, <i8>] to <i8>
    %12 = mux %index [%7, %trueResult_6] {handshake.bb = 1 : ui32, handshake.name = "mux2"} : <i1>, [<i32>, <i32>] to <i32>
    %13 = mux %index [%8, %trueResult_8] {handshake.bb = 1 : ui32, handshake.name = "mux3"} : <i1>, [<i32>, <i32>] to <i32>
    %result, %index = control_merge [%9, %trueResult_10]  {handshake.bb = 1 : ui32, handshake.name = "control_merge0"} : [<>, <>] to <>, <i1>
    %14 = source {handshake.bb = 1 : ui32, handshake.name = "source0"} : <>
    %15 = constant %14 {handshake.bb = 1 : ui32, handshake.name = "constant4", value = 1 : i32} : <>, <i32>
    %16 = source {handshake.bb = 1 : ui32, handshake.name = "source1"} : <>
    %17 = constant %16 {handshake.bb = 1 : ui32, handshake.name = "constant5", value = 8 : i32} : <>, <i32>
    %18 = trunci %10 {handshake.bb = 1 : ui32, handshake.name = "index_cast0"} : <i32> to <i32>
    %addressResult, %dataResult = load[%10] %0#0 {handshake.bb = 1 : ui32, handshake.deps = #handshake<deps[<"store1" (0)>]>, handshake.name = "load0"} : <i32>, <i8>, <i32>, <i8>
    %19 = extsi %dataResult {handshake.bb = 1 : ui32, handshake.name = "extsi2"} : <i8> to <i32>
    %20 = addi %19, %12 {handshake.bb = 1 : ui32, handshake.name = "addi0"} : <i32>
    %21 = trunci %20 {handshake.bb = 1 : ui32, handshake.name = "trunci0"} : <i32> to <i8>
    %22 = extsi %21 {handshake.bb = 1 : ui32, handshake.name = "index_cast1"} : <i8> to <i32>
    %addressResult_0, %dataResult_1 = load[%22] %0#1 {handshake.bb = 1 : ui32, handshake.deps = #handshake<deps[<"store1" (0)>]>, handshake.name = "load3"} : <i32>, <i8>, <i32>, <i8>
    %23 = extsi %dataResult_1 {handshake.bb = 1 : ui32, handshake.name = "extsi3"} : <i8> to <i32>
    %24 = addi %23, %13 {handshake.bb = 1 : ui32, handshake.name = "addi1"} : <i32>
    %25 = addi %24, %12 {handshake.bb = 1 : ui32, handshake.name = "addi2"} : <i32>
    %26 = trunci %25 {handshake.bb = 1 : ui32, handshake.name = "trunci1"} : <i32> to <i8>
    %27 = addi %11, %26 {handshake.bb = 1 : ui32, handshake.name = "addi3"} : <i8>
    %28 = extsi %27 {handshake.bb = 1 : ui32, handshake.name = "extsi4"} : <i8> to <i32>
    %29 = addi %18, %28 {handshake.bb = 1 : ui32, handshake.name = "addi4"} : <i32>
    %30 = trunci %29 {handshake.bb = 1 : ui32, handshake.name = "trunci2"} : <i32> to <i8>
    %addressResult_2, %dataResult_3 = store[%22] %30 {handshake.bb = 1 : ui32, handshake.deps = #handshake<deps[<"load3" (0)>, <"store1" (0)>, <"load0" (0)>]>, handshake.name = "store1"} : <i32>, <i8>, <i32>, <i8>
    %31 = addi %10, %15 {handshake.bb = 1 : ui32, handshake.name = "addi5"} : <i32>
    %32 = cmpi ult, %31, %17 {handshake.bb = 1 : ui32, handshake.name = "cmpi0"} : <i32>
    %trueResult, %falseResult = cond_br %32, %31 {handshake.bb = 1 : ui32, handshake.name = "cond_br1"} : <i1>, <i32>
    %trueResult_4, %falseResult_5 = cond_br %32, %27 {handshake.bb = 1 : ui32, handshake.name = "cond_br2"} : <i1>, <i8>
    %trueResult_6, %falseResult_7 = cond_br %32, %12 {handshake.bb = 1 : ui32, handshake.name = "cond_br3"} : <i1>, <i32>
    %trueResult_8, %falseResult_9 = cond_br %32, %13 {handshake.bb = 1 : ui32, handshake.name = "cond_br4"} : <i1>, <i32>
    %trueResult_10, %falseResult_11 = cond_br %32, %result {handshake.bb = 1 : ui32, handshake.name = "cond_br5"} : <i1>, <>
    %33 = merge %falseResult_5 {handshake.bb = 2 : ui32, handshake.name = "merge0"} : <i8>
    %result_12, %index_13 = control_merge [%falseResult_11]  {handshake.bb = 2 : ui32, handshake.name = "control_merge1"} : [<>] to <>, <i1>
    end {handshake.bb = 2 : ui32, handshake.name = "end0"} %33, %0#2, %arg4 : <i8>, <>, <>
  }
}

