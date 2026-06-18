// simple formal testbench
module tb (
  // interface in:
  {% for interface in interface_inputs %}input {{ interface.signal_name }},
  {% endfor %}
  // interface out:
  {% for interface in interface_outputs %}
    output a_{{ interface.signal_name }},
    output b_{{ interface.signal_name }},
  {% endfor %}
  // data in:
  {% for input in data_inputs %}
    {% if input.secret %}
      input {{ input.size }} a_{{ input.signal_name }},
      input {{ input.size }} b_{{ input.signal_name }},
    {% else %}
      input {{ input.size }} {{ input.signal_name }},
    {% endif %}
  {% endfor %}
  // data out:
  {% for output in data_outputs %}
    output {{ output.size }} a_{{ output.signal_name }},
    output {{ output.size }} b_{{ output.signal_name }}{% if not loop.last %},{% endif %}
  {% endfor %}
);

  {% for inst_num in ["a", "b"] %}
  {{ dut_name }} i_{{ dut_name }}_{{ inst_num }}(
    // interface in:
    {% for interface in interface_inputs %}.{{ interface.signal_name }}({{ interface.signal_name }}),
    {% endfor %}
    // interface out:
    {% for interface in interface_outputs %}.{{ interface.signal_name }}({{ inst_num }}_{{ interface.signal_name }}),
    {% endfor %}
    // data in:
    {% for input in data_inputs %}
      {% if input.secret %}
      .{{ input.signal_name }}({{ inst_num }}_{{ input.signal_name }}),
      {% else %}
      .{{ input.signal_name }}({{ input.signal_name }}),
      {% endif %}
    {% endfor %}
    // data out:
    {% for output in data_outputs %}
      .{{ output.signal_name }}({{ inst_num }}_{{ output.signal_name }}){% if not loop.last %},{% endif %}
    {% endfor %}
  );
  {% endfor %}

  initial assume({{ reset.signal_name }}); 

  always @(posedge {{ clock.signal_name }}) begin
    if (!{{ reset.signal_name }}) begin
      no_side_channel: assert property (a_{{ done.signal_name }} == b_{{ done.signal_name }});
    end
  end

endmodule
