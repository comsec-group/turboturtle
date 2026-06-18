`timescale 1ns / 1ps
module tb;

    integer design_iterations_d, design_iterations_q;
    logic first_start;

    // control ports
    logic {{ clock }};
    logic {{ reset }};
    logic {{ start }};

    // public data ports
    {% for port in public_data_ports %}logic {{ port.size }} {{ port.name }};
    logic {{ port.size }} {{ port.name }}_mem [0:4];
    {% endfor %}
    // secret data ports
    {% for port in secret_data_ports %}
    logic {{ port.size }} a_{{ port.name }};
    logic {{ port.size }} a_{{ port.name }}_mem [0:4];
    logic {{ port.size }} b_{{ port.name }};
    logic {{ port.size }} b_{{ port.name }}_mem [0:4];
    {% endfor %}

    {% for port in data_ready_ports %}logic {{ port.name }};
    {% endfor %}
    {% for port in data_valid_ports %}logic {{ port.name }};
    {% endfor %}

    logic start_again_0_d, start_again_0_q;
    logic start_again_1_d, start_again_1_q;
    logic start_again_2_d, start_again_2_q;
    logic finish_sim_d, finish_sim_q;
    logic ts_detected_d, ts_detected_q;

    {{ top_fn_name }} a_{{ top_fn_name }}(
        {% for port in public_data_ports %}.{{ port }}({{ port }}),
        {% endfor %}
        {% for port in secret_data_ports %}.{{ port }}(a_{{ port }}),
        {% endfor %}
        .{{ clock }}({{ clock }}),
        .{{ reset }}({{ reset }}),
        .{{ start }}({{ start }})
    );
    {{ top_fn_name }} b_{{ top_fn_name }}(
        {% for port in public_data_ports %}.{{ port }}({{ port }}),
        {% endfor %}
        {% for port in secret_data_ports %}.{{ port }}(b_{{ port }}),
        {% endfor %}
        .{{ clock }}({{ clock }}),
        .{{ reset }}({{ reset }}),
        .{{ start }}({{ start }})
    );

    assign {{ start }} = start_again_2_q;

    initial begin
        $dumpfile("traces.vcd");
        $dumpvars();

        {{ clock }} = 1'b1;
        {{ reset }} = {{ reset_value }};
        first_start = 1'b0;

        {% for port in public_data_ports %}$readmemh("{{ port }}.mem", {{ port }}_mem);
        {% endfor %}
        {% for port in secret_data_ports %}$readmemh("a_{{ port }}.mem", a_{{ port }}_mem);
        $readmemh("b_{{ port }}.mem", b_{{ port }}_mem);
        {% endfor %}

        {% for port in data_ready_ports %}{{ port.name }} = 1'b1;
        {% endfor %}
        {% for port in data_valid_ports %}{{ port.name }} = 1'b1;
        {% endfor %}

        #6
        {{ reset }} = {{ not_reset_value }};
        first_start = 1'b1;
        #2
        first_start = 1'b0;

        // timeout
        #{{ sim_timeout }}
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

        if (a_{{ top_fn_name }}.{{ done }} != b_{{ top_fn_name }}.{{ done }}) begin
            ts_detected_d = 1'b1;
        end

        if (a_{{ top_fn_name }}.{{ done }} && b_{{ top_fn_name }}.{{ done }}) begin
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
        if ({{ start }}) begin
            {% for port in public_data_ports %}{{ port }} = {{ port }}_mem[design_iterations_q];
            {% endfor %}
            {% for port in secret_data_ports %}
            a_{{ port }} = a_{{ port }}_mem[design_iterations_q];
            b_{{ port }} = b_{{ port }}_mem[design_iterations_q];
            {% endfor %}
            {% if debug %}
            {% for port in data_ports %}$display("[debug-random-input] %d", {{ port.name }});
            {% endfor %}
            {% endif %}
        end
    end

    always_ff @(posedge {{ clock }}) begin
        if ({{ reset }} == {{ not_reset_value }}) begin
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
        {{ clock }} =~ {{ clock }};
    end

endmodule
