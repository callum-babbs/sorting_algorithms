#include "sorting.h"

void Sorting::selectionSort(int array[], int n) {
    int min_index = 0;

    //Move boundary of unsorted array section by 1
    for(int i = 0; i < n-1; i++) {

        //Find the min element in the unsorted section of the array
        min_index = i;
        for(int j = i+1; j < n; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }

            //swap the min element and the first element
            if (min_index != i) {
                swap(&array[min_index], &array[i]);
            }
        }
    }
}

void Sorting::swap(int *val1, int *val2) {
    //Creating temporary pointer that points to what val1 was pointing to
    int temp = *val1;

    //val1 now points to what val2 was pointing to
    *val1 = *val2;

    //val2 now points to what val1 used to point to
    *val2 = temp;
}

void Sorting::printArray(int array[], int size) {
    for(int i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }
}