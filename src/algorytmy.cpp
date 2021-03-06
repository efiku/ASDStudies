//
// Created by efik on 07.05.16.
//

#include <algorithm>
#include "algorytmy.h"

void bubbleSort(std::vector<ALG_TYPE_SIZE> &array, ALG_TYPE_SIZE size) {
    if (size == 0)
        return;
    for (ALG_TYPE_SIZE index = 0; index < size - 1; ++index)
        for (ALG_TYPE_SIZE secondIndex = size - 1; secondIndex > index; --secondIndex)
            if (array[secondIndex - 1] > array[secondIndex])
                std::swap(array[secondIndex - 1], array[secondIndex]);
}

void insertionSort(std::vector<ALG_TYPE_SIZE> &array, ALG_TYPE_SIZE size) {
    ALG_TYPE_SIZE index, secondIndex, temp;
    for (index = 1; index < size; index++) {
        secondIndex = index;
        temp = array[index];
        while ((secondIndex > 0) && (array[secondIndex - 1] > temp)) {
            array[secondIndex] = array[secondIndex - 1];
            secondIndex--;
        }
        array[secondIndex] = temp;
    }
}

void selectionSort(std::vector<ALG_TYPE_SIZE> &array, ALG_TYPE_SIZE size) {
    ALG_TYPE_SIZE minimalElement;

    for (ALG_TYPE_SIZE index = 0; index < size; index++) // zaczynamy od pierwszego elementu i konczymy na ostatnim
    {
        minimalElement = index;
        for (ALG_TYPE_SIZE secondIndex = index + 1;
             secondIndex < size; secondIndex++) // poszukujemy najmniejszego
        {
            if (array[secondIndex] <
                array[minimalElement]) // jezeli znalezlismy mniejszy element zapisujemy jego indeks w max
                minimalElement = secondIndex;
        }
        std::swap(array[minimalElement], array[index]);
    }
}


void quickSort(std::vector<ALG_TYPE_SIZE> &array, ALG_TYPE_SIZE leftElement, ALG_TYPE_SIZE rightElement) {
    ALG_TYPE_SIZE
            index = leftElement,
            secondIndex = rightElement,
            pivot = array[(leftElement + rightElement) >> 1];
    do {
        while (array[index] < pivot) index++;
        while (array[secondIndex] > pivot) secondIndex--;
        if (index <= secondIndex) {
            ALG_TYPE_SIZE temp = array[index];
            array[index] = array[secondIndex];
            array[secondIndex] = temp;
            index++;
            secondIndex--;
        }
    } while (index <= secondIndex);
    if (leftElement < secondIndex) quickSort(array, leftElement, secondIndex);
    if (rightElement > index) quickSort(array, index, rightElement);
}

void heapify(std::vector<ALG_TYPE_SIZE> &array, ALG_TYPE_SIZE heapSize, ALG_TYPE_SIZE node) {

    ALG_TYPE_SIZE largest = node;
    ALG_TYPE_SIZE left = 2 * node + 1;
    ALG_TYPE_SIZE right = 2 * node + 2;

    // If left child is larger than root
    if (left < heapSize && array[left] > array[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < heapSize && array[right] > array[largest])
        largest = right;

    // If largest is not root
    if (largest != node) {
        std::swap(array[node], array[largest]);

        // Recursively heapify the affected sub-tree
        heapify(array, heapSize, largest);
    }
}

void heapSort(std::vector<ALG_TYPE_SIZE> &array, ALG_TYPE_SIZE size) {
    // Build heap (rearrange array)
    for (ALG_TYPE_SIZE i = size / 2 - 1; i >= 0; i--)
        heapify(array, size, i);

    // One by one extract an element from heap
    for (ALG_TYPE_SIZE i = size - 1; i >= 0; i--) {
        // Move current root to end
        std::swap(array[0], array[i]);

        // call max heapify on the reduced heap
        heapify(array, i, 0);
    }
}

void shellSort(std::vector<ALG_TYPE_SIZE> &array, ALG_TYPE_SIZE size) {
    for (ALG_TYPE_SIZE gap = size / 2; gap > 0; gap /= 2)
        if (gap < size) {
            for (ALG_TYPE_SIZE i = gap; i < size; ++i)
                for (ALG_TYPE_SIZE j = i - gap; j >= 0 && array[j] > array[j + gap]; j -= gap)
                    std::swap(array[j], array[j + gap]);
        }
}