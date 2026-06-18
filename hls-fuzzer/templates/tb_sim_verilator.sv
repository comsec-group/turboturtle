`timescale 1ns / 1ps
module tb;

    integer a_design_iterations_d, a_design_iterations_q;
    integer b_design_iterations_d, b_design_iterations_q;

    logic first_start;

    // control ports
    logic {{ clock }};
    logic {{ reset }};

    logic a_{{ start }};
    logic b_{{ start }};

    logic a_{{ ready }};
    logic b_{{ ready }};

    // public data ports
    {% for port in public_data_ports %}
    logic {{ port.size }} a_{{ port.name }};
    logic {{ port.size }} a_{{ port.name }}_mem [0:4];
    logic {{ port.size }} b_{{ port.name }};
    logic {{ port.size }} b_{{ port.name }}_mem [0:4];
    {% endfor %}
    // secret data ports
    {% for port in secret_data_ports %}
    logic {{ port.size }} a_{{ port.name }};
    logic {{ port.size }} a_{{ port.name }}_mem [0:4];
    logic {{ port.size }} b_{{ port.name }};
    logic {{ port.size }} b_{{ port.name }}_mem [0:4];
    {% endfor %}

    logic a_start_again_d, a_start_again_q;
    logic b_start_again_d, b_start_again_q;

    logic a_is_running;
    logic b_is_running;

    logic a_finish_sim_d, a_finish_sim_q;
    logic b_finish_sim_d, b_finish_sim_q;
    logic ts_detected_d, ts_detected_q;

    {{ top_fn_name }} a_{{ top_fn_name }}(
        {% for port in public_data_ports %}.{{ port }}(a_{{ port }}),
        {% endfor %}
        {% for port in secret_data_ports %}.{{ port }}(a_{{ port }}),
        {% endfor %}
        .{{ clock }}({{ clock }}),
        .{{ reset }}({{ reset }}),
        .{{ start }}(a_{{ start }}),
        .{{ ready }}(a_{{ ready }})
    );
    {{ top_fn_name }} b_{{ top_fn_name }}(
        {% for port in public_data_ports %}.{{ port }}(b_{{ port }}),
        {% endfor %}
        {% for port in secret_data_ports %}.{{ port }}(b_{{ port }}),
        {% endfor %}
        .{{ clock }}({{ clock }}),
        .{{ reset }}({{ reset }}),
        .{{ start }}(b_{{ start }}),
        .{{ ready }}(b_{{ ready }})
    );

    assign a_{{ start }} = a_start_again_q;
    assign b_{{ start }} = b_start_again_q;

    initial begin
        $dumpfile("traces.vcd");
        $dumpvars();

        {{ clock }} = 1'b1;
        {{ reset }} = {{ reset_value }};
        first_start = 1'b0;

        {% for port in public_data_ports %}
        $readmemh("{{ port }}.mem", a_{{ port }}_mem);
        $readmemh("{{ port }}.mem", b_{{ port }}_mem);
        {% endfor %}
        {% for port in secret_data_ports %}
        $readmemh("a_{{ port }}.mem", a_{{ port }}_mem);
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
        a_start_again_d = 1'b0;
        b_start_again_d = 1'b0;

        a_design_iterations_d = a_design_iterations_q;
        b_design_iterations_d = b_design_iterations_q;

        a_finish_sim_d = 1'b0;
        b_finish_sim_d = 1'b0;
        ts_detected_d = 1'b0;

        if (a_finish_sim_q || b_finish_sim_q) begin
            $display("[success-finish] Design can finish!");
            $finish();
        end

        if (ts_detected_q) begin
            $display("[bug-ts] Timing side-channel detected!");
            $finish();
        end

        if (first_start) begin
            a_start_again_d = 1'b1;
            b_start_again_d = 1'b1;
        end

        // TS property
        if (a_{{ top_fn_name }}.{{ done }} != b_{{ top_fn_name }}.{{ done }}) begin
            ts_detected_d = 1'b1;
        end

        if (a_{{ top_fn_name }}.{{ ready }} && !a_is_running) begin
            if (a_design_iterations_q < 4) begin
                // restart design (without reset)
                a_start_again_d = 1'b1;
                a_design_iterations_d = a_design_iterations_q + 1;
                $display("[success-finish] Design can finish!");
            end else begin
                // end simulation
                a_finish_sim_d = 1'b1;
            end
        end

        if (b_{{ top_fn_name }}.{{ ready }} && !b_is_running) begin
            if (b_design_iterations_q < 4) begin
                // restart design (without reset)
                b_start_again_d = 1'b1;
                b_design_iterations_d = b_design_iterations_q + 1;
                $display("[success-finish] Design can finish!");
            end else begin
                // end simulation
                b_finish_sim_d = 1'b1;
            end
        end
    end

    always_latch begin
        if (a_{{ start }}) begin
            {% for port in public_data_ports %}
            a_{{ port }} = a_{{ port }}_mem[a_design_iterations_q];
            {% endfor %}
            {% for port in secret_data_ports %}
            a_{{ port }} = a_{{ port }}_mem[a_design_iterations_q];
            {% endfor %}
            {% if debug %}
            {% for port in data_ports %}$display("[debug-random-input] %d", {{ port.name }});
            {% endfor %}
            {% endif %}

            a_is_running = 1'b1;
        end

        if (b_{{ start }}) begin
            {% for port in public_data_ports %}
            b_{{ port }} = b_{{ port }}_mem[b_design_iterations_q];
            {% endfor %}
            {% for port in secret_data_ports %}
            b_{{ port }} = b_{{ port }}_mem[b_design_iterations_q];
            {% endfor %}
            {% if debug %}
            {% for port in data_ports %}$display("[debug-random-input] %d", {{ port.name }});
            {% endfor %}
            {% endif %}

            b_is_running = 1'b1;
        end

        if (a_{{ top_fn_name }}.{{ done }} || ({{ reset }} == {{ reset_value }})) begin
            a_is_running = 1'b0;
        end

        if (b_{{ top_fn_name }}.{{ done }} || ({{ reset }} == {{ reset_value }})) begin
            b_is_running = 1'b0;
        end
    end

    always_ff @(posedge {{ clock }}) begin
        if ({{ reset }} == {{ not_reset_value }}) begin
            a_start_again_q <= a_start_again_d;
            b_start_again_q <= b_start_again_d;

            a_design_iterations_q <= a_design_iterations_d;
            b_design_iterations_q <= b_design_iterations_d;

            a_finish_sim_q <= a_finish_sim_d;
            b_finish_sim_q <= b_finish_sim_d;
            ts_detected_q <= ts_detected_d;
        end else begin
            a_start_again_q <= 1'b0;
            b_start_again_q <= 1'b0;

            a_design_iterations_q <= 0;
            b_design_iterations_q <= 0;

            a_finish_sim_q <= 1'b0;
            b_finish_sim_q <= 1'b0;
            ts_detected_q <= 1'b0;
        end
    end

    always #1 begin
        {{ clock }} =~ {{ clock }};
    end

endmodule
