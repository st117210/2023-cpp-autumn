#include <iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	std::cin >> k;
	
	int n = 0;
	for (int i = 0; i <= k; ++i)
	{
		int f = i;
		int a = 0;
		while (f > 0)
		{
			a = f % 10 + a * 10;
			f /= 10;
		}
		if (a == i)
		{
			++n;
		}
	}

	std::cout << n - 1;

	return EXIT_SUCCESS;
}
