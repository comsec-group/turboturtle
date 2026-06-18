module attributes {dlti.dl_spec = #dlti.dl_spec<#dlti.dl_entry<i32, dense<32> : vector<2xi32>>, #dlti.dl_entry<i16, dense<16> : vector<2xi32>>, #dlti.dl_entry<i8, dense<8> : vector<2xi32>>, #dlti.dl_entry<!llvm.ptr<271>, dense<32> : vector<4xi32>>, #dlti.dl_entry<!llvm.ptr<270>, dense<32> : vector<4xi32>>, #dlti.dl_entry<f128, dense<128> : vector<2xi32>>, #dlti.dl_entry<f64, dense<64> : vector<2xi32>>, #dlti.dl_entry<f16, dense<16> : vector<2xi32>>, #dlti.dl_entry<f80, dense<128> : vector<2xi32>>, #dlti.dl_entry<i64, dense<64> : vector<2xi32>>, #dlti.dl_entry<!llvm.ptr<272>, dense<64> : vector<4xi32>>, #dlti.dl_entry<i1, dense<8> : vector<2xi32>>, #dlti.dl_entry<!llvm.ptr, dense<64> : vector<4xi32>>, #dlti.dl_entry<"dlti.endianness", "little">, #dlti.dl_entry<"dlti.stack_alignment", 128 : i32>>, llvm.data_layout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128", llvm.target_triple = "x86_64-unknown-linux-gnu", "polygeist.target-cpu" = "x86-64", "polygeist.target-features" = "+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87", "polygeist.tune-cpu" = "generic"} {
  func.func @mysecretfunction(%arg0: i8, %arg1: i8, %arg2: memref<256xi8>) -> i8 attributes {llvm.linkage = #llvm.linkage<external>} {
    %c0_i8 = arith.constant 0 : i8
    %0 = arith.extsi %arg0 : i8 to i32
    %1 = arith.extsi %arg1 : i8 to i32
    %2 = affine.for %arg3 = 0 to 8 iter_args(%arg4 = %c0_i8) -> (i8) {
      %3 = arith.index_cast %arg3 : index to i32
      %4 = affine.load %arg2[%arg3] : memref<256xi8>
      %5 = arith.extsi %4 : i8 to i32
      %6 = arith.addi %5, %0 : i32
      %7 = arith.trunci %6 : i32 to i8
      %8 = arith.index_cast %7 : i8 to index
      %9 = memref.load %arg2[%8] : memref<256xi8>
      %10 = arith.extsi %9 : i8 to i32
      %11 = arith.addi %10, %1 : i32
      %12 = arith.addi %11, %0 : i32
      %13 = arith.trunci %12 : i32 to i8
      %14 = arith.addi %arg4, %13 : i8
      %15 = arith.extsi %14 : i8 to i32
      %16 = arith.addi %3, %15 : i32
      %17 = arith.trunci %16 : i32 to i8
      memref.store %17, %arg2[%8] : memref<256xi8>
      affine.yield %14 : i8
    }
    return %2 : i8
  }
}
