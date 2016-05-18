//
// Created by efik on 16.05.16.
//
#include <iostream>
#include <chrono>
#include <vector>
#include "../src/algorytmy.h"
using namespace std;
void optionResolver(const string &sortOption, vector<ALG_TYPE_SIZE> &testedNumbersArray);
ALG_TYPE_SIZE RandomNumber(ALG_TYPE_SIZE &range) { return ((std::rand() % range) - (range / 2)); }


int main(int argc, char **argv) {
    if (argc == 1 || argc != 4) {
        cout << "Usage: asd bubbleSort|insertionSort|selectionSort|quickSort|heapSort|shellSort\n";
        exit(EXIT_SUCCESS);
    }
    srand((uint) time(0));
    string sortOption = static_cast<string>(argv[1]);

    unsigned long long arraySize = (unsigned long long int) atoi(argv[2]);


    vector<ALG_TYPE_SIZE> testedNumbersArray(arraySize, 0) ;
    for (ALG_TYPE_SIZE &element : testedNumbersArray) {
        element = RandomNumber((ALG_TYPE_SIZE &) arraySize);
    }


    auto startTime = chrono::high_resolution_clock::now();
    optionResolver(sortOption, testedNumbersArray);
    auto endTime = chrono::high_resolution_clock::now();

    cout << chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count() << " ms \n";
    return EXIT_SUCCESS;
}

void optionResolver(const string &sortOption, vector<ALG_TYPE_SIZE> &testedNumbersArray) {
    if (sortOption == "bubbleSort")
        bubbleSort(testedNumbersArray, testedNumbersArray.size());
    else if (sortOption == "insertionSort")
        insertionSort(testedNumbersArray, testedNumbersArray.size());
    else if (sortOption == "selectionSort")
        selectionSort(testedNumbersArray, testedNumbersArray.size());
    else if (sortOption == "quickSort")
        quickSort(testedNumbersArray, 0, testedNumbersArray.size());
    else if (sortOption == "heapSort")
        heapSort(testedNumbersArray, testedNumbersArray.size());
    else if (sortOption == "shellSort")
        shellSort(testedNumbersArray, testedNumbersArray.size());
}