#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	hanoy(n, 1, 3);

	return EXIT_SUCCESS;
}

void hanoy(int count, int from, int to)
{
	if (count <= 0)
	{
		return;
	}

	int res = 6 - from - to;

	if (count == 1)
	{
		printf("1 %d %d\n", from, to);
	}
	else
	{
		hanoy(count - 1, from, to);
		hanoy(count - 2, to, res);
		printf("0 %d %d\n", from, to);
		hanoy(count - 2, res, from);
		hanoy(count - 1, from, to);
	}
}