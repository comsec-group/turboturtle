module {
  func.func @mysecretfunction(%arg0: i8 {handshake.arg_name = "fn_arg_0_secret"}, %arg1: i8 {handshake.arg_name = "fn_arg_1"}, %arg2: memref<256xi8> {handshake.arg_name = "fn_arg_arrout_1"}) -> i8 {
    %c1 = arith.constant {handshake.name = "constant3"} 1 : index
    %c8 = arith.constant {handshake.name = "constant2"} 8 : index
    %c0 = arith.constant {handshake.name = "constant1"} 0 : index
    %c0_i8 = arith.constant {handshake.name = "constant0"} 0 : i8
    %0 = arith.extsi %arg0 {handshake.name = "extsi0"} : i8 to i32
    %1 = arith.extsi %arg1 {handshake.name = "extsi1"} : i8 to i32
    %2:2 = scf.while (%arg3 = %c0, %arg4 = %c0_i8) : (index, i8) -> (index, i8) {
      %3 = arith.index_cast %arg3 {handshake.name = "index_cast0"} : index to i32
      %4 = memref.load %arg2[%arg3] {handshake.deps = #handshake<deps[<"store0" (0)>]>, handshake.name = "load2"} : memref<256xi8>
      %5 = arith.extsi %4 {handshake.name = "extsi2"} : i8 to i32
      %6 = arith.addi %5, %0 {handshake.name = "addi0"} : i32
      %7 = arith.trunci %6 {handshake.name = "trunci0"} : i32 to i8
      %8 = arith.index_cast %7 {handshake.name = "index_cast1"} : i8 to index
      %9 = memref.load %arg2[%8] {handshake.deps = #handshake<deps[<"store0" (0)>]>, handshake.name = "load1"} : memref<256xi8>
      %10 = arith.extsi %9 {handshake.name = "extsi3"} : i8 to i32
      %11 = arith.addi %10, %1 {handshake.name = "addi1"} : i32
      %12 = arith.addi %11, %0 {handshake.name = "addi2"} : i32
      %13 = arith.trunci %12 {handshake.name = "trunci1"} : i32 to i8
      %14 = arith.addi %arg4, %13 {handshake.name = "addi3"} : i8
      %15 = arith.extsi %14 {handshake.name = "extsi4"} : i8 to i32
      %16 = arith.addi %3, %15 {handshake.name = "addi4"} : i32
      %17 = arith.trunci %16 {handshake.name = "trunci2"} : i32 to i8
      memref.store %17, %arg2[%8] {handshake.deps = #handshake<deps[<"load1" (0)>, <"store0" (0)>, <"load2" (0)>]>, handshake.name = "store0"} : memref<256xi8>
      %18 = arith.addi %arg3, %c1 {handshake.name = "addi5"} : index
      %19 = arith.cmpi ult, %18, %c8 {handshake.name = "cmpi0"} : index
      scf.condition(%19) {handshake.name = "condition0"} %18, %14 : index, i8
    } do {
    ^bb0(%arg3: index, %arg4: i8):
      scf.yield {handshake.name = "yield2"} %arg3, %arg4 : index, i8
    } attributes {handshake.name = "while0"}
    return {handshake.name = "return0"} %2#1 : i8
  }
}

