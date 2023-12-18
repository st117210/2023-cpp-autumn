#include <iostream>
#include <algorithm>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int* th = new int[n];
	for (int i = 0; i < n; ++i)
	{
		std::cin >> th[i];
	}

	std::sort(th, th + n);

	if (n == 2)
	{
		std::cout << th[1] - th[0];
	}
	else
	{
		int* result = new int[n] {0};

		result[1] = th[1] - th[0];
		result[2] = th[2] - th[0];

		for (int i = 3; i < n; i++)
		{
			result[i] = std::min(result[i - 2], result[i - 1]) + th[i] - th[i - 1];
		}

		std::cout << result[n - 1];

		delete[] result;
	}

	delete[] th;

	return EXIT_SUCCESS;
}
