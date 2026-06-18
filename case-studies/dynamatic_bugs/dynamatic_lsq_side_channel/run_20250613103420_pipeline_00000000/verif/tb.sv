// simple formal testbench
module tb (
  input [7:0] a_fn_arg_0_secret,
  input [7:0] b_fn_arg_0_secret,
  input fn_arg_0_secret_valid,
  input [7:0] fn_arg_1,
  input fn_arg_1_valid,
  input [7:0] fn_arg_arrout_1_loadData,
  input fn_arg_arrout_1_start_valid,
  input start_valid,
  input clk,
  input rst,
  input out0_ready,
  input fn_arg_arrout_1_end_ready,
  input end_ready,
  output a_fn_arg_0_secret_ready,
  output b_fn_arg_0_secret_ready,
  output a_fn_arg_1_ready,
  output b_fn_arg_1_ready,
  output a_fn_arg_arrout_1_start_ready,
  output b_fn_arg_arrout_1_start_ready,
  output a_start_ready,
  output b_start_ready,
  output [7:0] a_out0,
  output [7:0] b_out0,
  output a_out0_valid,
  output b_out0_valid,
  output a_fn_arg_arrout_1_end_valid,
  output b_fn_arg_arrout_1_end_valid,
  output a_end_valid,
  output b_end_valid,
  output a_fn_arg_arrout_1_loadEn,
  output b_fn_arg_arrout_1_loadEn,
  output [7:0] a_fn_arg_arrout_1_loadAddr,
  output [7:0] b_fn_arg_arrout_1_loadAddr,
  output a_fn_arg_arrout_1_storeEn,
  output b_fn_arg_arrout_1_storeEn,
  output [7:0] a_fn_arg_arrout_1_storeAddr,
  output [7:0] b_fn_arg_arrout_1_storeAddr,
  output [7:0] a_fn_arg_arrout_1_storeData,
  output [7:0] b_fn_arg_arrout_1_storeData
  
);

  mysecretfunction a_mysecretfunction(
    .fn_arg_0_secret(a_fn_arg_0_secret),
    .fn_arg_0_secret_valid(fn_arg_0_secret_valid),
    .fn_arg_1(fn_arg_1),
    .fn_arg_1_valid(fn_arg_1_valid),
    .fn_arg_arrout_1_loadData(fn_arg_arrout_1_loadData),
    .fn_arg_arrout_1_start_valid(fn_arg_arrout_1_start_valid),
    .start_valid(start_valid),
    .clk(clk),
    .rst(rst),
    .out0_ready(out0_ready),
    .fn_arg_arrout_1_end_ready(fn_arg_arrout_1_end_ready),
    .end_ready(end_ready),
    .fn_arg_0_secret_ready(a_fn_arg_0_secret_ready),
    .fn_arg_1_ready(a_fn_arg_1_ready),
    .fn_arg_arrout_1_start_ready(a_fn_arg_arrout_1_start_ready),
    .start_ready(a_start_ready),
    .out0(a_out0),
    .out0_valid(a_out0_valid),
    .fn_arg_arrout_1_end_valid(a_fn_arg_arrout_1_end_valid),
    .end_valid(a_end_valid),
    .fn_arg_arrout_1_loadEn(a_fn_arg_arrout_1_loadEn),
    .fn_arg_arrout_1_loadAddr(a_fn_arg_arrout_1_loadAddr),
    .fn_arg_arrout_1_storeEn(a_fn_arg_arrout_1_storeEn),
    .fn_arg_arrout_1_storeAddr(a_fn_arg_arrout_1_storeAddr),
    .fn_arg_arrout_1_storeData(a_fn_arg_arrout_1_storeData)
    
  );
  
  mysecretfunction b_mysecretfunction(
    .fn_arg_0_secret(b_fn_arg_0_secret),
    .fn_arg_0_secret_valid(fn_arg_0_secret_valid),
    .fn_arg_1(fn_arg_1),
    .fn_arg_1_valid(fn_arg_1_valid),
    .fn_arg_arrout_1_loadData(fn_arg_arrout_1_loadData),
    .fn_arg_arrout_1_start_valid(fn_arg_arrout_1_start_valid),
    .start_valid(start_valid),
    .clk(clk),
    .rst(rst),
    .out0_ready(out0_ready),
    .fn_arg_arrout_1_end_ready(fn_arg_arrout_1_end_ready),
    .end_ready(end_ready),
    .fn_arg_0_secret_ready(b_fn_arg_0_secret_ready),
    .fn_arg_1_ready(b_fn_arg_1_ready),
    .fn_arg_arrout_1_start_ready(b_fn_arg_arrout_1_start_ready),
    .start_ready(b_start_ready),
    .out0(b_out0),
    .out0_valid(b_out0_valid),
    .fn_arg_arrout_1_end_valid(b_fn_arg_arrout_1_end_valid),
    .end_valid(b_end_valid),
    .fn_arg_arrout_1_loadEn(b_fn_arg_arrout_1_loadEn),
    .fn_arg_arrout_1_loadAddr(b_fn_arg_arrout_1_loadAddr),
    .fn_arg_arrout_1_storeEn(b_fn_arg_arrout_1_storeEn),
    .fn_arg_arrout_1_storeAddr(b_fn_arg_arrout_1_storeAddr),
    .fn_arg_arrout_1_storeData(b_fn_arg_arrout_1_storeData)
    
  );

  `ifdef FORMAL

  initial assume(rst);

  always @(posedge clk) begin
    
    if (!rst) begin
      a_does_finish: cover(a_out0_valid);
      b_does_finish: cover(b_out0_valid);
      no_sidechannel: assert(a_out0_valid == b_out0_valid);
    end
  end
  `endif

endmodule