#include <iostream>

#include"MenuProgram.h"
#include"ArrayProgram.h"

int main(int argc, char* argv[])
{
	int* array = nullptr;
	int len = 0;
	bool exit = false;

	while (!exit)
	{
		{
			system("cls");
			printMenu();
		}

		int menuitem = 0;
		std::cin >> menuitem;

		switch (menuitem)
		{
		case 0:
			exit = true;
			break;
		case 1:
			printArray(array, len);
			system("pause");
			break;
		case 2:
		{
			int element = 0;
			std::cout << "Input element to add: ";
			std::cin >> element;
			addElement(array, len, element);
			break;
		}
		case 3:
		{
			int indexdel = 0;
			std::cout << "Input index to delete: ";
			std::cin >> indexdel;
			extractElement(array, len, indexdel);
			system("pause");
			break;
		}
		case 4:
			sortArray(array, len);
			system("pause");
			break;
		case 5:
			printReverseArray(array, len);
			system("pause");
			break;
		case 6:
			minReverseMax(array, len);
			system("pause");
			break;
		case 7:
			removingDuplicates(array, len);
			system("pause");
			break;
		case 8:
		{
			int n = 0;
			std::cout << "Enter the number of elements: ";
			std::cin >> n;
			addRandomElements(array, len, n);
			system("pause");
			break;
		}
		default:
		{
			std::cout << "Unknown command" << std::endl;
			system("pause");
			break;
		}
		}
	}

	free(array);
	array = 0;

	return EXIT_SUCCESS;
}
