#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;

	int b = 0;
	int n = 0;
	int q = 0;

	for (int i = 10; a != 0; i)
	{
		q = a % i;
		a /= i;
		++n;
		for (int j = 0; j != n; j)
		{
			b *= 10;
			b += q;
			--n;
		}
	}

	std::cout << b;

	return EXIT_SUCCESS;
}
