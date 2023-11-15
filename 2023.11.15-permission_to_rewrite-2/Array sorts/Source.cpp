#include"Array_Sorts.h"

int main(int argc, char* argv[])
{
	srand(time(0));
	int n = 10;
	int* a = initRandomArray(n);
	{
		std::cout << "std::sort" << std::endl;
		printArray(a, n);
		stdsort(a, n);
		printArray(a, n);
	}
	{
		std::cout << "bubble sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		bubbleSort(a, n);
		printArray(a, n);
	}
	{
		std::cout << "selection sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		selectionSort(a, n);
		printArray(a, n);
	}
	{
		std::cout << "monkey sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		monkeySort(a, n);
		printArray(a, n);
	}
	{
		std::cout << "insertion sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		insertionSort(a, n);
		printArray(a, n);
	}
	{
		std::cout << "gnome sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		gnomeSort(a, n);
		printArray(a, n);
	}
	{
		std::cout << "count sort" << std::endl;
		mixArray(a, n);
		printArray(a, n);
		countSort(a, n);
		printArray(a, n);
	}

	return EXIT_SUCCESS;
}
