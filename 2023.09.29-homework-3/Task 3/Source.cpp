#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;

	int n = 0;

	int i = 1;
	while (i * i < a)
	{
		if (a % i == 0)
		{
			n += 2;
		}
		++i;
	}

	if (i * i == a)
	{
		++n;
	}

	std::cout << n;

	return EXIT_SUCCESS;
}
