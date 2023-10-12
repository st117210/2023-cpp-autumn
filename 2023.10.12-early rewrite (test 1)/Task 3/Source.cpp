#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int b = 1;
	for (int i = 0; n != 0; ++i)
	{
		int a = n % 10;
		b *= a;
		n /= 10;
	}
	std::cout << b;

	return EXIT_SUCCESS;
}