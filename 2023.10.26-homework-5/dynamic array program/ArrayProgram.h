#pragma once

#include<iostream>
#include <ctime>

void printArray(int* a, int len);
void expandArray(int*& a, int& len);
void addElement(int*& a, int& len, int element);
void contractArray(int*& a, int& len);
void extractElement(int*& a, int& len, int index);
void printReverseArray(int*& a, int& len);
void sortArray(int*& a, int& len);
void minReverseMax(int*& a, int& len);
void removingDuplicates(int*& a, int& len);
void addRandomElements(int*& a, int& len, int n);
