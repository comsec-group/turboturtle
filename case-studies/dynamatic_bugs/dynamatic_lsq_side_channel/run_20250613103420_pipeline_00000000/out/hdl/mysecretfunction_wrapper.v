module mysecretfunction_wrapper(
  input [7:0] fn_arg_0_secret,
  input  fn_arg_0_secret_valid,
  input [7:0] fn_arg_1,
  input  fn_arg_1_valid,
  input [7:0] fn_arg_arrout_1_din0,
  input [7:0] fn_arg_arrout_1_din1,
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
  output  fn_arg_arrout_1_ce0,
  output  fn_arg_arrout_1_we0,
  output [7:0] fn_arg_arrout_1_address0,
  output [7:0] fn_arg_arrout_1_dout0,
  output  fn_arg_arrout_1_ce1,
  output  fn_arg_arrout_1_we1,
  output [7:0] fn_arg_arrout_1_address1,
  output [7:0] fn_arg_arrout_1_dout1
);
  wire  mem_to_bram_converter_fn_arg_arrout_1_ce0;
  wire  mem_to_bram_converter_fn_arg_arrout_1_we0;
  wire [7:0] mem_to_bram_converter_fn_arg_arrout_1_address0;
  wire [7:0] mem_to_bram_converter_fn_arg_arrout_1_dout0;
  wire  mem_to_bram_converter_fn_arg_arrout_1_ce1;
  wire  mem_to_bram_converter_fn_arg_arrout_1_we1;
  wire [7:0] mem_to_bram_converter_fn_arg_arrout_1_address1;
  wire [7:0] mem_to_bram_converter_fn_arg_arrout_1_dout1;
  wire [7:0] mem_to_bram_converter_fn_arg_arrout_1_loadData;
  wire [7:0] mysecretfunction_wrapped_out0;
  wire  mysecretfunction_wrapped_out0_valid;
  wire  mysecretfunction_wrapped_out0_ready;
  wire  mysecretfunction_wrapped_fn_arg_arrout_1_end_valid;
  wire  mysecretfunction_wrapped_fn_arg_arrout_1_end_ready;
  wire  mysecretfunction_wrapped_end_valid;
  wire  mysecretfunction_wrapped_end_ready;
  wire  mysecretfunction_wrapped_fn_arg_arrout_1_loadEn;
  wire [7:0] mysecretfunction_wrapped_fn_arg_arrout_1_loadAddr;
  wire  mysecretfunction_wrapped_fn_arg_arrout_1_storeEn;
  wire [7:0] mysecretfunction_wrapped_fn_arg_arrout_1_storeAddr;
  wire [7:0] mysecretfunction_wrapped_fn_arg_arrout_1_storeData;

  assign out0 = mysecretfunction_wrapped_out0;
  assign out0_valid = mysecretfunction_wrapped_out0_valid;
  assign mysecretfunction_wrapped_out0_ready = out0_ready;
  assign fn_arg_arrout_1_end_valid = mysecretfunction_wrapped_fn_arg_arrout_1_end_valid;
  assign mysecretfunction_wrapped_fn_arg_arrout_1_end_ready = fn_arg_arrout_1_end_ready;
  assign end_valid = mysecretfunction_wrapped_end_valid;
  assign mysecretfunction_wrapped_end_ready = end_ready;
  assign fn_arg_arrout_1_ce0 = mem_to_bram_converter_fn_arg_arrout_1_ce0;
  assign fn_arg_arrout_1_we0 = mem_to_bram_converter_fn_arg_arrout_1_we0;
  assign fn_arg_arrout_1_address0 = mem_to_bram_converter_fn_arg_arrout_1_address0;
  assign fn_arg_arrout_1_dout0 = mem_to_bram_converter_fn_arg_arrout_1_dout0;
  assign fn_arg_arrout_1_ce1 = mem_to_bram_converter_fn_arg_arrout_1_ce1;
  assign fn_arg_arrout_1_we1 = mem_to_bram_converter_fn_arg_arrout_1_we1;
  assign fn_arg_arrout_1_address1 = mem_to_bram_converter_fn_arg_arrout_1_address1;
  assign fn_arg_arrout_1_dout1 = mem_to_bram_converter_fn_arg_arrout_1_dout1;

  mem_to_bram #(.DATA_WIDTH(8), .ADDR_WIDTH(8)) mem_to_bram_converter_fn_arg_arrout_1(
    .loadEn (mysecretfunction_wrapped_fn_arg_arrout_1_loadEn),
    .loadAddr (mysecretfunction_wrapped_fn_arg_arrout_1_loadAddr),
    .storeEn (mysecretfunction_wrapped_fn_arg_arrout_1_storeEn),
    .storeAddr (mysecretfunction_wrapped_fn_arg_arrout_1_storeAddr),
    .storeData (mysecretfunction_wrapped_fn_arg_arrout_1_storeData),
    .din0 (fn_arg_arrout_1_din0),
    .din1 (fn_arg_arrout_1_din1),
    .ce0 (mem_to_bram_converter_fn_arg_arrout_1_ce0),
    .we0 (mem_to_bram_converter_fn_arg_arrout_1_we0),
    .address0 (mem_to_bram_converter_fn_arg_arrout_1_address0),
    .dout0 (mem_to_bram_converter_fn_arg_arrout_1_dout0),
    .ce1 (mem_to_bram_converter_fn_arg_arrout_1_ce1),
    .we1 (mem_to_bram_converter_fn_arg_arrout_1_we1),
    .address1 (mem_to_bram_converter_fn_arg_arrout_1_address1),
    .dout1 (mem_to_bram_converter_fn_arg_arrout_1_dout1),
    .loadData (mem_to_bram_converter_fn_arg_arrout_1_loadData)
  );

  mysecretfunction mysecretfunction_wrapped(
    .fn_arg_0_secret (fn_arg_0_secret),
    .fn_arg_0_secret_valid (fn_arg_0_secret_valid),
    .fn_arg_0_secret_ready (fn_arg_0_secret_ready),
    .fn_arg_1 (fn_arg_1),
    .fn_arg_1_valid (fn_arg_1_valid),
    .fn_arg_1_ready (fn_arg_1_ready),
    .fn_arg_arrout_1_loadData (mem_to_bram_converter_fn_arg_arrout_1_loadData),
    .fn_arg_arrout_1_start_valid (fn_arg_arrout_1_start_valid),
    .fn_arg_arrout_1_start_ready (fn_arg_arrout_1_start_ready),
    .start_valid (start_valid),
    .start_ready (start_ready),
    .clk (clk),
    .rst (rst),
    .out0 (mysecretfunction_wrapped_out0),
    .out0_valid (mysecretfunction_wrapped_out0_valid),
    .out0_ready (mysecretfunction_wrapped_out0_ready),
    .fn_arg_arrout_1_end_valid (mysecretfunction_wrapped_fn_arg_arrout_1_end_valid),
    .fn_arg_arrout_1_end_ready (mysecretfunction_wrapped_fn_arg_arrout_1_end_ready),
    .end_valid (mysecretfunction_wrapped_end_valid),
    .end_ready (mysecretfunction_wrapped_end_ready),
    .fn_arg_arrout_1_loadEn (mysecretfunction_wrapped_fn_arg_arrout_1_loadEn),
    .fn_arg_arrout_1_loadAddr (mysecretfunction_wrapped_fn_arg_arrout_1_loadAddr),
    .fn_arg_arrout_1_storeEn (mysecretfunction_wrapped_fn_arg_arrout_1_storeEn),
    .fn_arg_arrout_1_storeAddr (mysecretfunction_wrapped_fn_arg_arrout_1_storeAddr),
    .fn_arg_arrout_1_storeData (mysecretfunction_wrapped_fn_arg_arrout_1_storeData)
  );

endmodule
