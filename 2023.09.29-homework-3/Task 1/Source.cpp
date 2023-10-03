#include <iostream>

int main(int argc, char* argv[])
{
	int time = 0;
	std::cin >> time;

	int l = 1;
	for (int i = 1; l <= time; i++)
	{
		for (int q = 1; (q <= i) && (l <= time); q++)
		{
			std::cout << i << " ";
			l++;
		}
	}

	return EXIT_SUCCESS;
}
