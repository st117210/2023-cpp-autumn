#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int k = 1;
	int a = 0;

	for (int i = 0; k < n; ++i)
	{
		k *= 2;
		++a;
	}

	std::cout << a;

	return EXIT_SUCCESS;
}
