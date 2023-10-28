#include "ArrayProgram.h"
#include "MenuProgram.h"


void expandArray(int*& a, int& len)
{
	int* newA = new int[len + 1] { 0 };
	if (a != nullptr)
	{
		for (int i = 0; i < len; ++i)
		{
			newA[i] = a[i];
		}
		delete[] a;
	}
	a = newA;
	++len;
}

void addElement(int*& a, int& len, int element)
{
	expandArray(a, len);
	a[len - 1] = element;
}

void sortArray(int*& a, int& len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}
}


void minReverseMax(int*& a, int& len)
{
	int minv = 0;
	int minp = 0;
	int maxv = 0;
	int maxp = 0;

	for (int i = 0; i < len; ++i)
	{
		if (minv >= a[i])
		{
			minv = a[i];
			minp = i;
		}
		if (maxv < a[i])
		{
			maxv = a[i];
			maxp = i;
		}
	}

	a[maxp] = minv;
	a[minp] = maxv;
}

void removingDuplicates(int*& a, int& len)
{
	if (a == nullptr)
	{
		std::cout << "Array does not exist";
	}
	else
	{
		for (int i = 0; i < len; ++i)
		{
			for (int j = i + 1; j < len; ++j)
			{
				if (a[i] == a[j])
				{
					for (int q = j; q < len - 1; ++q)
					{
						a[q] = a[q + 1];
					}
					--len;
				}
			}
		}
	}
}

void addRandomElements(int*& a, int& len, int n)
{
	if (a == nullptr)
	{
		std::cout << "Array does not exist" << std::endl;
	}
	else
	{
		srand(time(0));

		for (int i = 0; i < n; i++)
		{
			int randel = 0;

			int j = 0;
			while (j < 1)
			{
				randel = -1000 + rand() % (10000 + 1);
				addElement(a, len, randel);
				++j;
			}
			std::cout << randel << std::endl;
		}
	}
}

void contractArray(int*& a, int& len)
{
	if (a != nullptr)
	{
		int* newA = new int[len - 1];
		for (int i = 0; i < len - 1; ++i)
		{
			newA[i] = a[i];
		}
		delete[] a;
		a = newA;
		--len;
	}
}

void extractElement(int*& a, int& len, int index)
{
	if (a == nullptr)
	{
		std::cout << "Array does not exist";
	}
	else
	{
		if (index >= 0 && index < len)
		{
			for (int i = index; i < len - 1; ++i)
			{
				a[i] = a[i + 1];
			}
			contractArray(a, len);
		}
		else
		{
			std::cout << "Index does not exist" << std::endl;
		}
	}
}

void printReverseArray(int*& a, int& len)
{
	if (a == nullptr)
	{
		std::cout << "Array does not exist";
	}
	else
	{
		int* newA = new int[len];

		for (int i = 0; i < len; ++i)
		{
			newA[i] = a[len - 1 - i];
		}

		delete[] a;
		a = newA;
	}
	std::cout << std::endl;
}
