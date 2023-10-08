#include<iostream>
#include<cstdlib>

int main(int, char**)
{
	int n = 0;
	std::cin >> n;

	int* m = (int*)malloc(sizeof(int*) * n);

	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(m + i);
	}
	std::cout << std::endl;

	std::cout << "array output: " << std::endl;
	for (int i = 0; i < n; ++i)
	{
		std::cout << *(m + i) << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < n; ++i)
	{
		if (*(m + i) <= 0)
		{
			for (int j = i; j < n - 1; ++j)
			{
				*(m + j) = *(m + 1 + j);
			}
			--n;
			--i;
		}
	}

	std::cout << "positive output: " << std::endl;
	for (int i = 0; i < n; ++i)
	{
		std::cout << *(m + i) << " ";
	}
	std::cout << std::endl;

	free(m);
	m = 0;

	return EXIT_SUCCESS;
}
