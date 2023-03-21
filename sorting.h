#ifndef sorting_h
#define sorting_h

#include <iostream>
#include <string>

class Sorting {

    public:
        int size;
        int sortNum;

        //Selects smallest element from unsorted array portion and moves it to the sorted array portion.
        //Search array until smallest value is found, then swap with current index location value.
        //Once swapped, increment the min index to the next element
        //Time Complexity: O(N^2) - quadratic
        void selectionSort(int array[], int n);

        void bubbleSort(int, int);

        void insertionSort(int, int);

        void mergeSort(int, int);

        void quickSort(int, int);

        void heapSort(int, int);

        void radixSort(int, int);

        void swap(int *minElement, int *firstElement);
        
        void printArray(int array[], int size);


};

#endif
