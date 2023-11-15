#pragma once

#include<iostream>
#include <ctime>
#include<algorithm>

int* initRandomArray(int len);
void printArray(int* a, int len);
void swap(int& a, int& b);
void stdsort(int* a, int len);
void mixArray(int* a, int n);
void bubbleSort(int* a, int len);
void selectionSort(int* a, int len);
bool isSorted(int* a, int len);
void monkeySort(int* a, int len);
void insertionSort(int* a, int len);
void gnomeSort(int* a, int len);
void countSort(int* a, int len);
