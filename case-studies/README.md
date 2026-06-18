## Vulnerabilities

### General folder structure
A subdirectory that contains TurboTurtle's output (e.g., bambu_bugs/vulnerability1/myfunc) contains the following folders and files:

myfunc.c - The C input file.

report.json - The verification result

logs: Synthesis and simulation (= verification) logs.

synth: The output of the HLS tool. For Bambu, this directory contains a C file called a.c, which contains Bambu's C output after the middleend passes.

verif/sim:

traces.vcd - The VCD waveform obtained from simulating the testbench tb.sv. The testbench instantiates the HLS generated RTL two times and passes different values to the instances for secrets. Non-secret inputs receive the same value in both instances.
For Bambu, a difference between 'a_myfunc.done_port' and 'b_myfunc.done_port' signal a timing side channel.
For Dynamatic, a difference between 'a_myfunc.out0_valid' and 'b_myfunc.out0_valid' signal a timing side channel.

### Testing an input program for a side channel in the generated RTL / Reproducing

The synthesis and verification outputs can be reproduced by TurboTurtle with, e.g., the following command:

```
python start.py custom-program-bambu ../case-studies/bambu_bugs/vulnerability6/float_double_add/myfunc.c myfunc_ae --config=config_bambu.toml
```

The output will be placed into <working_dir>/myfunc. <working_dir> can be configured in TurboTurtle's config.toml.

Example to reproduce vulnerability 8:

```
python start.py --custom-program-bambu benchmarks/bambu_bugs/vulnerability8/read_double_to_float_sc.c myfunc_double_to_float --compiler=I386_CLANG12 --speculative-sdc-scheduling --register-allocation=WEIGHTED_COLORING --module-binding=COLORING --memory-ctrl-type=D00 --sparse-memory=on --do-not-use-asynchronous-memories --rom-duplication --bram-high-latency=4 --device-name=EP2C70F896C6-R --fp-exception-mode=saturation --fp-rounding-mode=nearest_even --fsm-encoding=auto --DSP-fracturing=32 --timing-model=EC --hls-div=nr2
```

Example to reproduce vulnerability 11:

```
/hls-fuzzer$ python start.py --custom-program-dynamatic benchmarks/bambu_bugs/vulnerability11/bug1_minimal.c myfunc
```




### Bambu vulnerabilities

#### Integer division
bambu_bugs/vulnerability1

*div_default_args*: The vulnerable design. The vulnerability can be seen in Bambu's middlened's output [vulnerable_designs/bambu_bugs/vulnerability1/div_default_args/synth/a.c](vulnerable_designs/bambu_bugs/vulnerability1/div_default_args/synth/a.c).
A secret-dependent if statement is inserted.

*div_pipelined*: Adding --pipelining removes the vulnerability. There is no secret-dependent if statement in the middleend's output. We simulated the generated design with 250 000 random inputs and found no cycle divergence.

[Github issue](https://github.com/ferrandi/PandA-bambu/issues/377).


#### Integer modulo
bambu_bugs/vulnerability2

*long_long_int_mod* contains the vulnerable design. *mod_pipelined* contains a fixed design.

[Github issue](https://github.com/ferrandi/PandA-bambu/issues/360).

#### Examples for float/double to/from integer conversions
bambu_bugs/vuleranitlity3

There are some vulnerable designs, and a folder called *float_to_unsigned_int_pipelined*, which shows that --pipelining also fixes this issue.

[Github issue](https://github.com/ferrandi/PandA-bambu/issues/357).

#### Float division
bambu_bugs/vulnerability4

*float_div* contains the vulnerable design, *float_div_pipe_error* attempts to remove the vulnerability by adding `--pipelining`, but the design fails to synthesize.

[Github issue](https://github.com/ferrandi/PandA-bambu/issues/X).

#### Float add
bambu_bugs/vulnerability5

[Github issue](https://github.com/ferrandi/PandA-bambu/issues/X).

#### Float sub
bambu_bugs/vulnerability6

[Github issue](https://github.com/ferrandi/PandA-bambu/issues/X).

#### Float mul
bambu_bugs/vulnerability7

[Github issue](https://github.com/ferrandi/PandA-bambu/issues/X).

#### Double array to float
bambu_bugs/vulnerability8

This directory contains multiple examples to demonstrate the cause of the vulnerability.
The vulnerability is inserted when the parameters in `args_for_sc.txt` are used.

#### Double comparison

Comparison of two double variables causes a timing side channel, when using frontend compiler option `--compiler=I386_CLANG7` (shown in *bambu_bugs/vulnerability12/double_comparison_clang7*)

There are some other examples in *bambu_bugs/vulnerability12* that produce no side channel: Removing the compiler option, adding `--pipelining` or comparing integer values.


##### Vulnerable code
*myfunc_double_to_float* (output corresponding to read_double_to_float_sc.c):
This directory demonstrates the vulnerability.
While individual parts of the input file, or this file combined with the default Bambu arguments, do not lead to a side channel, the particular combination of statements in `read_double_to_float_sc.c` combined with the Bambu arguments printed in the beginning of myfunc_double_to_float/logs/bambu.log lead to RTL that contains a timing side channel vulnerability.

##### Partial code, showing that one statement is not enough to cause this side channel

*myfunc_double_to_double* (output corresponding to read_double_to_double_no_sc.c):
Shows that reading from a double array into a double variable does not generate a side channel with the mentioned Bambu arguments.
While there is an if statement inserted by Bambu's middleend, the condition depends on a constant.

myfunc_ret_double_to_float (output corresponding to return_double_to_float_no_sc.c):
Double to float conversion alone does not lead to a timing side channel with the above referenced Bambu arguments.

##### Vulnerable arguments + pipelining

*double_array_to_float_pipe* attempted to fix the problem by adding --pipelining to the above mentioned argument, but synthesis fails in this case.

[Github issue](https://github.com/ferrandi/PandA-bambu/issues/384).

##### Default arguments seem to remove this vulnerability (not yet confirmed by maintainers).

*myfunc_double_to_float_default_args* (output corresponding to read_double_to_float_sc.c):
Using the default arguments, we see no timing side channel.

### Dynamatic vulnerabilities

#### C short circuiting
dynamatic_bugs/...

#### Binary condition to select
dynamatic_bugs/vulnerabiltiy12

myfunc_orig contains an example that is known for being a CT code that is broken by CPU compilers [here](https://blog.trailofbits.com/2025/12/02/introducing-constant-time-support-for-llvm-to-protect-cryptographic-code/).

myfunc_fallback contains an example that is supposed to be a CT alternative for this case, according to [here](https://github.com/llvm/llvm-project/pull/166702).

Both versions are broken by Dynamatic, but not by Bambu.

### Reproducing 'Breaking Bad' bugs



#### Listing 3 - vulnerable with Dynamatic