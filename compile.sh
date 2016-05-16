#!/usr/bin/env bash
mkdir run && cd run
cmake ../
make
echo "50 000 el array: "
RUN_OPTION="bubbleSort"
./asd ${RUN_OPTION}
