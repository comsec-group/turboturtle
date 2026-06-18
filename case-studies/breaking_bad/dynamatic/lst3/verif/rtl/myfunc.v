module myfunc(
  input [63:0] var_0,
  input  var_0_valid,
  input [63:0] var_1_secret,
  input  var_1_secret_valid,
  input  start_valid,
  input  clk,
  input  rst,
  input  out0_ready,
  input  end_ready,
  output  var_0_ready,
  output  var_1_secret_ready,
  output  start_ready,
  output [63:0] out0,
  output  out0_valid,
  output  end_valid
);
  wire [63:0] fork0_outs_0;
  wire  fork0_outs_0_valid;
  wire  fork0_outs_0_ready;
  wire [63:0] fork0_outs_1;
  wire  fork0_outs_1_valid;
  wire  fork0_outs_1_ready;
  wire [63:0] fork0_outs_2;
  wire  fork0_outs_2_valid;
  wire  fork0_outs_2_ready;
  wire [1:0] trunci0_outs;
  wire  trunci0_outs_valid;
  wire  trunci0_outs_ready;
  wire  source0_outs_valid;
  wire  source0_outs_ready;
  wire [1:0] constant2_outs;
  wire  constant2_outs_valid;
  wire  constant2_outs_ready;
  wire [1:0] fork1_outs_0;
  wire  fork1_outs_0_valid;
  wire  fork1_outs_0_ready;
  wire [1:0] fork1_outs_1;
  wire  fork1_outs_1_valid;
  wire  fork1_outs_1_ready;
  wire [63:0] extsi0_outs;
  wire  extsi0_outs_valid;
  wire  extsi0_outs_ready;
  wire  source1_outs_valid;
  wire  source1_outs_ready;
  wire [0:0] constant3_outs;
  wire  constant3_outs_valid;
  wire  constant3_outs_ready;
  wire [0:0] fork2_outs_0;
  wire  fork2_outs_0_valid;
  wire  fork2_outs_0_ready;
  wire [0:0] fork2_outs_1;
  wire  fork2_outs_1_valid;
  wire  fork2_outs_1_ready;
  wire [1:0] extsi2_outs;
  wire  extsi2_outs_valid;
  wire  extsi2_outs_ready;
  wire [63:0] extsi1_outs;
  wire  extsi1_outs_valid;
  wire  extsi1_outs_ready;
  wire [63:0] muli0_result;
  wire  muli0_result_valid;
  wire  muli0_result_ready;
  wire [1:0] andi0_result;
  wire  andi0_result_valid;
  wire  andi0_result_ready;
  wire [0:0] cmpi0_result;
  wire  cmpi0_result_valid;
  wire  cmpi0_result_ready;
  wire [0:0] buffer0_outs;
  wire  buffer0_outs_valid;
  wire  buffer0_outs_ready;
  wire [63:0] select0_result;
  wire  select0_result_valid;
  wire  select0_result_ready;
  wire [63:0] shrui0_result;
  wire  shrui0_result_valid;
  wire  shrui0_result_ready;
  wire [63:0] buffer1_outs;
  wire  buffer1_outs_valid;
  wire  buffer1_outs_ready;
  wire [63:0] xori0_result;
  wire  xori0_result_valid;
  wire  xori0_result_ready;

  assign out0 = xori0_result;
  assign out0_valid = xori0_result_valid;
  assign xori0_result_ready = out0_ready;
  assign end_valid = start_valid;
  assign start_ready = end_ready;

  fork_type #(.SIZE(3), .DATA_TYPE(64)) fork0(
    .ins (var_0),
    .ins_valid (var_0_valid),
    .ins_ready (var_0_ready),
    .clk (clk),
    .rst (rst),
    .outs ({fork0_outs_2, fork0_outs_1, fork0_outs_0}),
    .outs_valid ({fork0_outs_2_valid, fork0_outs_1_valid, fork0_outs_0_valid}),
    .outs_ready ({fork0_outs_2_ready, fork0_outs_1_ready, fork0_outs_0_ready})
  );

  trunci #(.INPUT_TYPE(64), .OUTPUT_TYPE(2)) trunci0(
    .ins (var_1_secret),
    .ins_valid (var_1_secret_valid),
    .ins_ready (var_1_secret_ready),
    .clk (clk),
    .rst (rst),
    .outs (trunci0_outs),
    .outs_valid (trunci0_outs_valid),
    .outs_ready (trunci0_outs_ready)
  );

  source source0(
    .clk (clk),
    .rst (rst),
    .outs_valid (source0_outs_valid),
    .outs_ready (source0_outs_ready)
  );

  handshake_constant_0 #(.DATA_WIDTH(2)) constant2(
    .ctrl_valid (source0_outs_valid),
    .ctrl_ready (source0_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs (constant2_outs),
    .outs_valid (constant2_outs_valid),
    .outs_ready (constant2_outs_ready)
  );

  fork_type #(.SIZE(2), .DATA_TYPE(2)) fork1(
    .ins (constant2_outs),
    .ins_valid (constant2_outs_valid),
    .ins_ready (constant2_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs ({fork1_outs_1, fork1_outs_0}),
    .outs_valid ({fork1_outs_1_valid, fork1_outs_0_valid}),
    .outs_ready ({fork1_outs_1_ready, fork1_outs_0_ready})
  );

  extsi #(.INPUT_TYPE(2), .OUTPUT_TYPE(64)) extsi0(
    .ins (fork1_outs_1),
    .ins_valid (fork1_outs_1_valid),
    .ins_ready (fork1_outs_1_ready),
    .clk (clk),
    .rst (rst),
    .outs (extsi0_outs),
    .outs_valid (extsi0_outs_valid),
    .outs_ready (extsi0_outs_ready)
  );

  source source1(
    .clk (clk),
    .rst (rst),
    .outs_valid (source1_outs_valid),
    .outs_ready (source1_outs_ready)
  );

  handshake_constant_1 #(.DATA_WIDTH(1)) constant3(
    .ctrl_valid (source1_outs_valid),
    .ctrl_ready (source1_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs (constant3_outs),
    .outs_valid (constant3_outs_valid),
    .outs_ready (constant3_outs_ready)
  );

  fork_type #(.SIZE(2), .DATA_TYPE(1)) fork2(
    .ins (constant3_outs),
    .ins_valid (constant3_outs_valid),
    .ins_ready (constant3_outs_ready),
    .clk (clk),
    .rst (rst),
    .outs ({fork2_outs_1, fork2_outs_0}),
    .outs_valid ({fork2_outs_1_valid, fork2_outs_0_valid}),
    .outs_ready ({fork2_outs_1_ready, fork2_outs_0_ready})
  );

  extsi #(.INPUT_TYPE(1), .OUTPUT_TYPE(2)) extsi2(
    .ins (fork2_outs_0),
    .ins_valid (fork2_outs_0_valid),
    .ins_ready (fork2_outs_0_ready),
    .clk (clk),
    .rst (rst),
    .outs (extsi2_outs),
    .outs_valid (extsi2_outs_valid),
    .outs_ready (extsi2_outs_ready)
  );

  extsi #(.INPUT_TYPE(1), .OUTPUT_TYPE(64)) extsi1(
    .ins (fork2_outs_1),
    .ins_valid (fork2_outs_1_valid),
    .ins_ready (fork2_outs_1_ready),
    .clk (clk),
    .rst (rst),
    .outs (extsi1_outs),
    .outs_valid (extsi1_outs_valid),
    .outs_ready (extsi1_outs_ready)
  );

  muli #(.DATA_TYPE(64)) muli0(
    .lhs (fork0_outs_1),
    .lhs_valid (fork0_outs_1_valid),
    .lhs_ready (fork0_outs_1_ready),
    .rhs (fork0_outs_2),
    .rhs_valid (fork0_outs_2_valid),
    .rhs_ready (fork0_outs_2_ready),
    .clk (clk),
    .rst (rst),
    .result (muli0_result),
    .result_valid (muli0_result_valid),
    .result_ready (muli0_result_ready)
  );

  andi #(.DATA_TYPE(2)) andi0(
    .lhs (trunci0_outs),
    .lhs_valid (trunci0_outs_valid),
    .lhs_ready (trunci0_outs_ready),
    .rhs (fork1_outs_0),
    .rhs_valid (fork1_outs_0_valid),
    .rhs_ready (fork1_outs_0_ready),
    .clk (clk),
    .rst (rst),
    .result (andi0_result),
    .result_valid (andi0_result_valid),
    .result_ready (andi0_result_ready)
  );

  handshake_cmpi_0 #(.DATA_TYPE(2)) cmpi0(
    .lhs (andi0_result),
    .lhs_valid (andi0_result_valid),
    .lhs_ready (andi0_result_ready),
    .rhs (extsi2_outs),
    .rhs_valid (extsi2_outs_valid),
    .rhs_ready (extsi2_outs_ready),
    .clk (clk),
    .rst (rst),
    .result (cmpi0_result),
    .result_valid (cmpi0_result_valid),
    .result_ready (cmpi0_result_ready)
  );

  oehb #(.DATA_TYPE(1)) buffer0(
    .ins (cmpi0_result),
    .ins_valid (cmpi0_result_valid),
    .ins_ready (cmpi0_result_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer0_outs),
    .outs_valid (buffer0_outs_valid),
    .outs_ready (buffer0_outs_ready)
  );

  selector #(.DATA_TYPE(64)) select0(
    .condition (buffer0_outs),
    .condition_valid (buffer0_outs_valid),
    .condition_ready (buffer0_outs_ready),
    .trueValue (extsi1_outs),
    .trueValue_valid (extsi1_outs_valid),
    .trueValue_ready (extsi1_outs_ready),
    .falseValue (muli0_result),
    .falseValue_valid (muli0_result_valid),
    .falseValue_ready (muli0_result_ready),
    .clk (clk),
    .rst (rst),
    .result (select0_result),
    .result_valid (select0_result_valid),
    .result_ready (select0_result_ready)
  );

  shrui #(.DATA_TYPE(64)) shrui0(
    .lhs (fork0_outs_0),
    .lhs_valid (fork0_outs_0_valid),
    .lhs_ready (fork0_outs_0_ready),
    .rhs (extsi0_outs),
    .rhs_valid (extsi0_outs_valid),
    .rhs_ready (extsi0_outs_ready),
    .clk (clk),
    .rst (rst),
    .result (shrui0_result),
    .result_valid (shrui0_result_valid),
    .result_ready (shrui0_result_ready)
  );

  tehb #(.DATA_TYPE(64)) buffer1(
    .ins (select0_result),
    .ins_valid (select0_result_valid),
    .ins_ready (select0_result_ready),
    .clk (clk),
    .rst (rst),
    .outs (buffer1_outs),
    .outs_valid (buffer1_outs_valid),
    .outs_ready (buffer1_outs_ready)
  );

  xori #(.DATA_TYPE(64)) xori0(
    .lhs (shrui0_result),
    .lhs_valid (shrui0_result_valid),
    .lhs_ready (shrui0_result_ready),
    .rhs (buffer1_outs),
    .rhs_valid (buffer1_outs_valid),
    .rhs_ready (buffer1_outs_ready),
    .clk (clk),
    .rst (rst),
    .result (xori0_result),
    .result_valid (xori0_result_valid),
    .result_ready (xori0_result_ready)
  );

endmodule
