#include<iostream>

void hanoi(int n, int from, int to);

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int to = 0;
	if (n % 2 == 0)
	{
		to = 3;
	}
	else
	{
		to = 2;
	}

	hanoi(n, 1, to);

	std::cout << std::endl;

	return EXIT_SUCCESS;
}

void hanoi(int n, int from, int to)
{
	if (n <= 0 || n > 10)
	{
		return;
	}

	int res = 6 - from - to;

	if (n % 2 == 0)
	{
		hanoi(n - 1, from, res);
		printf("%d %d %d\n", n, from, to);
	}
	else
	{
		hanoi(n - 1, from, res);
		printf("%d %d %d\n", n, from, to);
	}
}
