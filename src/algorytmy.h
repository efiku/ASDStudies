//
// Created by efik on 07.05.16.
//

#ifndef ASD_ALOGRYTMY_H
#define ASD_ALOGRYTMY_H
typedef long long ALG_TYPE_SIZE;
void bubbleSort(std::vector<ALG_TYPE_SIZE> &array, ALG_TYPE_SIZE size);
void insertionSort(std::vector<ALG_TYPE_SIZE> &array, ALG_TYPE_SIZE size);
void selectionSort(std::vector<ALG_TYPE_SIZE> &array, ALG_TYPE_SIZE size);
void quickSort(std::vector<ALG_TYPE_SIZE> &array, ALG_TYPE_SIZE leftElement, ALG_TYPE_SIZE rightElement);
void heapSort(std::vector<ALG_TYPE_SIZE> &array, ALG_TYPE_SIZE size);
void shellSort(std::vector<ALG_TYPE_SIZE> &array, ALG_TYPE_SIZE size);
#endif //ASD_ALOGRYTMY_H
