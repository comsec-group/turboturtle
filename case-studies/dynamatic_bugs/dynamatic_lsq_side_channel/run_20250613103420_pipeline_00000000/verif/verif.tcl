# auto exit on error
proc exit_if_error {} {
if [get_message -number error] {
    exit 1 -force
}
    after 10000 exit_if_error
}
exit_if_error

# start with a clean project
clear -all
set_reset_effort high
set_cmd_time_limit 30m
set_elab_time_limit 30m
set_prove_time_limit 30m

# analyze and elaborate the design
analyze -sv17 -ignore_embedded_psl  rtl/handshake_cmpi_0.v
analyze -sv17 -ignore_embedded_psl  rtl/store.v
analyze -sv17 -ignore_embedded_psl  rtl/handshake_constant_2.v
analyze -sv17 -ignore_embedded_psl  rtl/elastic_fifo_inner_dataless.v
analyze -sv17 -ignore_embedded_psl  rtl/cond_br.v
analyze -sv17 -ignore_embedded_psl  rtl/tfifo.v
analyze -sv17 -ignore_embedded_psl  rtl/fork_type.v
analyze -sv17 -ignore_embedded_psl  rtl/mysecretfunction.v
analyze -sv17 -ignore_embedded_psl  rtl/handshake_lsq_lsq1.v
analyze -sv17 -ignore_embedded_psl  rtl/fork_dataless.v
analyze -sv17 -ignore_embedded_psl  rtl/elastic_fifo_inner.v
analyze -sv17 -ignore_embedded_psl  rtl/cond_br_dataless.v
analyze -sv17 -ignore_embedded_psl  rtl/extsi.v
analyze -sv17 -ignore_embedded_psl  rtl/join_type.v
analyze -sv17 -ignore_embedded_psl  rtl/tehb.v
analyze -sv17 -ignore_embedded_psl  rtl/oehb.v
analyze -sv17 -ignore_embedded_psl  rtl/sink.v
analyze -sv17 -ignore_embedded_psl  rtl/handshake_constant_0.v
analyze -sv17 -ignore_embedded_psl  rtl/eager_fork_register_block.v
analyze -sv17 -ignore_embedded_psl  rtl/logic.v
analyze -sv17 -ignore_embedded_psl  rtl/trunci.v
analyze -sv17 -ignore_embedded_psl  rtl/tfifo_dataless.v
analyze -sv17 -ignore_embedded_psl  rtl/addi.v
analyze -sv17 -ignore_embedded_psl  rtl/control_merge_dataless.v
analyze -sv17 -ignore_embedded_psl  rtl/mux.v
analyze -sv17 -ignore_embedded_psl  rtl/mem_to_bram.v
analyze -sv17 -ignore_embedded_psl  rtl/source.v
analyze -sv17 -ignore_embedded_psl  rtl/merge_dataless.v
analyze -sv17 -ignore_embedded_psl  rtl/tehb_dataless.v
analyze -sv17 -ignore_embedded_psl  rtl/handshake_constant_1.v
analyze -sv17 -ignore_embedded_psl  rtl/oehb_dataless.v
analyze -sv17 -ignore_embedded_psl  rtl/load.v
analyze -sv17 tb.sv
elaborate -top tb -disable_auto_bbox 

# specify the global clock and reset
clock clk
reset -init_state init_states.txt

# main side-channel assertion
assert {@(posedge clk) disable iff (rst) ( a_out0_valid == b_out0_valid )} -name no_sidechannel

# cover that design can finish execution
cover {@(posedge clk) disable iff (rst) ( a_out0_valid )} -name cover_done_a
cover {@(posedge clk) disable iff (rst) ( b_out0_valid )} -name cover_done_b

