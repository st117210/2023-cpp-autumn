#include"Array_Sorts.h"

int* initRandomArray(int len)
{
	int* res = new int[len] { 0 };
	for (int i = 0; i < len; ++i)
	{
		res[i] = rand() % (100 + 1);
	}
	return res;
}

void printArray(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
}

void swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

void stdsort(int* a, int len)
{
	std::sort(a, a + len);
}

void mixArray(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		swap(a[i], a[rand() % n]);
	}
}

void bubbleSort(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		for (int j = 0; j < len - 1 - i; ++j)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
}

void selectionSort(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		int minInd = i;
		for (int j = i + 1; j < len; ++j)
		{
			minInd = (a[minInd] <= a[j] ? minInd : j);
		}
		swap(a[i], a[minInd]);
	}
}

bool isSorted(int* a, int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		if (a[i] > a[i + 1])
		{
			return false;
		}
	}
	return true;
}

void monkeySort(int* a, int len)
{
	while (!isSorted(a, len))
	{
		mixArray(a, len);
	}
}

void insertionSort(int* a, int len)
{
	for (int i = 1; i < len; ++i)
	{
		int t = i;
		while (t > 0 && a[t] < a[t - 1])
		{
			swap(a[t], a[t - 1]);
			--t;
		}
	}
}

void gnomeSort(int* a, int len)
{
	int i = 0;
	while (i < len)
	{
		if (i == 0 || a[i - 1] <= a[i])
		{
			i++;
		}
		else
		{
			swap(a[i], a[i - 1]);
		}
	}
}

void countSort(int* a, int len)
{
	int mxVal = 0;
	for (int i = 0; i < len; i++)
	{
		if (a[i] > mxVal) {
			mxVal = a[i];
		}
	}

	int* countArray = new int[mxVal + 1]();

	for (int i = 0; i < len; i++)
	{
		countArray[a[i]]++;
	}

	int index = 0;
	for (int i = 0; i < mxVal + 1; i++)
	{
		while (countArray[i] > 0)
		{
			a[index] = i;
			index++;
			countArray[i]--;
		}
	}

	delete[] countArray;
}