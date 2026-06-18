module {
  func.func @mysecretfunction(%arg0: i8 {handshake.arg_name = "fn_arg_0_secret"}, %arg1: i8 {handshake.arg_name = "fn_arg_1"}, %arg2: memref<256xi8> {handshake.arg_name = "fn_arg_arrout_1"}) -> i8 {
    %c0_i8 = arith.constant 0 : i8
    %c0 = arith.constant 0 : index
    %c8 = arith.constant 8 : index
    %c1 = arith.constant 1 : index
    %0 = arith.extsi %arg0 {handshake.name = "extsi0"} : i8 to i32
    %1 = arith.extsi %arg1 {handshake.name = "extsi1"} : i8 to i32
    cf.br ^bb1(%c0, %c0_i8 : index, i8) {handshake.name = "br0"}
  ^bb1(%2: index, %3: i8):  // 2 preds: ^bb0, ^bb1
    %4 = arith.index_cast %2 {handshake.name = "index_cast0"} : index to i32
    %5 = memref.load %arg2[%2] {handshake.deps = #handshake<deps[<"store0" (0)>]>, handshake.name = "load2"} : memref<256xi8>
    %6 = arith.extsi %5 {handshake.name = "extsi2"} : i8 to i32
    %7 = arith.addi %6, %0 {handshake.name = "addi0"} : i32
    %8 = arith.trunci %7 {handshake.name = "trunci0"} : i32 to i8
    %9 = arith.index_cast %8 {handshake.name = "index_cast1"} : i8 to index
    %10 = memref.load %arg2[%9] {handshake.deps = #handshake<deps[<"store0" (0)>]>, handshake.name = "load1"} : memref<256xi8>
    %11 = arith.extsi %10 {handshake.name = "extsi3"} : i8 to i32
    %12 = arith.addi %11, %1 {handshake.name = "addi1"} : i32
    %13 = arith.addi %12, %0 {handshake.name = "addi2"} : i32
    %14 = arith.trunci %13 {handshake.name = "trunci1"} : i32 to i8
    %15 = arith.addi %3, %14 {handshake.name = "addi3"} : i8
    %16 = arith.extsi %15 {handshake.name = "extsi4"} : i8 to i32
    %17 = arith.addi %4, %16 {handshake.name = "addi4"} : i32
    %18 = arith.trunci %17 {handshake.name = "trunci2"} : i32 to i8
    memref.store %18, %arg2[%9] {handshake.deps = #handshake<deps[<"load1" (0)>, <"store0" (0)>, <"load2" (0)>]>, handshake.name = "store0"} : memref<256xi8>
    %19 = arith.addi %2, %c1 {handshake.name = "addi5"} : index
    %20 = arith.cmpi ult, %19, %c8 {handshake.name = "cmpi0"} : index
    cf.cond_br %20, ^bb1(%19, %15 : index, i8), ^bb2 {handshake.name = "cond_br0"}
  ^bb2:  // pred: ^bb1
    return {handshake.name = "return0"} %15 : i8
  }
}

