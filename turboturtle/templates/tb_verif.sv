// simple formal testbench
module tb (
  {% for port in tb_ports %}{{ port }}{% if not loop.last %},{% endif %}
  {% endfor %}
);

  {{ top_fn_name }} a_{{ top_fn_name }}(
    {% for port in inst_a_ports %}.{{ port.altname }}({{ port.name }}){% if not loop.last %},{% endif %}
    {% endfor %}
  );
  
  {{ top_fn_name }} b_{{ top_fn_name }}(
    {% for port in inst_b_ports %}.{{ port.altname }}({{ port.name }}){% if not loop.last %},{% endif %}
    {% endfor %}
  );

  `ifdef FORMAL

  initial assume({{ reset_name }});

  always @(posedge {{ clock_name }}) begin
    {% for port in top_fn_ports %}assume($stable({{ port.name }}));
    {% endfor %}
    if (!{{ reset_name }}) begin
      a_does_finish: cover(a_{{ done_name }});
      b_does_finish: cover(b_{{ done_name }});
      no_sidechannel: assert(a_{{ done_name }} == b_{{ done_name }});
    end
  end
  `endif

endmodule
