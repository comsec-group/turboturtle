# It's About Time: Detecting Timing Side-Channel Vulnerabilities in High-Level Synthesis Designs

High-level synthesis (HLS) is becoming increasingly popular because it allows the specification of hardware accelerators in a higher level of abstraction than Register Transfer Level (RTL), for example, in C/C++. Common scenarios include acceleration of machine learning inference and even cryptographic functions. But is HLS secure for such scenarios?
Constant-time (CT) programming is a common approach for mitigating timing side channels when executing sensitive software
on CPUs. It is unclear whether generic CT rules such as not passing secret-dependent data to memory addresses or branching decisions provide adequate protection when an HLS flow turns CT software into hardware. Furthermore, CPU vendors and instruction set architectures (ISAs) often specify which instructions execute in data-independent time and are safe to use for CT programming, which is currently missing for HLS. To address this gap, we introduce CTurtle, the first C program generator that generates random, yet valid, C programs that follow customizable CT rules, making them CT with respect to certain inputs marked as secret. We further introduce TurboTurtle, an HLS fuzzer that can discover cases where HLS flows turn CT software into hardware that is vulnerable to timing side channels. TurboTurtle detects timing vulnerabilities in the HLS generated Register Transfer Level (RTL) designs, using a miter test bench that can detect when the generated accelerator may take a variable amount of time caused by different secret inputs.
Applying TurboTurtle on four different HLS flows, we discover 12 new vulnerabilities where HLS flows produce non-CT hardware
from CT software, for which we got two CVEs. Eight of these vulnerabilities establish unsafe operators for a particular HLS flow,
and three persist in two HLS flows even after applying generic and tool-specific CT rules.

## TurboTurtle and CTurtle

CTurtle is a constant-time C program generator that generates random programs following configurable constant-time programming rules. TurboTurtle uses CTurtle to fuzz High-Level Synthesis (HLS) compiler toolchains with the goal of detecting timing side channels that were inserted by the HLS synthesis flow.

This project is maintained at https://github.com/comsec-group/turboturtle/.

The paper can be found at https://comsec.ethz.ch/research/hardware-design-security/turboturtle.

Please cite as

```
@inproceedings{2026_turboturtle,
title="It's About Time: Detecting Timing Side-Channel Vulnerabilities in High-Level Synthesis Designs",
author="Zuppiger, Denis and Ceesay-Seitz, Katharina and Xu, Jiahui and Josipović, Lana and Razavi, Kaveh",
booktitle = {Proceedings of the 2026 ACM SIGSAC Conference on Computer and Communications Security},
year = {2026},
publisher = {Association for Computing Machinery},
address = {New York, NY, USA},
location = {The Hague, The Netherlands},
series = {CCS '26},
}
```

## Artifact evaluation

### Installation
Follow the installation instructions for TurboTurtle:

See instructions [here](./turboturtle/README.md) in section *Installation*.

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

See instructions [here](./turboturtle/README.md), section "Artifact evaluation - Reproducing results of the paper".

## Dataset
We might be able to provide the dataset that we generated during our fuzzing campaign for the paper upon request. We do not host it publicly to avoid de-anonymizing the commercial tool names and violating licenses.

It contains:

- the test run configurations
- the CTurtle generated random CT C programs
- the generated random HLS configurations
- the HLS synthesis outputs
