module {
  func.func @myfunc(%arg0: i64 {handshake.arg_name = "var_0"}, %arg1: i64 {handshake.arg_name = "var_1_secret"}) -> i64 {
    %c1_i64 = arith.constant {handshake.name = "constant0"} 1 : i64
    %c0_i64 = arith.constant {handshake.name = "constant1"} 0 : i64
    %0 = arith.muli %arg0, %arg0 {handshake.name = "muli0"} : i64
    %1 = arith.andi %arg1, %c1_i64 {handshake.name = "andi0"} : i64
    %2 = arith.cmpi eq, %1, %c0_i64 {handshake.name = "cmpi0"} : i64
    %3 = arith.select %2, %c0_i64, %0 {handshake.name = "select0"} : i64
    %4 = arith.shrui %arg0, %c1_i64 {handshake.name = "shrui0"} : i64
    %5 = arith.xori %4, %3 {handshake.name = "xori0"} : i64
    return {handshake.name = "return0"} %5 : i64
  }
}