# address taint assertion
assert {@(posedge clk) disable iff (rst) ( a_fn_arg_arrout_1_loadEn == b_fn_arg_arrout_1_loadEn )} -name address_enable_signals_equal_0
assert {@(posedge clk) disable iff (rst || ~( a_fn_arg_arrout_1_loadEn && b_fn_arg_arrout_1_loadEn )) ( a_fn_arg_arrout_1_loadAddr == b_fn_arg_arrout_1_loadAddr )} -name no_address_taint_0
assert {@(posedge clk) disable iff (rst) ( a_fn_arg_arrout_1_storeEn == b_fn_arg_arrout_1_storeEn )} -name address_enable_signals_equal_1
assert {@(posedge clk) disable iff (rst || ~( a_fn_arg_arrout_1_storeEn && b_fn_arg_arrout_1_storeEn )) ( a_fn_arg_arrout_1_storeAddr == b_fn_arg_arrout_1_storeAddr )} -name no_address_taint_1

# stable inputs for the computiation
assume -constant { a_fn_arg_0_secret }
assume -constant { b_fn_arg_0_secret }
assume -constant { fn_arg_1 }
assume -constant { fn_arg_arrout_1_loadData }

# reset assumes
assume -bound 10 {rst == 1'b1} -name reset_design
assume {rst == 1'b1 [*10] |=> always rst == 1'b0} -name no_more_reset
set undriven_list [get_design_info -list undriven]
if {{a_mysecretfunction.buffer1.fifo.Memory[0]} in $undriven_list } {assume {a_mysecretfunction.buffer1.fifo.Memory[0] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer1.fifo.Memory[0] == 0}}
if {{b_mysecretfunction.buffer1.fifo.Memory[0]} in $undriven_list } {assume {b_mysecretfunction.buffer1.fifo.Memory[0] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer1.fifo.Memory[0] == 0}}
if {{a_mysecretfunction.buffer1.fifo.Memory[1]} in $undriven_list } {assume {a_mysecretfunction.buffer1.fifo.Memory[1] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer1.fifo.Memory[1] == 0}}
if {{b_mysecretfunction.buffer1.fifo.Memory[1]} in $undriven_list } {assume {b_mysecretfunction.buffer1.fifo.Memory[1] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer1.fifo.Memory[1] == 0}}
if {{a_mysecretfunction.buffer1.fifo.Memory[2]} in $undriven_list } {assume {a_mysecretfunction.buffer1.fifo.Memory[2] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer1.fifo.Memory[2] == 0}}
if {{b_mysecretfunction.buffer1.fifo.Memory[2]} in $undriven_list } {assume {b_mysecretfunction.buffer1.fifo.Memory[2] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer1.fifo.Memory[2] == 0}}
if {{a_mysecretfunction.buffer1.fifo.Memory[3]} in $undriven_list } {assume {a_mysecretfunction.buffer1.fifo.Memory[3] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer1.fifo.Memory[3] == 0}}
if {{b_mysecretfunction.buffer1.fifo.Memory[3]} in $undriven_list } {assume {b_mysecretfunction.buffer1.fifo.Memory[3] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer1.fifo.Memory[3] == 0}}
if {{a_mysecretfunction.buffer1.fifo.Memory[4]} in $undriven_list } {assume {a_mysecretfunction.buffer1.fifo.Memory[4] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer1.fifo.Memory[4] == 0}}
if {{b_mysecretfunction.buffer1.fifo.Memory[4]} in $undriven_list } {assume {b_mysecretfunction.buffer1.fifo.Memory[4] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer1.fifo.Memory[4] == 0}}
if {{a_mysecretfunction.buffer1.fifo.Memory[5]} in $undriven_list } {assume {a_mysecretfunction.buffer1.fifo.Memory[5] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer1.fifo.Memory[5] == 0}}
if {{b_mysecretfunction.buffer1.fifo.Memory[5]} in $undriven_list } {assume {b_mysecretfunction.buffer1.fifo.Memory[5] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer1.fifo.Memory[5] == 0}}
if {{a_mysecretfunction.buffer1.fifo.Memory[6]} in $undriven_list } {assume {a_mysecretfunction.buffer1.fifo.Memory[6] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer1.fifo.Memory[6] == 0}}
if {{b_mysecretfunction.buffer1.fifo.Memory[6]} in $undriven_list } {assume {b_mysecretfunction.buffer1.fifo.Memory[6] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer1.fifo.Memory[6] == 0}}
if {{a_mysecretfunction.buffer1.fifo.Memory[7]} in $undriven_list } {assume {a_mysecretfunction.buffer1.fifo.Memory[7] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer1.fifo.Memory[7] == 0}}
if {{b_mysecretfunction.buffer1.fifo.Memory[7]} in $undriven_list } {assume {b_mysecretfunction.buffer1.fifo.Memory[7] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer1.fifo.Memory[7] == 0}}
if {{a_mysecretfunction.buffer12.fifo.Memory[0]} in $undriven_list } {assume {a_mysecretfunction.buffer12.fifo.Memory[0] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer12.fifo.Memory[0] == 0}}
if {{b_mysecretfunction.buffer12.fifo.Memory[0]} in $undriven_list } {assume {b_mysecretfunction.buffer12.fifo.Memory[0] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer12.fifo.Memory[0] == 0}}
if {{a_mysecretfunction.buffer12.fifo.Memory[1]} in $undriven_list } {assume {a_mysecretfunction.buffer12.fifo.Memory[1] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer12.fifo.Memory[1] == 0}}
if {{b_mysecretfunction.buffer12.fifo.Memory[1]} in $undriven_list } {assume {b_mysecretfunction.buffer12.fifo.Memory[1] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer12.fifo.Memory[1] == 0}}
if {{a_mysecretfunction.buffer12.fifo.Memory[2]} in $undriven_list } {assume {a_mysecretfunction.buffer12.fifo.Memory[2] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer12.fifo.Memory[2] == 0}}
if {{b_mysecretfunction.buffer12.fifo.Memory[2]} in $undriven_list } {assume {b_mysecretfunction.buffer12.fifo.Memory[2] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer12.fifo.Memory[2] == 0}}
if {{a_mysecretfunction.buffer12.fifo.Memory[3]} in $undriven_list } {assume {a_mysecretfunction.buffer12.fifo.Memory[3] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer12.fifo.Memory[3] == 0}}
if {{b_mysecretfunction.buffer12.fifo.Memory[3]} in $undriven_list } {assume {b_mysecretfunction.buffer12.fifo.Memory[3] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer12.fifo.Memory[3] == 0}}
if {{a_mysecretfunction.buffer12.fifo.Memory[4]} in $undriven_list } {assume {a_mysecretfunction.buffer12.fifo.Memory[4] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer12.fifo.Memory[4] == 0}}
if {{b_mysecretfunction.buffer12.fifo.Memory[4]} in $undriven_list } {assume {b_mysecretfunction.buffer12.fifo.Memory[4] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer12.fifo.Memory[4] == 0}}
if {{a_mysecretfunction.buffer12.fifo.Memory[5]} in $undriven_list } {assume {a_mysecretfunction.buffer12.fifo.Memory[5] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer12.fifo.Memory[5] == 0}}
if {{b_mysecretfunction.buffer12.fifo.Memory[5]} in $undriven_list } {assume {b_mysecretfunction.buffer12.fifo.Memory[5] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer12.fifo.Memory[5] == 0}}
if {{a_mysecretfunction.buffer12.fifo.Memory[6]} in $undriven_list } {assume {a_mysecretfunction.buffer12.fifo.Memory[6] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer12.fifo.Memory[6] == 0}}
if {{b_mysecretfunction.buffer12.fifo.Memory[6]} in $undriven_list } {assume {b_mysecretfunction.buffer12.fifo.Memory[6] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer12.fifo.Memory[6] == 0}}
if {{a_mysecretfunction.buffer2.fifo.Memory[0]} in $undriven_list } {assume {a_mysecretfunction.buffer2.fifo.Memory[0] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer2.fifo.Memory[0] == 0}}
if {{b_mysecretfunction.buffer2.fifo.Memory[0]} in $undriven_list } {assume {b_mysecretfunction.buffer2.fifo.Memory[0] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer2.fifo.Memory[0] == 0}}
if {{a_mysecretfunction.buffer7.fifo.Memory[0]} in $undriven_list } {assume {a_mysecretfunction.buffer7.fifo.Memory[0] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer7.fifo.Memory[0] == 0}}
if {{b_mysecretfunction.buffer7.fifo.Memory[0]} in $undriven_list } {assume {b_mysecretfunction.buffer7.fifo.Memory[0] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer7.fifo.Memory[0] == 0}}
if {{a_mysecretfunction.buffer7.fifo.Memory[1]} in $undriven_list } {assume {a_mysecretfunction.buffer7.fifo.Memory[1] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer7.fifo.Memory[1] == 0}}
if {{b_mysecretfunction.buffer7.fifo.Memory[1]} in $undriven_list } {assume {b_mysecretfunction.buffer7.fifo.Memory[1] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer7.fifo.Memory[1] == 0}}
if {{a_mysecretfunction.buffer7.fifo.Memory[2]} in $undriven_list } {assume {a_mysecretfunction.buffer7.fifo.Memory[2] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer7.fifo.Memory[2] == 0}}
if {{b_mysecretfunction.buffer7.fifo.Memory[2]} in $undriven_list } {assume {b_mysecretfunction.buffer7.fifo.Memory[2] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer7.fifo.Memory[2] == 0}}
if {{a_mysecretfunction.buffer15.fifo.Memory[0]} in $undriven_list } {assume {a_mysecretfunction.buffer15.fifo.Memory[0] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer15.fifo.Memory[0] == 0}}
if {{b_mysecretfunction.buffer15.fifo.Memory[0]} in $undriven_list } {assume {b_mysecretfunction.buffer15.fifo.Memory[0] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer15.fifo.Memory[0] == 0}}
if {{a_mysecretfunction.buffer11.fifo.Memory[0]} in $undriven_list } {assume {a_mysecretfunction.buffer11.fifo.Memory[0] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer11.fifo.Memory[0] == 0}}
if {{b_mysecretfunction.buffer11.fifo.Memory[0]} in $undriven_list } {assume {b_mysecretfunction.buffer11.fifo.Memory[0] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer11.fifo.Memory[0] == 0}}
if {{a_mysecretfunction.buffer11.fifo.Memory[1]} in $undriven_list } {assume {a_mysecretfunction.buffer11.fifo.Memory[1] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer11.fifo.Memory[1] == 0}}
if {{b_mysecretfunction.buffer11.fifo.Memory[1]} in $undriven_list } {assume {b_mysecretfunction.buffer11.fifo.Memory[1] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer11.fifo.Memory[1] == 0}}
if {{a_mysecretfunction.buffer11.fifo.Memory[2]} in $undriven_list } {assume {a_mysecretfunction.buffer11.fifo.Memory[2] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer11.fifo.Memory[2] == 0}}
if {{b_mysecretfunction.buffer11.fifo.Memory[2]} in $undriven_list } {assume {b_mysecretfunction.buffer11.fifo.Memory[2] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer11.fifo.Memory[2] == 0}}
if {{a_mysecretfunction.buffer11.fifo.Memory[3]} in $undriven_list } {assume {a_mysecretfunction.buffer11.fifo.Memory[3] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer11.fifo.Memory[3] == 0}}
if {{b_mysecretfunction.buffer11.fifo.Memory[3]} in $undriven_list } {assume {b_mysecretfunction.buffer11.fifo.Memory[3] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer11.fifo.Memory[3] == 0}}
if {{a_mysecretfunction.buffer11.fifo.Memory[4]} in $undriven_list } {assume {a_mysecretfunction.buffer11.fifo.Memory[4] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer11.fifo.Memory[4] == 0}}
if {{b_mysecretfunction.buffer11.fifo.Memory[4]} in $undriven_list } {assume {b_mysecretfunction.buffer11.fifo.Memory[4] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer11.fifo.Memory[4] == 0}}
if {{a_mysecretfunction.buffer11.fifo.Memory[5]} in $undriven_list } {assume {a_mysecretfunction.buffer11.fifo.Memory[5] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer11.fifo.Memory[5] == 0}}
if {{b_mysecretfunction.buffer11.fifo.Memory[5]} in $undriven_list } {assume {b_mysecretfunction.buffer11.fifo.Memory[5] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer11.fifo.Memory[5] == 0}}
if {{a_mysecretfunction.buffer11.fifo.Memory[6]} in $undriven_list } {assume {a_mysecretfunction.buffer11.fifo.Memory[6] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer11.fifo.Memory[6] == 0}}
if {{b_mysecretfunction.buffer11.fifo.Memory[6]} in $undriven_list } {assume {b_mysecretfunction.buffer11.fifo.Memory[6] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer11.fifo.Memory[6] == 0}}
if {{a_mysecretfunction.buffer8.fifo.Memory[0]} in $undriven_list } {assume {a_mysecretfunction.buffer8.fifo.Memory[0] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer8.fifo.Memory[0] == 0}}
if {{b_mysecretfunction.buffer8.fifo.Memory[0]} in $undriven_list } {assume {b_mysecretfunction.buffer8.fifo.Memory[0] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer8.fifo.Memory[0] == 0}}
if {{a_mysecretfunction.buffer8.fifo.Memory[1]} in $undriven_list } {assume {a_mysecretfunction.buffer8.fifo.Memory[1] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer8.fifo.Memory[1] == 0}}
if {{b_mysecretfunction.buffer8.fifo.Memory[1]} in $undriven_list } {assume {b_mysecretfunction.buffer8.fifo.Memory[1] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer8.fifo.Memory[1] == 0}}
if {{a_mysecretfunction.buffer8.fifo.Memory[2]} in $undriven_list } {assume {a_mysecretfunction.buffer8.fifo.Memory[2] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer8.fifo.Memory[2] == 0}}
if {{b_mysecretfunction.buffer8.fifo.Memory[2]} in $undriven_list } {assume {b_mysecretfunction.buffer8.fifo.Memory[2] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer8.fifo.Memory[2] == 0}}
if {{a_mysecretfunction.buffer8.fifo.Memory[3]} in $undriven_list } {assume {a_mysecretfunction.buffer8.fifo.Memory[3] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer8.fifo.Memory[3] == 0}}
if {{b_mysecretfunction.buffer8.fifo.Memory[3]} in $undriven_list } {assume {b_mysecretfunction.buffer8.fifo.Memory[3] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer8.fifo.Memory[3] == 0}}
if {{a_mysecretfunction.buffer8.fifo.Memory[4]} in $undriven_list } {assume {a_mysecretfunction.buffer8.fifo.Memory[4] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer8.fifo.Memory[4] == 0}}
if {{b_mysecretfunction.buffer8.fifo.Memory[4]} in $undriven_list } {assume {b_mysecretfunction.buffer8.fifo.Memory[4] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer8.fifo.Memory[4] == 0}}
if {{a_mysecretfunction.buffer8.fifo.Memory[5]} in $undriven_list } {assume {a_mysecretfunction.buffer8.fifo.Memory[5] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer8.fifo.Memory[5] == 0}}
if {{b_mysecretfunction.buffer8.fifo.Memory[5]} in $undriven_list } {assume {b_mysecretfunction.buffer8.fifo.Memory[5] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer8.fifo.Memory[5] == 0}}
if {{a_mysecretfunction.buffer8.fifo.Memory[6]} in $undriven_list } {assume {a_mysecretfunction.buffer8.fifo.Memory[6] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer8.fifo.Memory[6] == 0}}
if {{b_mysecretfunction.buffer8.fifo.Memory[6]} in $undriven_list } {assume {b_mysecretfunction.buffer8.fifo.Memory[6] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer8.fifo.Memory[6] == 0}}
if {{a_mysecretfunction.buffer16.fifo.Memory[0]} in $undriven_list } {assume {a_mysecretfunction.buffer16.fifo.Memory[0] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer16.fifo.Memory[0] == 0}}
if {{b_mysecretfunction.buffer16.fifo.Memory[0]} in $undriven_list } {assume {b_mysecretfunction.buffer16.fifo.Memory[0] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer16.fifo.Memory[0] == 0}}
if {{a_mysecretfunction.buffer17.fifo.Memory[0]} in $undriven_list } {assume {a_mysecretfunction.buffer17.fifo.Memory[0] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer17.fifo.Memory[0] == 0}}
if {{b_mysecretfunction.buffer17.fifo.Memory[0]} in $undriven_list } {assume {b_mysecretfunction.buffer17.fifo.Memory[0] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer17.fifo.Memory[0] == 0}}
if {{a_mysecretfunction.buffer19.fifo.Memory[0]} in $undriven_list } {assume {a_mysecretfunction.buffer19.fifo.Memory[0] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer19.fifo.Memory[0] == 0}}
if {{b_mysecretfunction.buffer19.fifo.Memory[0]} in $undriven_list } {assume {b_mysecretfunction.buffer19.fifo.Memory[0] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer19.fifo.Memory[0] == 0}}
if {{a_mysecretfunction.buffer19.fifo.Memory[1]} in $undriven_list } {assume {a_mysecretfunction.buffer19.fifo.Memory[1] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer19.fifo.Memory[1] == 0}}
if {{b_mysecretfunction.buffer19.fifo.Memory[1]} in $undriven_list } {assume {b_mysecretfunction.buffer19.fifo.Memory[1] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer19.fifo.Memory[1] == 0}}
if {{a_mysecretfunction.buffer19.fifo.Memory[2]} in $undriven_list } {assume {a_mysecretfunction.buffer19.fifo.Memory[2] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer19.fifo.Memory[2] == 0}}
if {{b_mysecretfunction.buffer19.fifo.Memory[2]} in $undriven_list } {assume {b_mysecretfunction.buffer19.fifo.Memory[2] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer19.fifo.Memory[2] == 0}}
if {{a_mysecretfunction.buffer19.fifo.Memory[3]} in $undriven_list } {assume {a_mysecretfunction.buffer19.fifo.Memory[3] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer19.fifo.Memory[3] == 0}}
if {{b_mysecretfunction.buffer19.fifo.Memory[3]} in $undriven_list } {assume {b_mysecretfunction.buffer19.fifo.Memory[3] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer19.fifo.Memory[3] == 0}}
if {{a_mysecretfunction.buffer19.fifo.Memory[4]} in $undriven_list } {assume {a_mysecretfunction.buffer19.fifo.Memory[4] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer19.fifo.Memory[4] == 0}}
if {{b_mysecretfunction.buffer19.fifo.Memory[4]} in $undriven_list } {assume {b_mysecretfunction.buffer19.fifo.Memory[4] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer19.fifo.Memory[4] == 0}}
if {{a_mysecretfunction.buffer19.fifo.Memory[5]} in $undriven_list } {assume {a_mysecretfunction.buffer19.fifo.Memory[5] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer19.fifo.Memory[5] == 0}}
if {{b_mysecretfunction.buffer19.fifo.Memory[5]} in $undriven_list } {assume {b_mysecretfunction.buffer19.fifo.Memory[5] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer19.fifo.Memory[5] == 0}}
if {{a_mysecretfunction.buffer19.fifo.Memory[6]} in $undriven_list } {assume {a_mysecretfunction.buffer19.fifo.Memory[6] == 0}} else {assume -bound 10 {a_mysecretfunction.buffer19.fifo.Memory[6] == 0}}
if {{b_mysecretfunction.buffer19.fifo.Memory[6]} in $undriven_list } {assume {b_mysecretfunction.buffer19.fifo.Memory[6] == 0}} else {assume -bound 10 {b_mysecretfunction.buffer19.fifo.Memory[6] == 0}}

# missing module assumes

# prove the properties
prove -all

# export report
report -task . -csv -file report.csv
# export the violation traces
set_trace_optimization standard
exec mkdir cex_waves
foreach prop [get_property_list -include {status {cex}}] {
  set name [string range $prop 12 end]
  visualize -batch -violation -property $prop -window 0
  visualize -save -force -vcd cex_waves/$name.vcd -window 0
}

exit 0
