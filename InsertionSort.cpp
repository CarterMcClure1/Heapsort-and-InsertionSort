#include "insertionsort.h"
#include <vector>
using namespace std;

InsertionSort::InsertionSort(vector<long> arr, long size) {
    array = arr;
    arraySize = size;
}

void InsertionSort::sort() {
    for(int i = 1; i < arraySize; ++i) {
        int key = array[i];
        int j = i -1;
        while(j>=0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j-1; 
        }
            
            array[j+1] = key;
        
    }
}

void InsertionSort::printArray() {
    for(int i = 0; i < arraySize; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}
