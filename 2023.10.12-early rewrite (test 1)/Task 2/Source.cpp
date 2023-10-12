#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	if (n > 0)
	{
		for (int i = n; i != -1; --i)
		{
			std::cout << n << " ";
			--n;
		}
	}
	else
	{
		for (int i = n; i != 1; ++i)
		{
			std::cout << n << " ";
			++n;
		}
	}

	return EXIT_SUCCESS;
}