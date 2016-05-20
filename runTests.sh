#!/usr/bin/env bash
echo "=============================================="
echo bubbleSort
./run/asd bubbleSort $1 $2
echo "-------"
echo insertionSort
./run/asd insertionSort $1 $2
echo "-------"
echo selectionSort
./run/asd selectionSort $1 $2
echo "-------"
echo quickSort
./run/asd quickSort $1 $2
echo "-------"
echo heapSort
./run/asd heapSort $1 $2
echo "-------"
echo shellSort
./run/asd shellSort $1 $2
echo "-------"
echo "==============================================="