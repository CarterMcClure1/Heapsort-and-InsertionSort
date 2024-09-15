#include "heapsort.h"

heapsort::heapsort(vector<long> arr, long size) {
    heapArray = arr;
    heapArraySize = size;
}

void heapsort::max_heapify(int index, int n) {
    int largest = index;
    int left = leftfunction(index);
    int right = rightfunction(index);
    

    if((left < n) && (heapArray[left] > heapArray[largest])) {
        largest = left;
    }
   
    

    if((right < n) && (heapArray[right] > heapArray[largest])) {
        largest = right;
    }

    if(largest != index) {
        swap(heapArray[index], heapArray[largest]);
        max_heapify(largest, n);
    }
}

void heapsort::build_max_heap() {
    for(int i = parent(heapArraySize); i >= 0; i--) {
        max_heapify(i, heapArraySize);
    }
}

void heapsort::sort() {
    build_max_heap();     //put max at top of heap

    for(int i = (heapArraySize - 1); i > 0; i--) {
        swap(heapArray[0], heapArray[i]);           //move current root(max) to the end
        
        max_heapify(0, i);      
    }
}

void heapsort::printArray() {
    for(int i = 0; i < heapArraySize; ++i) {
        cout << heapArray[i] << " ";
    }
    cout << endl;
}

int heapsort::parent(int i) {
    return (i-1)/2;
}
int heapsort::leftfunction(int i) {
    return(2*i +1);
}
int heapsort::rightfunction(int i) {
    return(2*i + 2);
}
