//
// Created by efik on 16.05.16.
// Copyright (c) 2016 Krzysztof Pazdur.
//
#include <iostream>
#include <chrono>
#include <algorithm>
#include "../src/algorytmy.h"

using namespace std;
typedef unsigned long long u_longlong;

void algorithmResolver(string &sortOption, vector<ALG_TYPE_SIZE> &testedNumbersArray);

void sortResolver(string &sortOption, vector<ALG_TYPE_SIZE> &testedNumbersArray);

void populateArray(u_longlong &arraySize, vector<ALG_TYPE_SIZE> &testedNumbersArray);

void programInfo();

bool compare(ALG_TYPE_SIZE a, ALG_TYPE_SIZE b) { return a > b; }

ALG_TYPE_SIZE RandomNumber(ALG_TYPE_SIZE &range) { return ((std::rand() % range) - (range / 2)); }

int main(int argc, char **argv) {
    if (argc == 1 || argc != 4) {
        programInfo();
        exit(EXIT_SUCCESS);
    }
    srand((uint) time(0));
    string algOption = static_cast<string>(argv[1]);
    u_longlong arraySize = (u_longlong) atoi(argv[2]);
    string sortOption = static_cast<string>(argv[3]);
    vector<ALG_TYPE_SIZE> testedNumbersArray(arraySize, 0);

    populateArray(arraySize, testedNumbersArray);
    sortResolver(sortOption, testedNumbersArray);

    auto startTime = chrono::high_resolution_clock::now();
    algorithmResolver(algOption, testedNumbersArray);
    auto endTime = chrono::high_resolution_clock::now();

    cout << chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count() << " ms \n";
    return EXIT_SUCCESS;
}

// ---------------------------
// Methods
// ---------------------------
void populateArray(u_longlong &arraySize, vector<ALG_TYPE_SIZE> &testedNumbersArray) {
    for (ALG_TYPE_SIZE index = 0; index < testedNumbersArray.size(); index++) {
        testedNumbersArray[index] = RandomNumber((ALG_TYPE_SIZE &) arraySize);
    }
}

void sortResolver(string &sortOption, vector<ALG_TYPE_SIZE> &testedNumbersArray) {
    if (sortOption == "DESC") {
        sort(testedNumbersArray.begin(), testedNumbersArray.end(), compare);
    } else if (sortOption == "ASC") {
        quickSort(testedNumbersArray, 0, testedNumbersArray.size());
    }
}

void programInfo() {
    cout << "Usage: ./asd [ALGORITHM][ARRAY SIZE] [SORT OPTION]\n";
    cout << "Algorithms:\n";
    cout << "- bubbleSort\n";
    cout << "- insertionSort\n";
    cout << "- selectionSort\n";
    cout << "- quickSort\n";
    cout << "- heapSort\n";
    cout << "- shellSort\n\n";
    cout << "ARRAY SIZE: Your random numbers array size to generate\n\n";
    cout << "SORT OPTION: \n";
    cout << "- ASC: Sort your data from low to high \n";
    cout << "- DESC: From hight to low \n";
    cout << "- -: Don't sort \n Example: ./asd 30000 N\n\n";
}

void algorithmResolver(string &sortOption, vector<ALG_TYPE_SIZE> &testedNumbersArray) {
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