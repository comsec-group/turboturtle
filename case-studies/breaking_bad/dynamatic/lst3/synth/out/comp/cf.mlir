module {
  func.func @myfunc(%arg0: i64, %arg1: i64) -> i64 {
    %c1_i64 = arith.constant 1 : i64
    %c0_i64 = arith.constant 0 : i64
    %0 = arith.muli %arg0, %arg0 : i64
    %1 = arith.andi %arg1, %c1_i64 : i64
    %2 = arith.cmpi eq, %1, %c0_i64 : i64
    %3 = arith.select %2, %c0_i64, %0 : i64
    %4 = arith.shrui %arg0, %c1_i64 : i64
    %5 = arith.xori %4, %3 : i64
    return %5 : i64
  }
}
