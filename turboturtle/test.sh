#!/bin/bash

# for i in {0..9}
# do
#   python start.py --custom-program-bambu /data/user/hls_fuzzing/benchmarks/bambu_bugs/vulnerability3/double_to_float/double_to_float.c 3_double_to_float_default_${i} --pipelining
#   cat ~/turboturtle/fuzzing/
# done

for i in {0..100}
do
  python start.py --config ${1}
done