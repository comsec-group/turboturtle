// simple formal testbench
module tb (
  PortDirection.INPUT clock,
  PortDirection.INPUT reset,
  PortDirection.INPUT start_port,
  PortDirection.INPUT [63:0] var_0,
  PortDirection.INPUT [63:0] var_1,
  PortDirection.INPUT [31:0] a_var_2_secret,
  PortDirection.INPUT [31:0] b_var_2_secret,
  PortDirection.INPUT [63:0] a_var_3_secret,
  PortDirection.INPUT [63:0] b_var_3_secret
  
);

  myfunc a_myfunc(
    .clock(clock),
    .reset(reset),
    .start_port(start_port),
    .var_0(var_0),
    .var_1(var_1),
    .var_2_secret(a_var_2_secret),
    .var_3_secret(a_var_3_secret)
    
  );
  
  myfunc b_myfunc(
    .clock(clock),
    .reset(reset),
    .start_port(start_port),
    .var_0(var_0),
    .var_1(var_1),
    .var_2_secret(b_var_2_secret),
    .var_3_secret(b_var_3_secret)
    
  );

  `ifdef FORMAL

  initial assume(reset);

  always @(posedge clock) begin
    
    if (!reset) begin
      a_does_finish: cover(a_done_port);
      b_does_finish: cover(b_done_port);
      no_sidechannel: assert(a_done_port == b_done_port);
    end
  end
  `endif

endmodule