#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include <vector>
using namespace std;

#pragma once

class InsertionSort
{
public:
InsertionSort(vector<long> arr, long size);
void sort();
void printArray();
private:
vector<long> array;
long arraySize;

};

#endif
