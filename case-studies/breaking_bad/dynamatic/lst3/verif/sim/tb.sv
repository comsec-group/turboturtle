`timescale 1ns / 1ps
module tb;

    integer design_iterations_d, design_iterations_q;
    logic first_start;

    // control ports
    logic clk;
    logic rst;
    logic start_valid;

    // public data ports
    logic [63:0] var_0;
    logic [63:0] var_0_mem [0:4];
        
    // secret data ports
    
    logic [63:0] a_var_1_secret;
    logic [63:0] a_var_1_secret_mem [0:4];
    logic [63:0] b_var_1_secret;
    logic [63:0] b_var_1_secret_mem [0:4];
    
 
    logic out0_ready;
    logic end_ready;
    
    logic var_0_valid;
    logic var_1_secret_valid;
    

    logic start_again_0_d, start_again_0_q;
    logic start_again_1_d, start_again_1_q;
    logic start_again_2_d, start_again_2_q;
    logic finish_sim_d, finish_sim_q;
    logic ts_detected_d, ts_detected_q;

    myfunc a_myfunc(
        .var_0(var_0),
        
        .var_1_secret(a_var_1_secret),
        
        .out0_ready(out0_ready),
        .end_ready(end_ready),
        
        .var_0_valid(var_0_valid),
        .var_1_secret_valid(var_1_secret_valid),
        
        .clk(clk),
        .rst(rst),
        .start_valid(start_valid)
    );
    myfunc b_myfunc(
        .var_0(var_0),
        
        .var_1_secret(b_var_1_secret),
        
        .out0_ready(out0_ready),
        .end_ready(end_ready),
        
        .var_0_valid(var_0_valid),
        .var_1_secret_valid(var_1_secret_valid),
        
        .clk(clk),
        .rst(rst),
        .start_valid(start_valid)
    );

    assign start_valid = start_again_2_q;

    initial begin
        $dumpfile("traces.vcd");
        $dumpvars();

        clk = 1'b1;
        rst = 1'b1;
        first_start = 1'b0;

        $readmemh("var_0.mem", var_0_mem);
        
        $readmemh("a_var_1_secret.mem", a_var_1_secret_mem);
        $readmemh("b_var_1_secret.mem", b_var_1_secret_mem);
        

        out0_ready = 1'b0;
        end_ready = 1'b0;
        
        var_0_valid = 1'b0;
        var_1_secret_valid = 1'b0;
        

        #6
        rst = 1'b0;

        out0_ready = 1'b1;
        end_ready = 1'b1;
        
        var_0_valid = 1'b1;
        var_1_secret_valid = 1'b1;
        

        first_start = 1'b1;
        #2
        first_start = 1'b0;

        // timeout
        #500000000
        $display("[error-timeout] Simulation timeout!");
        $finish();
    end

    always_comb begin
        start_again_0_d = 1'b0;
        start_again_1_d = start_again_0_q;
        start_again_2_d = start_again_1_q;
        design_iterations_d = design_iterations_q;
        finish_sim_d = 1'b0;
        ts_detected_d = 1'b0;

        if (finish_sim_q) begin
            $display("[success-finish] Design can finish!");
            $finish();
        end

        if (ts_detected_q) begin
            $display("[bug-ts] Timing side-channel detected!");
            $finish();
        end

        if (first_start) begin
            start_again_0_d = 1'b1;
        end

        if (a_myfunc.out0_valid != b_myfunc.out0_valid) begin    
            ts_detected_d = 1'b1;
        end

        if (a_myfunc.out0_valid && b_myfunc.out0_valid) begin
            if (design_iterations_q < 4) begin
                // restart design (without reset)
                start_again_0_d = 1'b1;
                design_iterations_d = design_iterations_q + 1;
                $display("[success-finish] Design can finish!");
            end else begin
                // end simulation
                finish_sim_d = 1'b1;
            end
        end
    end

    always_latch begin
        if (start_valid) begin
            var_0 = var_0_mem[design_iterations_q];
            
            
            a_var_1_secret = a_var_1_secret_mem[design_iterations_q];
            b_var_1_secret = b_var_1_secret_mem[design_iterations_q];
            
            
        end
    end

    always_ff @(posedge clk) begin
        if (rst == 1'b0) begin
            start_again_0_q <= start_again_0_d;
            start_again_1_q <= start_again_1_d;
            start_again_2_q <= start_again_2_d;
            design_iterations_q <= design_iterations_d;
            finish_sim_q <= finish_sim_d;
            ts_detected_q <= ts_detected_d;
        end else begin
            start_again_0_q <= 1'b0;
            start_again_1_q <= 1'b0;
            start_again_2_q <= 1'b0;
            design_iterations_q <= 0;
            finish_sim_q <= 1'b0;
            ts_detected_q <= 1'b0;
        end
    end

    always #1 begin
        clk =~ clk;
    end

endmodule