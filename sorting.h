#ifndef sorting_h
#define sorting_h

#include <iostream>
#include <string>

class Sorting {

    public:
        int size;
        int sortNum;

        void selectionSort(int, int);

        void bubbleSort(int, int);

        void insertionSort(int, int);

        void mergeSort(int, int);

        void quickSort(int, int);

        void heapSort(int, int);

        void radixSort(int, int);

        void swap(int, int);
        
        void printArray(int, int);


}




#endif