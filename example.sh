#!/usr/bin/env bash
ARRAY_SIZE=5000
SORT_OPTION="DESC"
echo "=============================================="
./runTests.sh bubbleSort ${ARRAY_SIZE} ${SORT_OPTION}
./runTests.sh insertionSort ${ARRAY_SIZE} ${SORT_OPTION}
./runTests.sh selectionSort ${ARRAY_SIZE} ${SORT_OPTION}
./runTests.sh quickSort ${ARRAY_SIZE} ${SORT_OPTION}
./runTests.sh heapSort ${ARRAY_SIZE} ${SORT_OPTION}
./runTests.sh shellSort ${ARRAY_SIZE} ${SORT_OPTION}
echo "==============================================="
SORT_OPTION="ASC"
echo "=============================================="
./runTests.sh bubbleSort ${ARRAY_SIZE} ${SORT_OPTION}
./runTests.sh insertionSort ${ARRAY_SIZE} ${SORT_OPTION}
./runTests.sh selectionSort ${ARRAY_SIZE} ${SORT_OPTION}
./runTests.sh quickSort ${ARRAY_SIZE} ${SORT_OPTION}
./runTests.sh heapSort ${ARRAY_SIZE} ${SORT_OPTION}
./runTests.sh shellSort ${ARRAY_SIZE} ${SORT_OPTION}
echo "==============================================="
SORT_OPTION="N"
echo "=============================================="
./runTests.sh bubbleSort ${ARRAY_SIZE} ${SORT_OPTION}
./runTests.sh insertionSort ${ARRAY_SIZE} ${SORT_OPTION}
./runTests.sh selectionSort ${ARRAY_SIZE} ${SORT_OPTION}
./runTests.sh quickSort ${ARRAY_SIZE} ${SORT_OPTION}
./runTests.sh heapSort ${ARRAY_SIZE} ${SORT_OPTION}
./runTests.sh shellSort ${ARRAY_SIZE} ${SORT_OPTION}
echo "==============================================="