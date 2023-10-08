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

	int minv = 0;
	int minp = 0;
	for (int i = 0; i < n; ++i)
	{
		if (minv > *(m + i))
		{
			minv = *(m + i);
			minp = i;
		}
	}

	int maxv = 0;
	int maxp = 0;
	for (int i = 0; i < n; ++i)
	{
		if (maxv <= *(m + i))
		{
			maxv = *(m + i);
			maxp = i;
		}
	}

	*(m + maxp) = minv;
	*(m + minp) = maxv;

	std::cout << "reverse min and max in array: " << std::endl;
	for (int i = 0; i < n; ++i)
	{
		std::cout << *(m + i) << " ";
	}
	std::cout << std::endl;

	free(m);
	m = 0;

	return EXIT_SUCCESS;
}
