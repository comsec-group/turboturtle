module tb;

    logic [7:0] a_fn_arg_0_secret;
    logic [7:0] b_fn_arg_0_secret;
    logic fn_arg_0_secret_valid;
    logic [7:0] fn_arg_1;
    logic fn_arg_1_valid;
    logic [7:0] fn_arg_arrout_1_loadData;
    logic fn_arg_arrout_1_start_valid;
    logic start_valid;
    logic clk;
    logic rst;
    logic out0_ready;
    logic fn_arg_arrout_1_end_ready;
    logic end_ready;
    logic a_fn_arg_0_secret_ready;
    logic b_fn_arg_0_secret_ready;
    logic a_fn_arg_1_ready;
    logic b_fn_arg_1_ready;
    logic a_fn_arg_arrout_1_start_ready;
    logic b_fn_arg_arrout_1_start_ready;
    logic a_start_ready;
    logic b_start_ready;
    logic [7:0] a_out0;
    logic [7:0] b_out0;
    logic a_out0_valid;
    logic b_out0_valid;
    logic a_fn_arg_arrout_1_end_valid;
    logic b_fn_arg_arrout_1_end_valid;
    logic a_end_valid;
    logic b_end_valid;
    logic a_fn_arg_arrout_1_loadEn;
    logic b_fn_arg_arrout_1_loadEn;
    logic [7:0] a_fn_arg_arrout_1_loadAddr;
    logic [7:0] b_fn_arg_arrout_1_loadAddr;
    logic a_fn_arg_arrout_1_storeEn;
    logic b_fn_arg_arrout_1_storeEn;
    logic [7:0] a_fn_arg_arrout_1_storeAddr;
    logic [7:0] b_fn_arg_arrout_1_storeAddr;
    logic [7:0] a_fn_arg_arrout_1_storeData;
    logic [7:0] b_fn_arg_arrout_1_storeData;

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
        .fn_arg_arrout_1_storeData()
    );

    initial begin
        $dumpfile("traces.fst");
        $dumpvars();

        // init
        clk = 1'b0;
        start_valid = 1'b0;
        fn_arg_0_secret_valid = 1'b0;
        fn_arg_1_valid = 1'b0;
        fn_arg_arrout_1_start_valid = 1'b0;

        out0_ready = 1'b1;
        fn_arg_arrout_1_end_ready = 1'b1;
        end_ready = 1'b1;

        a_fn_arg_0_secret = $random();
        b_fn_arg_0_secret = $random();
        fn_arg_1 = $random();
        fn_arg_arrout_1_loadData = $random();


        $display("a_secret: 0x%0h, b_secret: 0x%0h", a_fn_arg_0_secret, b_fn_arg_0_secret);

        // reset for 3 clock cycles
        rst = 1'b1;
        #6 
        rst = 1'b0;
        start_valid = 1'b1;
        fn_arg_0_secret_valid = 1'b1;
        fn_arg_1_valid = 1'b1;
        fn_arg_arrout_1_start_valid = 1'b1;
        #2
        start_valid = 1'b0;
        fn_arg_0_secret_valid = 1'b0;
        fn_arg_1_valid = 1'b0;
        fn_arg_arrout_1_start_valid = 1'b0;

    end

    always #1 begin
        clk =~ clk;
    end

    always @(posedge clk) begin
        fn_arg_arrout_1_loadData = $random();

        if (!rst) begin
            
            if (a_mysecretfunction.out0_valid != b_out0_valid) begin
                $display("Timing Side-Channel!");
            end

            // if (a_fn_arg_arrout_1_loadAddr != b_fn_arg_arrout_1_loadAddr) begin
            //     $display("Memory Address Taint!");
            // end

            // if (a_fn_arg_arrout_1_storeAddr != b_fn_arg_arrout_1_storeAddr) begin
            //     $display("Memory Address Taint!");
            // end

            if (a_out0_valid || b_out0_valid) begin
                #4 $finish();
            end
        end
    end


endmodule
