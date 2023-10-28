#include"MenuProgram.h"

void printMenu()
{
	std::cout << "0 - Exit" << std::endl;
	std::cout << "1 - Print array" << std::endl;
	std::cout << "2 - Append element to array" << std::endl;
	std::cout << "3 - Extract element from array" << std::endl;
	std::cout << "4 - Sort array in ascending order" << std::endl;
	std::cout << "5 - Reverse array" << std::endl;
	std::cout << "6 - Swap the first maximum and last minimum element of the array" << std::endl;
	std::cout << "7 - Remove all duplicates from the array" << std::endl;
	std::cout << "8 - Add n random elements to the array (n is entered from the keyboard)" << std::endl;
}

void printArray(int* a, int len)
{
	std::cout << "Array:" << std::endl;
	if (a == nullptr)
	{
		std::cout << "Array does not exist";
	}
	else
	{
		for (int i = 0; i < len; ++i)
		{
			std::cout << a[i] << " ";
		}
	}
	std::cout << std::endl;
}
