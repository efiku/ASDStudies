#!/usr/bin/env bash
if [ -z "$RUN_OPTION" ]; then
    RUN_OPTION="."
fi
cd run/
echo ${RUN_OPTION}
./asd  ${RUN_OPTION}
