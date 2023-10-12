#include<iostream>
#include<cmath>

void tableI(int);
void tableII(int);
void tableIII(int);
void tableIV(int);
void tableV(int);
void tableVI(int);
void tableVII(int);

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	tableI(n);
	tableII(n);
	tableIII(n);
	tableIV(n);
	tableV(n);
	tableVI(n);
	tableVII(n);

	return EXIT_SUCCESS;
}

void tableI(int a)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			std::cout << j;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void tableII(int a)
{
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			std::cout << i;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void tableIII(int a)
{
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			std::cout << i;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void tableIV(int a)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			std::cout << (i + j) % a + 1;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void tableV(int a)
{
	for (int i = a; i >= 1; i--)
	{
		for (int j = a; j >= 1; j--)
		{
			std::cout << i + j - 1;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void tableVI(int a)
{
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			std::cout << std::max(std::min(a - i + 1, i), std::min(a - j + 1, j));
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void tableVII(int a)
{
	{
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < a; j++)
			{
				std::cout << ((i + 1) % 2) * (j + 1) + (i % 2) * (a - j);
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
}