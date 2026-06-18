#!/bin/bash

/bin/bash -c "export PATH=$PATH:/opt/dynamatic/bin:/opt/gurobi1202/linux64/bin;export GUROBI_HOME=/opt/gurobi1202/linux64;LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/opt/gurobi1202/linux64/lib;cd /work;${1}"
