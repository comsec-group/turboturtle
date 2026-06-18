#!/bin/bash

docker build --network=host -t verilator -f verilator/dockerfile .
docker build --network=host -t bambu:2024_10 -f bambu/dockerfile .
# docker build -t dynamatic:d3b331e -f dynamatic/dockerfile .
