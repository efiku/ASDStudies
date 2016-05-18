#!/usr/bin/env bash
if [ -z "$RUN_OPTION" ]; then
    RUN_OPTION="."
fi
echo "-------------"
echo $1 $2 $3
./run/asd  $1 $2 $3
echo "-------------"