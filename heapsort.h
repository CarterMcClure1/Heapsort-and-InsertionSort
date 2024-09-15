#ifndef HEAPSORT_H
#define HEAPSORT_H

#pragma once

class heapsort
{
public:
heapsort(vector<long> arr, long size);
void max_heapify(int index, int n);
void build_max_heap();
void sort();
void printArray();
int parent(int i);
int leftfunction(int i);
int rightfunction(int i);
private:
vector<long> heapArray;
long heapArraySize;

};

#endif
