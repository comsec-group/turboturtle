module mysecretfunction(
  input [7:0] fn_arg_0_secret,
  input  fn_arg_0_secret_valid,
  input [7:0] fn_arg_1,
  input  fn_arg_1_valid,
  input [7:0] fn_arg_arrout_1_loadData,
  input  fn_arg_arrout_1_start_valid,
  input  start_valid,
  input  clk,
  input  rst,
  input  out0_ready,
  input  fn_arg_arrout_1_end_ready,
  input  end_ready,
  output  fn_arg_0_secret_ready,
  output  fn_arg_1_ready,
  output  fn_arg_arrout_1_start_ready,
  output  start_ready,
  output [7:0] out0,
  output  out0_valid,
  output  fn_arg_arrout_1_end_valid,
  output  end_valid,
  output  fn_arg_arrout_1_loadEn,
  output [7:0] fn_arg_arrout_1_loadAddr,
  output  fn_arg_arrout_1_storeEn,
  output [7:0] fn_arg_arrout_1_storeAddr,
  output [7:0] fn_arg_arrout_1_storeData
);
  wire  fork0_outs_0_valid;
  wire  fork0_outs_0_ready;
  wire  fork0_outs_1_valid;
  wire  fork0_outs_1_ready;
  wire  fork0_outs_2_valid;
  wire  fork0_outs_2_ready;
  wire [7:0] lsq1_ldData_0;
  wire  lsq1_ldData_0_valid;
  wire  lsq1_ldData_0_ready;
  wire [7:0] lsq1_ldData_1;
  wire  lsq1_ldData_1_valid;
  wire  lsq1_ldData_1_ready;
  wire  lsq1_memEnd_valid;
  wire  lsq1_memEnd_ready;
  wire  lsq1_loadEn;
  wire [7:0] lsq1_loadAddr;
  wire  lsq1_storeEn;
  wire [7:0] lsq1_storeAddr;
  wire [7:0] lsq1_storeData;
  wire [0:0] constant2_outs;
  wire  constant2_outs_valid;
  wire  constant2_outs_ready;
  wire [0:0] fork1_outs_0;
  wire  fork1_outs_0_valid;
  wire  fork1_outs_0_ready;
  wire [0:0] fork1_outs_1;
  wire  fork1_outs_1_valid;
  wire  fork1_outs_1_ready;
  wire [3:0] extsi10_outs;
  wire  extsi10_outs_valid;
  wire  extsi10_outs_ready;
  wire [7:0] extsi11_outs;
  wire  extsi11_outs_valid;
  wire  extsi11_outs_ready;
  wire [3:0] mux0_outs;
  wire  mux0_outs_valid;
  wire  mux0_outs_ready;
  wire [3:0] buffer0_outs;
  wire  buffer0_outs_valid;
  wire  buffer0_outs_ready;
  wire [3:0] fork2_outs_0;
  wire  fork2_outs_0_valid;
  wire  fork2_outs_0_ready;
  wire [3:0] fork2_outs_1;
  wire  fork2_outs_1_valid;
  wire  fork2_outs_1_ready;
  wire [3:0] fork2_outs_2;
  wire  fork2_outs_2_valid;
  wire  fork2_outs_2_ready;
  wire [3:0] buffer1_outs;
  wire  buffer1_outs_valid;
  wire  buffer1_outs_ready;
  wire [7:0] extsi12_outs;
  wire  extsi12_outs_valid;
  wire  extsi12_outs_ready;
  wire [7:0] extsi9_outs;
  wire  extsi9_outs_valid;
  wire  extsi9_outs_ready;
  wire [4:0] extsi13_outs;
  wire  extsi13_outs_valid;
  wire  extsi13_outs_ready;
  wire [0:0] buffer12_outs;
  wire  buffer12_outs_valid;
  wire  buffer12_outs_ready;
  wire [7:0] mux1_outs;
  wire  mux1_outs_valid;
  wire  mux1_outs_ready;
  wire [7:0] mux2_outs;
  wire  mux2_outs_valid;
  wire  mux2_outs_ready;
  wire [7:0] buffer5_outs;
  wire  buffer5_outs_valid;
  wire  buffer5_outs_ready;
  wire [7:0] buffer6_outs;
  wire  buffer6_outs_valid;
  wire  buffer6_outs_ready;
  wire [7:0] fork3_outs_0;
  wire  fork3_outs_0_valid;
  wire  fork3_outs_0_ready;
  wire [7:0] fork3_outs_1;
  wire  fork3_outs_1_valid;
  wire  fork3_outs_1_ready;
  wire [7:0] fork3_outs_2;
  wire  fork3_outs_2_valid;
  wire  fork3_outs_2_ready;
  wire [7:0] mux3_outs;
  wire  mux3_outs_valid;
  wire  mux3_outs_ready;
  wire [7:0] buffer9_outs;
  wire  buffer9_outs_valid;
  wire  buffer9_outs_ready;
  wire [7:0] buffer10_outs;
  wire  buffer10_outs_valid;
  wire  buffer10_outs_ready;
  wire [7:0] fork4_outs_0;
  wire  fork4_outs_0_valid;
  wire  fork4_outs_0_ready;
  wire [7:0] fork4_outs_1;
  wire  fork4_outs_1_valid;
  wire  fork4_outs_1_ready;
  wire  control_merge0_outs_valid;
  wire  control_merge0_outs_ready;
  wire [0:0] control_merge0_index;
  wire  control_merge0_index_valid;
  wire  control_merge0_index_ready;
  wire [0:0] fork5_outs_0;
  wire  fork5_outs_0_valid;
  wire  fork5_outs_0_ready;
  wire [0:0] fork5_outs_1;
  wire  fork5_outs_1_valid;
  wire  fork5_outs_1_ready;
  wire [0:0] fork5_outs_2;
  wire  fork5_outs_2_valid;
  wire  fork5_outs_2_ready;
  wire [0:0] fork5_outs_3;
  wire  fork5_outs_3_valid;
  wire  fork5_outs_3_ready;
  wire  fork6_outs_0_valid;
  wire  fork6_outs_0_ready;
  wire  fork6_outs_1_valid;
  wire  fork6_outs_1_ready;
  wire  source0_outs_valid;
  wire  source0_outs_ready;
  wire [1:0] constant3_outs;
  wire  constant3_outs_valid;
  wire  constant3_outs_ready;
  wire [4:0] extsi14_outs;
  wire  extsi14_outs_valid;
  wire  extsi14_outs_ready;
  wire  source1_outs_valid;
  wire  source1_outs_ready;
  wire [4:0] constant6_outs;
  wire  constant6_outs_valid;
  wire  constant6_outs_ready;
  wire [7:0] buffer2_outs;
  wire  buffer2_outs_valid;
  wire  buffer2_outs_ready;
  wire [7:0] load0_addrOut;
  wire  load0_addrOut_valid;
  wire  load0_addrOut_ready;
  wire [7:0] load0_dataOut;
  wire  load0_dataOut_valid;
  wire  load0_dataOut_ready;
  wire [7:0] buffer7_outs;
  wire  buffer7_outs_valid;
  wire  buffer7_outs_ready;
  wire [7:0] addi0_result;
  wire  addi0_result_valid;
  wire  addi0_result_ready;
  wire [7:0] fork7_outs_0;
  wire  fork7_outs_0_valid;
  wire  fork7_outs_0_ready;
  wire [7:0] fork7_outs_1;
  wire  fork7_outs_1_valid;
  wire  fork7_outs_1_ready;
  wire [7:0] buffer15_outs;
  wire  buffer15_outs_valid;
  wire  buffer15_outs_ready;
  wire [7:0] load3_addrOut;
  wire  load3_addrOut_valid;
  wire  load3_addrOut_ready;
  wire [7:0] load3_dataOut;
  wire  load3_dataOut_valid;
  wire  load3_dataOut_ready;
  wire [7:0] buffer11_outs;
  wire  buffer11_outs_valid;
  wire  buffer11_outs_ready;
  wire [7:0] addi1_result;
  wire  addi1_result_valid;
  wire  addi1_result_ready;
  wire [7:0] buffer8_outs;
  wire  buffer8_outs_valid;
  wire  buffer8_outs_ready;
  wire [7:0] addi2_result;
  wire  addi2_result_valid;
  wire  addi2_result_ready;
  wire [7:0] buffer3_outs;
  wire  buffer3_outs_valid;
  wire  buffer3_outs_ready;
  wire [7:0] buffer4_outs;
  wire  buffer4_outs_valid;
  wire  buffer4_outs_ready;
  wire [7:0] addi3_result;
  wire  addi3_result_valid;
  wire  addi3_result_ready;
  wire [7:0] fork8_outs_0;
  wire  fork8_outs_0_valid;
  wire  fork8_outs_0_ready;
  wire [7:0] fork8_outs_1;
  wire  fork8_outs_1_valid;
  wire  fork8_outs_1_ready;
  wire [7:0] addi4_result;
  wire  addi4_result_valid;
  wire  addi4_result_ready;
  wire [7:0] buffer16_outs;
  wire  buffer16_outs_valid;
  wire  buffer16_outs_ready;
  wire [7:0] buffer17_outs;
  wire  buffer17_outs_valid;
  wire  buffer17_outs_ready;
  wire [7:0] store1_addrOut;
  wire  store1_addrOut_valid;
  wire  store1_addrOut_ready;
  wire [7:0] store1_dataToMem;
  wire  store1_dataToMem_valid;
  wire  store1_dataToMem_ready;
  wire [4:0] addi5_result;
  wire  addi5_result_valid;
  wire  addi5_result_ready;
  wire [4:0] buffer18_outs;
  wire  buffer18_outs_valid;
  wire  buffer18_outs_ready;
  wire [4:0] fork9_outs_0;
  wire  fork9_outs_0_valid;
  wire  fork9_outs_0_ready;
  wire [4:0] fork9_outs_1;
  wire  fork9_outs_1_valid;
  wire  fork9_outs_1_ready;
  wire [3:0] trunci3_outs;
  wire  trunci3_outs_valid;
  wire  trunci3_outs_ready;
  wire [0:0] cmpi0_result;
  wire  cmpi0_result_valid;
  wire  cmpi0_result_ready;
  wire [0:0] fork10_outs_0;
  wire  fork10_outs_0_valid;
  wire  fork10_outs_0_ready;
  wire [0:0] fork10_outs_1;
  wire  fork10_outs_1_valid;
  wire  fork10_outs_1_ready;
  wire [0:0] fork10_outs_2;
  wire  fork10_outs_2_valid;
  wire  fork10_outs_2_ready;
  wire [0:0] fork10_outs_3;
  wire  fork10_outs_3_valid;
  wire  fork10_outs_3_ready;
  wire [0:0] fork10_outs_4;
  wire  fork10_outs_4_valid;
  wire  fork10_outs_4_ready;
  wire [3:0] cond_br1_trueOut;
  wire  cond_br1_trueOut_valid;
  wire  cond_br1_trueOut_ready;
  wire [3:0] cond_br1_falseOut;
  wire  cond_br1_falseOut_valid;
  wire  cond_br1_falseOut_ready;
  wire [0:0] buffer19_outs;
  wire  buffer19_outs_valid;
  wire  buffer19_outs_ready;
  wire [7:0] cond_br2_trueOut;
  wire  cond_br2_trueOut_valid;
  wire  cond_br2_trueOut_ready;
  wire [7:0] cond_br2_falseOut;
  wire  cond_br2_falseOut_valid;
  wire  cond_br2_falseOut_ready;
  wire [7:0] cond_br3_trueOut;
  wire  cond_br3_trueOut_valid;
  wire  cond_br3_trueOut_ready;
  wire [7:0] cond_br3_falseOut;
  wire  cond_br3_falseOut_valid;
  wire  cond_br3_falseOut_ready;
  wire [7:0] cond_br4_trueOut;
  wire  cond_br4_trueOut_valid;
  wire  cond_br4_trueOut_ready;
  wire [7:0] cond_br4_falseOut;
  wire  cond_br4_falseOut_valid;
  wire  cond_br4_falseOut_ready;
  wire  buffer13_outs_valid;
  wire  buffer13_outs_ready;
  wire  buffer14_outs_valid;
  wire  buffer14_outs_ready;
  wire  cond_br5_trueOut_valid;
  wire  cond_br5_trueOut_ready;
  wire  cond_br5_falseOut_valid;
  wire  cond_br5_falseOut_ready;

  assign out0 = cond_br2_falseOut;
  assign out0_valid = cond_br2_falseOut_valid;
  assign cond_br2_falseOut_ready = out0_ready;
  assign fn_arg_arrout_1_end_valid = lsq1_memEnd_valid;
  assign lsq1_memEnd_ready = fn_arg_arrout_1_end_ready;
  assign end_valid = fork0_outs_1_valid;
  assign fork0_outs_1_ready = end_ready;
  assign fn_arg_arrout_1_loadEn = lsq1_loadEn;
  assign fn_arg_arrout_1_loadAddr = lsq1_loadAddr;
  assign fn_arg_arrout_1_storeEn = lsq1_storeEn;
  assign fn_arg_arrout_1_storeAddr = lsq1_storeAddr;
  assign fn_arg_arrout_1_storeData = lsq1_storeData;

  fork_dataless #(.SIZE(3)) fork0(
    .ins_valid (start_valid),
    .ins_ready (start_ready),
    .clk (clk),
    .rst (rst),
    .outs_valid ({fork0_outs_2_valid, fork0_outs_1_valid, fork0_outs_0_valid}),
    .outs_ready ({fork0_outs_2_ready, fork0_outs_1_ready, fork0_outs_0_ready})
  );

  handshake_lsq_lsq1 lsq1(
    .io_loadData (fn_arg_arrout_1_loadData),
    .io_memStart_valid (fn_arg_arrout_1_start_valid),
    .io_memStart_ready (fn_arg_arrout_1_start_ready),
    .io_ctrl_0_valid (fork6_outs_0_valid),
    .io_ctrl_0_ready (fork6_outs_0_ready),
    .io_ldAddr_0_bits (load0_addrOut),
    .io_ldAddr_0_valid (load0_addrOut_valid),
    .io_ldAddr_0_ready (load0_addrOut_ready),
    .io_ldAddr_1_bits (load3_addrOut),
    .io_ldAddr_1_valid (load3_addrOut_valid),
    .io_ldAddr_1_ready (load3_addrOut_ready),
    .io_stAddr_0_bits (store1_addrOut),
    .io_stAddr_0_valid (store1_addrOut_valid),
    .io_stAddr_0_ready (store1_addrOut_ready),
    .io_stData_0_bits (store1_dataToMem),
    .io_stData_0_valid (store1_dataToMem_valid),
    .io_stData_0_ready (store1_dataToMem_ready),
    .io_ctrlEnd_valid (cond_br5_falseOut_valid),
    .io_ctrlEnd_ready (cond_br5_falseOut_ready),
    .clock (clk),
    .reset (rst),
    .io_ldData_0_bits (lsq1_ldData_0),
    .io_ldData_0_valid (lsq1_ldData_0_valid),
    .io_ldData_0_ready (lsq1_ldData_0_ready),
    .io_ldData_1_bits (lsq1_ldData_1),
    .io_ldData_1_valid (lsq1_ldData_1_valid),
    .io_ldData_1_ready (lsq1_ldData_1_ready),
    .io_memEnd_valid (lsq1_memEnd_valid),
    .io_memEnd_ready (lsq1_memEnd_ready),
    .io_loadEn (lsq1_loadEn),
    .io_loadAddr (lsq1_loadAddr),
    .io_storeEn (lsq1_storeEn),
    .io_storeAddr (lsq1_storeAddr),
    .io_storeData (lsq1_storeData)
  );

  handshake_constant_0 #(.DATA_WIDTH(1)) constant2(
    .ctrl_valid (fork0_outs_0_valid),
    .ctrl_ready (fork0_outs_0_ready),
    .clk (clk),
    .rst (rst),
    .outs (constant2_outs),
    .outs_valid (constant2_outs_valid),
    .outs_ready (constant2_outs_ready)
  );

  fork_type #(.SIZE(2), .DATA_TYPE(1)) fork1(
    .ins (constant2_outs),
    .ins_valid (constant2_outs_valid),
    .ins_ready (constant2_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs ({fork1_outs_1, fork1_outs_0}),
    .outs_valid ({fork1_outs_1_valid, fork1_outs_0_valid}),
    .outs_ready ({fork1_outs_1_ready, fork1_outs_0_ready})
  );

  extsi #(.INPUT_TYPE(1), .OUTPUT_TYPE(4)) extsi10(
    .ins (fork1_outs_0),
    .ins_valid (fork1_outs_0_valid),
    .ins_ready (fork1_outs_0_ready),
    .clk (clk),
    .rst (rst),
    .outs (extsi10_outs),
    .outs_valid (extsi10_outs_valid),
    .outs_ready (extsi10_outs_ready)
  );

  extsi #(.INPUT_TYPE(1), .OUTPUT_TYPE(8)) extsi11(
    .ins (fork1_outs_1),
    .ins_valid (fork1_outs_1_valid),
    .ins_ready (fork1_outs_1_ready),
    .clk (clk),
    .rst (rst),
    .outs (extsi11_outs),
    .outs_valid (extsi11_outs_valid),
    .outs_ready (extsi11_outs_ready)
  );

  mux #(.SIZE(2), .DATA_TYPE(4), .SELECT_TYPE(1)) mux0(
    .index (fork5_outs_0),
    .index_valid (fork5_outs_0_valid),
    .index_ready (fork5_outs_0_ready),
    .ins ({cond_br1_trueOut, extsi10_outs}),
    .ins_valid ({cond_br1_trueOut_valid, extsi10_outs_valid}),
    .ins_ready ({cond_br1_trueOut_ready, extsi10_outs_ready}),
    .clk (clk),
    .rst (rst),
    .outs (mux0_outs),
    .outs_valid (mux0_outs_valid),
    .outs_ready (mux0_outs_ready)
  );

  tehb #(.DATA_TYPE(4)) buffer0(
    .ins (mux0_outs),
    .ins_valid (mux0_outs_valid),
    .ins_ready (mux0_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer0_outs),
    .outs_valid (buffer0_outs_valid),
    .outs_ready (buffer0_outs_ready)
  );

  fork_type #(.SIZE(3), .DATA_TYPE(4)) fork2(
    .ins (buffer0_outs),
    .ins_valid (buffer0_outs_valid),
    .ins_ready (buffer0_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs ({fork2_outs_2, fork2_outs_1, fork2_outs_0}),
    .outs_valid ({fork2_outs_2_valid, fork2_outs_1_valid, fork2_outs_0_valid}),
    .outs_ready ({fork2_outs_2_ready, fork2_outs_1_ready, fork2_outs_0_ready})
  );

  tfifo #(.NUM_SLOTS(8), .DATA_TYPE(4)) buffer1(
    .ins (fork2_outs_0),
    .ins_valid (fork2_outs_0_valid),
    .ins_ready (fork2_outs_0_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer1_outs),
    .outs_valid (buffer1_outs_valid),
    .outs_ready (buffer1_outs_ready)
  );

  extsi #(.INPUT_TYPE(4), .OUTPUT_TYPE(8)) extsi12(
    .ins (buffer1_outs),
    .ins_valid (buffer1_outs_valid),
    .ins_ready (buffer1_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs (extsi12_outs),
    .outs_valid (extsi12_outs_valid),
    .outs_ready (extsi12_outs_ready)
  );

  extsi #(.INPUT_TYPE(4), .OUTPUT_TYPE(8)) extsi9(
    .ins (fork2_outs_1),
    .ins_valid (fork2_outs_1_valid),
    .ins_ready (fork2_outs_1_ready),
    .clk (clk),
    .rst (rst),
    .outs (extsi9_outs),
    .outs_valid (extsi9_outs_valid),
    .outs_ready (extsi9_outs_ready)
  );

  extsi #(.INPUT_TYPE(4), .OUTPUT_TYPE(5)) extsi13(
    .ins (fork2_outs_2),
    .ins_valid (fork2_outs_2_valid),
    .ins_ready (fork2_outs_2_ready),
    .clk (clk),
    .rst (rst),
    .outs (extsi13_outs),
    .outs_valid (extsi13_outs_valid),
    .outs_ready (extsi13_outs_ready)
  );

  tfifo #(.NUM_SLOTS(7), .DATA_TYPE(1)) buffer12(
    .ins (fork5_outs_3),
    .ins_valid (fork5_outs_3_valid),
    .ins_ready (fork5_outs_3_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer12_outs),
    .outs_valid (buffer12_outs_valid),
    .outs_ready (buffer12_outs_ready)
  );

  mux #(.SIZE(2), .DATA_TYPE(8), .SELECT_TYPE(1)) mux1(
    .index (buffer12_outs),
    .index_valid (buffer12_outs_valid),
    .index_ready (buffer12_outs_ready),
    .ins ({cond_br2_trueOut, extsi11_outs}),
    .ins_valid ({cond_br2_trueOut_valid, extsi11_outs_valid}),
    .ins_ready ({cond_br2_trueOut_ready, extsi11_outs_ready}),
    .clk (clk),
    .rst (rst),
    .outs (mux1_outs),
    .outs_valid (mux1_outs_valid),
    .outs_ready (mux1_outs_ready)
  );

  mux #(.SIZE(2), .DATA_TYPE(8), .SELECT_TYPE(1)) mux2(
    .index (fork5_outs_1),
    .index_valid (fork5_outs_1_valid),
    .index_ready (fork5_outs_1_ready),
    .ins ({cond_br3_trueOut, fn_arg_0_secret}),
    .ins_valid ({cond_br3_trueOut_valid, fn_arg_0_secret_valid}),
    .ins_ready ({cond_br3_trueOut_ready, fn_arg_0_secret_ready}),
    .clk (clk),
    .rst (rst),
    .outs (mux2_outs),
    .outs_valid (mux2_outs_valid),
    .outs_ready (mux2_outs_ready)
  );

  oehb #(.DATA_TYPE(8)) buffer5(
    .ins (mux2_outs),
    .ins_valid (mux2_outs_valid),
    .ins_ready (mux2_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer5_outs),
    .outs_valid (buffer5_outs_valid),
    .outs_ready (buffer5_outs_ready)
  );

  tehb #(.DATA_TYPE(8)) buffer6(
    .ins (buffer5_outs),
    .ins_valid (buffer5_outs_valid),
    .ins_ready (buffer5_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer6_outs),
    .outs_valid (buffer6_outs_valid),
    .outs_ready (buffer6_outs_ready)
  );

  fork_type #(.SIZE(3), .DATA_TYPE(8)) fork3(
    .ins (buffer6_outs),
    .ins_valid (buffer6_outs_valid),
    .ins_ready (buffer6_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs ({fork3_outs_2, fork3_outs_1, fork3_outs_0}),
    .outs_valid ({fork3_outs_2_valid, fork3_outs_1_valid, fork3_outs_0_valid}),
    .outs_ready ({fork3_outs_2_ready, fork3_outs_1_ready, fork3_outs_0_ready})
  );

  mux #(.SIZE(2), .DATA_TYPE(8), .SELECT_TYPE(1)) mux3(
    .index (fork5_outs_2),
    .index_valid (fork5_outs_2_valid),
    .index_ready (fork5_outs_2_ready),
    .ins ({cond_br4_trueOut, fn_arg_1}),
    .ins_valid ({cond_br4_trueOut_valid, fn_arg_1_valid}),
    .ins_ready ({cond_br4_trueOut_ready, fn_arg_1_ready}),
    .clk (clk),
    .rst (rst),
    .outs (mux3_outs),
    .outs_valid (mux3_outs_valid),
    .outs_ready (mux3_outs_ready)
  );

  oehb #(.DATA_TYPE(8)) buffer9(
    .ins (mux3_outs),
    .ins_valid (mux3_outs_valid),
    .ins_ready (mux3_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer9_outs),
    .outs_valid (buffer9_outs_valid),
    .outs_ready (buffer9_outs_ready)
  );

  tehb #(.DATA_TYPE(8)) buffer10(
    .ins (buffer9_outs),
    .ins_valid (buffer9_outs_valid),
    .ins_ready (buffer9_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer10_outs),
    .outs_valid (buffer10_outs_valid),
    .outs_ready (buffer10_outs_ready)
  );

  fork_type #(.SIZE(2), .DATA_TYPE(8)) fork4(
    .ins (buffer10_outs),
    .ins_valid (buffer10_outs_valid),
    .ins_ready (buffer10_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs ({fork4_outs_1, fork4_outs_0}),
    .outs_valid ({fork4_outs_1_valid, fork4_outs_0_valid}),
    .outs_ready ({fork4_outs_1_ready, fork4_outs_0_ready})
  );

  control_merge_dataless #(.SIZE(2), .INDEX_TYPE(1)) control_merge0(
    .ins_valid ({cond_br5_trueOut_valid, fork0_outs_2_valid}),
    .ins_ready ({cond_br5_trueOut_ready, fork0_outs_2_ready}),
    .clk (clk),
    .rst (rst),
    .outs_valid (control_merge0_outs_valid),
    .outs_ready (control_merge0_outs_ready),
    .index (control_merge0_index),
    .index_valid (control_merge0_index_valid),
    .index_ready (control_merge0_index_ready)
  );

  fork_type #(.SIZE(4), .DATA_TYPE(1)) fork5(
    .ins (control_merge0_index),
    .ins_valid (control_merge0_index_valid),
    .ins_ready (control_merge0_index_ready),
    .clk (clk),
    .rst (rst),
    .outs ({fork5_outs_3, fork5_outs_2, fork5_outs_1, fork5_outs_0}),
    .outs_valid ({fork5_outs_3_valid, fork5_outs_2_valid, fork5_outs_1_valid, fork5_outs_0_valid}),
    .outs_ready ({fork5_outs_3_ready, fork5_outs_2_ready, fork5_outs_1_ready, fork5_outs_0_ready})
  );

  fork_dataless #(.SIZE(2)) fork6(
    .ins_valid (control_merge0_outs_valid),
    .ins_ready (control_merge0_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs_valid ({fork6_outs_1_valid, fork6_outs_0_valid}),
    .outs_ready ({fork6_outs_1_ready, fork6_outs_0_ready})
  );

  source source0(
    .clk (clk),
    .rst (rst),
    .outs_valid (source0_outs_valid),
    .outs_ready (source0_outs_ready)
  );

  handshake_constant_1 #(.DATA_WIDTH(2)) constant3(
    .ctrl_valid (source0_outs_valid),
    .ctrl_ready (source0_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs (constant3_outs),
    .outs_valid (constant3_outs_valid),
    .outs_ready (constant3_outs_ready)
  );

  extsi #(.INPUT_TYPE(2), .OUTPUT_TYPE(5)) extsi14(
    .ins (constant3_outs),
    .ins_valid (constant3_outs_valid),
    .ins_ready (constant3_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs (extsi14_outs),
    .outs_valid (extsi14_outs_valid),
    .outs_ready (extsi14_outs_ready)
  );

  source source1(
    .clk (clk),
    .rst (rst),
    .outs_valid (source1_outs_valid),
    .outs_ready (source1_outs_ready)
  );

  handshake_constant_2 #(.DATA_WIDTH(5)) constant6(
    .ctrl_valid (source1_outs_valid),
    .ctrl_ready (source1_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs (constant6_outs),
    .outs_valid (constant6_outs_valid),
    .outs_ready (constant6_outs_ready)
  );

  tfifo #(.NUM_SLOTS(1), .DATA_TYPE(8)) buffer2(
    .ins (extsi9_outs),
    .ins_valid (extsi9_outs_valid),
    .ins_ready (extsi9_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer2_outs),
    .outs_valid (buffer2_outs_valid),
    .outs_ready (buffer2_outs_ready)
  );

  load #(.DATA_TYPE(8), .ADDR_TYPE(8)) load0(
    .addrIn (buffer2_outs),
    .addrIn_valid (buffer2_outs_valid),
    .addrIn_ready (buffer2_outs_ready),
    .dataFromMem (lsq1_ldData_0),
    .dataFromMem_valid (lsq1_ldData_0_valid),
    .dataFromMem_ready (lsq1_ldData_0_ready),
    .clk (clk),
    .rst (rst),
    .addrOut (load0_addrOut),
    .addrOut_valid (load0_addrOut_valid),
    .addrOut_ready (load0_addrOut_ready),
    .dataOut (load0_dataOut),
    .dataOut_valid (load0_dataOut_valid),
    .dataOut_ready (load0_dataOut_ready)
  );

  tfifo #(.NUM_SLOTS(3), .DATA_TYPE(8)) buffer7(
    .ins (fork3_outs_0),
    .ins_valid (fork3_outs_0_valid),
    .ins_ready (fork3_outs_0_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer7_outs),
    .outs_valid (buffer7_outs_valid),
    .outs_ready (buffer7_outs_ready)
  );

  addi #(.DATA_TYPE(8)) addi0(
    .lhs (load0_dataOut),
    .lhs_valid (load0_dataOut_valid),
    .lhs_ready (load0_dataOut_ready),
    .rhs (buffer7_outs),
    .rhs_valid (buffer7_outs_valid),
    .rhs_ready (buffer7_outs_ready),
    .clk (clk),
    .rst (rst),
    .result (addi0_result),
    .result_valid (addi0_result_valid),
    .result_ready (addi0_result_ready)
  );

  fork_type #(.SIZE(2), .DATA_TYPE(8)) fork7(
    .ins (addi0_result),
    .ins_valid (addi0_result_valid),
    .ins_ready (addi0_result_ready),
    .clk (clk),
    .rst (rst),
    .outs ({fork7_outs_1, fork7_outs_0}),
    .outs_valid ({fork7_outs_1_valid, fork7_outs_0_valid}),
    .outs_ready ({fork7_outs_1_ready, fork7_outs_0_ready})
  );

  tfifo #(.NUM_SLOTS(1), .DATA_TYPE(8)) buffer15(
    .ins (fork7_outs_0),
    .ins_valid (fork7_outs_0_valid),
    .ins_ready (fork7_outs_0_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer15_outs),
    .outs_valid (buffer15_outs_valid),
    .outs_ready (buffer15_outs_ready)
  );

  load #(.DATA_TYPE(8), .ADDR_TYPE(8)) load3(
    .addrIn (buffer15_outs),
    .addrIn_valid (buffer15_outs_valid),
    .addrIn_ready (buffer15_outs_ready),
    .dataFromMem (lsq1_ldData_1),
    .dataFromMem_valid (lsq1_ldData_1_valid),
    .dataFromMem_ready (lsq1_ldData_1_ready),
    .clk (clk),
    .rst (rst),
    .addrOut (load3_addrOut),
    .addrOut_valid (load3_addrOut_valid),
    .addrOut_ready (load3_addrOut_ready),
    .dataOut (load3_dataOut),
    .dataOut_valid (load3_dataOut_valid),
    .dataOut_ready (load3_dataOut_ready)
  );

  tfifo #(.NUM_SLOTS(7), .DATA_TYPE(8)) buffer11(
    .ins (fork4_outs_0),
    .ins_valid (fork4_outs_0_valid),
    .ins_ready (fork4_outs_0_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer11_outs),
    .outs_valid (buffer11_outs_valid),
    .outs_ready (buffer11_outs_ready)
  );

  addi #(.DATA_TYPE(8)) addi1(
    .lhs (load3_dataOut),
    .lhs_valid (load3_dataOut_valid),
    .lhs_ready (load3_dataOut_ready),
    .rhs (buffer11_outs),
    .rhs_valid (buffer11_outs_valid),
    .rhs_ready (buffer11_outs_ready),
    .clk (clk),
    .rst (rst),
    .result (addi1_result),
    .result_valid (addi1_result_valid),
    .result_ready (addi1_result_ready)
  );

  tfifo #(.NUM_SLOTS(7), .DATA_TYPE(8)) buffer8(
    .ins (fork3_outs_1),
    .ins_valid (fork3_outs_1_valid),
    .ins_ready (fork3_outs_1_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer8_outs),
    .outs_valid (buffer8_outs_valid),
    .outs_ready (buffer8_outs_ready)
  );

  addi #(.DATA_TYPE(8)) addi2(
    .lhs (addi1_result),
    .lhs_valid (addi1_result_valid),
    .lhs_ready (addi1_result_ready),
    .rhs (buffer8_outs),
    .rhs_valid (buffer8_outs_valid),
    .rhs_ready (buffer8_outs_ready),
    .clk (clk),
    .rst (rst),
    .result (addi2_result),
    .result_valid (addi2_result_valid),
    .result_ready (addi2_result_ready)
  );

  oehb #(.DATA_TYPE(8)) buffer3(
    .ins (mux1_outs),
    .ins_valid (mux1_outs_valid),
    .ins_ready (mux1_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer3_outs),
    .outs_valid (buffer3_outs_valid),
    .outs_ready (buffer3_outs_ready)
  );

  tehb #(.DATA_TYPE(8)) buffer4(
    .ins (buffer3_outs),
    .ins_valid (buffer3_outs_valid),
    .ins_ready (buffer3_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer4_outs),
    .outs_valid (buffer4_outs_valid),
    .outs_ready (buffer4_outs_ready)
  );

  addi #(.DATA_TYPE(8)) addi3(
    .lhs (buffer4_outs),
    .lhs_valid (buffer4_outs_valid),
    .lhs_ready (buffer4_outs_ready),
    .rhs (addi2_result),
    .rhs_valid (addi2_result_valid),
    .rhs_ready (addi2_result_ready),
    .clk (clk),
    .rst (rst),
    .result (addi3_result),
    .result_valid (addi3_result_valid),
    .result_ready (addi3_result_ready)
  );

  fork_type #(.SIZE(2), .DATA_TYPE(8)) fork8(
    .ins (addi3_result),
    .ins_valid (addi3_result_valid),
    .ins_ready (addi3_result_ready),
    .clk (clk),
    .rst (rst),
    .outs ({fork8_outs_1, fork8_outs_0}),
    .outs_valid ({fork8_outs_1_valid, fork8_outs_0_valid}),
    .outs_ready ({fork8_outs_1_ready, fork8_outs_0_ready})
  );

  addi #(.DATA_TYPE(8)) addi4(
    .lhs (extsi12_outs),
    .lhs_valid (extsi12_outs_valid),
    .lhs_ready (extsi12_outs_ready),
    .rhs (fork8_outs_0),
    .rhs_valid (fork8_outs_0_valid),
    .rhs_ready (fork8_outs_0_ready),
    .clk (clk),
    .rst (rst),
    .result (addi4_result),
    .result_valid (addi4_result_valid),
    .result_ready (addi4_result_ready)
  );

  tfifo #(.NUM_SLOTS(1), .DATA_TYPE(8)) buffer16(
    .ins (fork7_outs_1),
    .ins_valid (fork7_outs_1_valid),
    .ins_ready (fork7_outs_1_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer16_outs),
    .outs_valid (buffer16_outs_valid),
    .outs_ready (buffer16_outs_ready)
  );

  tfifo #(.NUM_SLOTS(1), .DATA_TYPE(8)) buffer17(
    .ins (addi4_result),
    .ins_valid (addi4_result_valid),
    .ins_ready (addi4_result_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer17_outs),
    .outs_valid (buffer17_outs_valid),
    .outs_ready (buffer17_outs_ready)
  );

  store #(.DATA_TYPE(8), .ADDR_TYPE(8)) store1(
    .addrIn (buffer16_outs),
    .addrIn_valid (buffer16_outs_valid),
    .addrIn_ready (buffer16_outs_ready),
    .dataIn (buffer17_outs),
    .dataIn_valid (buffer17_outs_valid),
    .dataIn_ready (buffer17_outs_ready),
    .clk (clk),
    .rst (rst),
    .addrOut (store1_addrOut),
    .addrOut_valid (store1_addrOut_valid),
    .addrOut_ready (store1_addrOut_ready),
    .dataToMem (store1_dataToMem),
    .dataToMem_valid (store1_dataToMem_valid),
    .dataToMem_ready (store1_dataToMem_ready)
  );

  addi #(.DATA_TYPE(5)) addi5(
    .lhs (extsi13_outs),
    .lhs_valid (extsi13_outs_valid),
    .lhs_ready (extsi13_outs_ready),
    .rhs (extsi14_outs),
    .rhs_valid (extsi14_outs_valid),
    .rhs_ready (extsi14_outs_ready),
    .clk (clk),
    .rst (rst),
    .result (addi5_result),
    .result_valid (addi5_result_valid),
    .result_ready (addi5_result_ready)
  );

  oehb #(.DATA_TYPE(5)) buffer18(
    .ins (addi5_result),
    .ins_valid (addi5_result_valid),
    .ins_ready (addi5_result_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer18_outs),
    .outs_valid (buffer18_outs_valid),
    .outs_ready (buffer18_outs_ready)
  );

  fork_type #(.SIZE(2), .DATA_TYPE(5)) fork9(
    .ins (buffer18_outs),
    .ins_valid (buffer18_outs_valid),
    .ins_ready (buffer18_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs ({fork9_outs_1, fork9_outs_0}),
    .outs_valid ({fork9_outs_1_valid, fork9_outs_0_valid}),
    .outs_ready ({fork9_outs_1_ready, fork9_outs_0_ready})
  );

  trunci #(.INPUT_TYPE(5), .OUTPUT_TYPE(4)) trunci3(
    .ins (fork9_outs_0),
    .ins_valid (fork9_outs_0_valid),
    .ins_ready (fork9_outs_0_ready),
    .clk (clk),
    .rst (rst),
    .outs (trunci3_outs),
    .outs_valid (trunci3_outs_valid),
    .outs_ready (trunci3_outs_ready)
  );

  handshake_cmpi_0 #(.DATA_TYPE(5)) cmpi0(
    .lhs (fork9_outs_1),
    .lhs_valid (fork9_outs_1_valid),
    .lhs_ready (fork9_outs_1_ready),
    .rhs (constant6_outs),
    .rhs_valid (constant6_outs_valid),
    .rhs_ready (constant6_outs_ready),
    .clk (clk),
    .rst (rst),
    .result (cmpi0_result),
    .result_valid (cmpi0_result_valid),
    .result_ready (cmpi0_result_ready)
  );

  fork_type #(.SIZE(5), .DATA_TYPE(1)) fork10(
    .ins (cmpi0_result),
    .ins_valid (cmpi0_result_valid),
    .ins_ready (cmpi0_result_ready),
    .clk (clk),
    .rst (rst),
    .outs ({fork10_outs_4, fork10_outs_3, fork10_outs_2, fork10_outs_1, fork10_outs_0}),
    .outs_valid ({fork10_outs_4_valid, fork10_outs_3_valid, fork10_outs_2_valid, fork10_outs_1_valid, fork10_outs_0_valid}),
    .outs_ready ({fork10_outs_4_ready, fork10_outs_3_ready, fork10_outs_2_ready, fork10_outs_1_ready, fork10_outs_0_ready})
  );

  cond_br #(.DATA_TYPE(4)) cond_br1(
    .condition (fork10_outs_0),
    .condition_valid (fork10_outs_0_valid),
    .condition_ready (fork10_outs_0_ready),
    .data (trunci3_outs),
    .data_valid (trunci3_outs_valid),
    .data_ready (trunci3_outs_ready),
    .clk (clk),
    .rst (rst),
    .trueOut (cond_br1_trueOut),
    .trueOut_valid (cond_br1_trueOut_valid),
    .trueOut_ready (cond_br1_trueOut_ready),
    .falseOut (cond_br1_falseOut),
    .falseOut_valid (cond_br1_falseOut_valid),
    .falseOut_ready (cond_br1_falseOut_ready)
  );

  sink #(.DATA_TYPE(4)) sink0(
    .ins (cond_br1_falseOut),
    .ins_valid (cond_br1_falseOut_valid),
    .ins_ready (cond_br1_falseOut_ready),
    .clk (clk),
    .rst (rst)
  );

  tfifo #(.NUM_SLOTS(7), .DATA_TYPE(1)) buffer19(
    .ins (fork10_outs_1),
    .ins_valid (fork10_outs_1_valid),
    .ins_ready (fork10_outs_1_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer19_outs),
    .outs_valid (buffer19_outs_valid),
    .outs_ready (buffer19_outs_ready)
  );

  cond_br #(.DATA_TYPE(8)) cond_br2(
    .condition (buffer19_outs),
    .condition_valid (buffer19_outs_valid),
    .condition_ready (buffer19_outs_ready),
    .data (fork8_outs_1),
    .data_valid (fork8_outs_1_valid),
    .data_ready (fork8_outs_1_ready),
    .clk (clk),
    .rst (rst),
    .trueOut (cond_br2_trueOut),
    .trueOut_valid (cond_br2_trueOut_valid),
    .trueOut_ready (cond_br2_trueOut_ready),
    .falseOut (cond_br2_falseOut),
    .falseOut_valid (cond_br2_falseOut_valid),
    .falseOut_ready (cond_br2_falseOut_ready)
  );

  cond_br #(.DATA_TYPE(8)) cond_br3(
    .condition (fork10_outs_4),
    .condition_valid (fork10_outs_4_valid),
    .condition_ready (fork10_outs_4_ready),
    .data (fork3_outs_2),
    .data_valid (fork3_outs_2_valid),
    .data_ready (fork3_outs_2_ready),
    .clk (clk),
    .rst (rst),
    .trueOut (cond_br3_trueOut),
    .trueOut_valid (cond_br3_trueOut_valid),
    .trueOut_ready (cond_br3_trueOut_ready),
    .falseOut (cond_br3_falseOut),
    .falseOut_valid (cond_br3_falseOut_valid),
    .falseOut_ready (cond_br3_falseOut_ready)
  );

  sink #(.DATA_TYPE(8)) sink1(
    .ins (cond_br3_falseOut),
    .ins_valid (cond_br3_falseOut_valid),
    .ins_ready (cond_br3_falseOut_ready),
    .clk (clk),
    .rst (rst)
  );

  cond_br #(.DATA_TYPE(8)) cond_br4(
    .condition (fork10_outs_3),
    .condition_valid (fork10_outs_3_valid),
    .condition_ready (fork10_outs_3_ready),
    .data (fork4_outs_1),
    .data_valid (fork4_outs_1_valid),
    .data_ready (fork4_outs_1_ready),
    .clk (clk),
    .rst (rst),
    .trueOut (cond_br4_trueOut),
    .trueOut_valid (cond_br4_trueOut_valid),
    .trueOut_ready (cond_br4_trueOut_ready),
    .falseOut (cond_br4_falseOut),
    .falseOut_valid (cond_br4_falseOut_valid),
    .falseOut_ready (cond_br4_falseOut_ready)
  );

  sink #(.DATA_TYPE(8)) sink2(
    .ins (cond_br4_falseOut),
    .ins_valid (cond_br4_falseOut_valid),
    .ins_ready (cond_br4_falseOut_ready),
    .clk (clk),
    .rst (rst)
  );

  oehb_dataless buffer13(
    .ins_valid (fork6_outs_1_valid),
    .ins_ready (fork6_outs_1_ready),
    .clk (clk),
    .rst (rst),
    .outs_valid (buffer13_outs_valid),
    .outs_ready (buffer13_outs_ready)
  );

  tfifo_dataless #(.NUM_SLOTS(1)) buffer14(
    .ins_valid (buffer13_outs_valid),
    .ins_ready (buffer13_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs_valid (buffer14_outs_valid),
    .outs_ready (buffer14_outs_ready)
  );

  cond_br_dataless cond_br5(
    .condition (fork10_outs_2),
    .condition_valid (fork10_outs_2_valid),
    .condition_ready (fork10_outs_2_ready),
    .data_valid (buffer14_outs_valid),
    .data_ready (buffer14_outs_ready),
    .clk (clk),
    .rst (rst),
    .trueOut_valid (cond_br5_trueOut_valid),
    .trueOut_ready (cond_br5_trueOut_ready),
    .falseOut_valid (cond_br5_falseOut_valid),
    .falseOut_ready (cond_br5_falseOut_ready)
  );

endmodule
