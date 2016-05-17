//
// Created by efik on 16.05.16.
//
#include <iostream>
#include "../src/constants.h"
#include <chrono>
#include "../src/algorytmy.h"

using namespace std;

// From -100 to 100;
ALG_TYPE_SIZE RandomNumber() { return ((std::rand() % ASD_ARRAY_SIZE) - (ASD_ARRAY_SIZE / 2)); }

int main(int argc, char **argv) {

    ALG_TYPE_SIZE testedNumberArray[ASD_ARRAY_SIZE];
    for (ALG_TYPE_SIZE &element : testedNumberArray) {
        element = RandomNumber();
    }
    string argument = (string) argv[1];

    auto startTime = chrono::high_resolution_clock::now();
    if (argument == "bubbleSort")
        bubbleSort(testedNumberArray, ASD_ARRAY_SIZE);
    else if (argument == "insertionSort")
        insertionSort(testedNumberArray, ASD_ARRAY_SIZE);
    else if (argument == "selectionSort")
        selectionSort(testedNumberArray, ASD_ARRAY_SIZE);
    else if (argument == "quickSort")
        quickSort(testedNumberArray, 0, ASD_ARRAY_SIZE);
    else
        cout << "Usage: asd bubbleSort|insertionSort|selectionSort|quickSort\n";


    auto endTime = chrono::high_resolution_clock::now();
    cout << chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count() << " ms \n";
    return 0;
}