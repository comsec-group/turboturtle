# TurboTurtle and CTurtle

CTurtle is a constant-time C program generator that generates random programs following configurable constant-time programming rules. TurboTurtle uses CTurtle to fuzz High-Level Synthesis (HLS) compiler toolchains with the goal of detecting timing side channels that were inserted by the HLS synthesis flow.

## Artifact evaluation

### Installation
Follow the installation instructions for TurboTurtle:

See instructions [here](./hls-fuzzer/README.md) in section *Installation*.

### Case studies

Inspect the case studies:

[Case studies](./case_studies) contains examples that demonstrate the vulnerabilties that we found in Bambu and Dynamatic. You can inspect the C code, generated HDL and waveforms. Where a mitigation is known, we also provide an example with the mitigating HLS configuration that shows the removal of the timing side channel in the RTL.

For example:

C code: [./case-studies/bambu_bugs/vulnerability1/div_default_args/myfunc.c](./case-studies/bambu_bugs/vulnerability1/div_default_args/myfunc.c)

Bambu intermediat IR pretty print: [./case-studies/bambu_bugs/vulnerability1/div_default_args/synth/a.c](./case-studies/bambu_bugs/vulnerability1/div_default_args/synth/a.c)

RTL: [./case-studies/bambu_bugs/vulnerability1/div_default_args/synth/myfunc.v](./case-studies/bambu_bugs/vulnerability1/div_default_args/synth/myfunc.v)

Miter testbench: [./case-studies/bambu_bugs/vulnerability1/div_default_args/verif/sim/tb.sv](./case-studies/bambu_bugs/vulnerability1/div_default_args/verif/sim/tb.sv)

Waveform: [./case-studies/bambu_bugs/vulnerability1/div_default_args/verif/sim/traces.vcd](./case-studies/bambu_bugs/vulnerability1/div_default_args/verif/sim/traces.vcd)

### Reproduce the plots from the paper

See instructions [here](./hls-fuzzer/README.md), section "Artifact evaluation - Reproducing results of the paper".

## Dataset
We might be able to provide the dataset that we generated during our fuzzing campaign for the paper upon request. We do not host it publicly to avoid de-anonymizing the commercial tool names and violating licenses.

It contains:

- the test run configurations
- the CTurtle generated random CT C programs
- the generated random HLS configurations
- the HLS synthesis outputs