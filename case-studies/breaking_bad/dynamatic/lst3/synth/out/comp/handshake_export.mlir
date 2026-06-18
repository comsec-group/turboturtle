module {
  handshake.func @myfunc(%arg0: !handshake.channel<i64>, %arg1: !handshake.channel<i64>, %arg2: !handshake.control<>, ...) -> (!handshake.channel<i64>, !handshake.control<>) attributes {argNames = ["var_0", "var_1_secret", "start"], handshake.cfdfcThroughput = #handshake<cfdfcThroughput {}>, handshake.cfdfcToBBList = #handshake<cfdfcToBBList {}>, resNames = ["out0", "end"]} {
    %0:3 = fork [3] %arg0 {handshake.bb = 0 : ui32, handshake.bufProps = #handshake<bufProps{"0": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00}>, handshake.name = "fork0"} : <i64>
    %1 = trunci %arg1 {handshake.bb = 0 : ui32, handshake.bufProps = #handshake<bufProps{"0": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00}>, handshake.name = "trunci0"} : <i64> to <i2>
    %2 = source {handshake.bb = 0 : ui32, handshake.name = "source0"} : <>
    %3 = constant %2 {handshake.bb = 0 : ui32, handshake.name = "constant2", value = 1 : i2} : <>, <i2>
    %4:2 = fork [2] %3 {handshake.bb = 0 : ui32, handshake.name = "fork1"} : <i2>
    %5 = extsi %4#1 {handshake.bb = 0 : ui32, handshake.name = "extsi0"} : <i2> to <i64>
    %6 = source {handshake.bb = 0 : ui32, handshake.name = "source1"} : <>
    %7 = constant %6 {handshake.bb = 0 : ui32, handshake.name = "constant3", value = false} : <>, <i1>
    %8:2 = fork [2] %7 {handshake.bb = 0 : ui32, handshake.name = "fork2"} : <i1>
    %9 = extsi %8#0 {handshake.bb = 0 : ui32, handshake.name = "extsi2"} : <i1> to <i2>
    %10 = extsi %8#1 {handshake.bb = 0 : ui32, handshake.name = "extsi1"} : <i1> to <i64>
    %11 = muli %0#1, %0#2 {handshake.bb = 0 : ui32, handshake.name = "muli0", latency = 4 : i64} : <i64>
    %12 = andi %1, %4#0 {handshake.bb = 0 : ui32, handshake.name = "andi0"} : <i2>
    %13 = cmpi eq, %12, %9 {handshake.bb = 0 : ui32, handshake.name = "cmpi0"} : <i2>
    %14 = buffer %13, bufferType = ONE_SLOT_BREAK_DV, numSlots = 1 {handshake.bb = 0 : ui32, handshake.name = "buffer0"} : <i1>
    %15 = select %14[%10, %11] {handshake.bb = 0 : ui32, handshake.name = "select0"} : <i1>, <i64>
    %16 = shrui %0#0, %5 {handshake.bb = 0 : ui32, handshake.name = "shrui0"} : <i64>
    %17 = buffer %15, bufferType = ONE_SLOT_BREAK_R, numSlots = 1 {handshake.bb = 0 : ui32, handshake.name = "buffer1"} : <i64>
    %18 = xori %16, %17 {handshake.bb = 0 : ui32, handshake.name = "xori0"} : <i64>
    end {handshake.bb = 0 : ui32, handshake.bufProps = #handshake<bufProps{"1": [0,0], [0,0], 0, 0.000000e+00, 0.000000e+00, 0.000000e+00}>, handshake.name = "end0"} %18, %arg2 : <i64>, <>
  }
}

