module {
  handshake.func @myfunc(%arg0: !handshake.channel<i64>, %arg1: !handshake.channel<i64>, %arg2: !handshake.control<>, ...) -> (!handshake.channel<i64>, !handshake.control<>) attributes {argNames = ["var_0", "var_1_secret", "start"], resNames = ["out0", "end"]} {
    %0 = source {handshake.bb = 0 : ui32, handshake.name = "source0"} : <>
    %1 = constant %0 {handshake.bb = 0 : ui32, handshake.name = "constant0", value = 1 : i64} : <>, <i64>
    %2 = source {handshake.bb = 0 : ui32, handshake.name = "source1"} : <>
    %3 = constant %2 {handshake.bb = 0 : ui32, handshake.name = "constant1", value = 0 : i64} : <>, <i64>
    %4 = muli %arg0, %arg0 {handshake.bb = 0 : ui32, handshake.name = "muli0"} : <i64>
    %5 = andi %arg1, %1 {handshake.bb = 0 : ui32, handshake.name = "andi0"} : <i64>
    %6 = cmpi eq, %5, %3 {handshake.bb = 0 : ui32, handshake.name = "cmpi0"} : <i64>
    %7 = select %6[%3, %4] {handshake.bb = 0 : ui32, handshake.name = "select0"} : <i1>, <i64>
    %8 = shrui %arg0, %1 {handshake.bb = 0 : ui32, handshake.name = "shrui0"} : <i64>
    %9 = xori %8, %7 {handshake.bb = 0 : ui32, handshake.name = "xori0"} : <i64>
    end {handshake.bb = 0 : ui32, handshake.name = "end0"} %9, %arg2 : <i64>, <>
  }
}

