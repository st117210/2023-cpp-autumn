#include<iostream>

void binaryNumber(int);
int firstbit(int);
int lastbit(int);

int main(int argc, char* argv[])
{
	unsigned int n = 0;
	std::cin >> n;

	binaryNumber(n);

	if (n == 0)
	{
		n = ~n;
	}
	else
	{
		unsigned int mask = 0;
		mask = ~mask;
		mask >>= (firstbit(n) - lastbit(n) + 1);
		mask = ~mask;
		mask >>= (32 - firstbit(n) - 1);

		n ^= mask;
	}

	binaryNumber(n);

	return EXIT_SUCCESS;
}

void binaryNumber(int a)
{
	std::cout << "0b ";
	for (int i = 31; i >= 0; --i)
	{
		std::cout << ((a >> i) & 1) << (i % 4 == 0 ? " " : "");
	}
	std::cout << std::endl;
}

int firstbit(int a) 
{
	int firstbit = 31;
	while ((a >> firstbit & 1) == 0)
	{
		--firstbit;
	}
	--firstbit;

	return firstbit;
}

int lastbit(int a) 
{
	int lastbit = 0;
	while ((a >> lastbit & 1) == 0)
	{
		++lastbit;
	}
	++lastbit;

	return lastbit;
}