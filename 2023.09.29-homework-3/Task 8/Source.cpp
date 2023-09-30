#include <iostream>
int main()
{
	int a = 0;
	int b = 0;
	int n = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> n;
	int gcd = 0;
	int i = 0;
	char va = 'A';
	char vb = 'B';
	int x = a;
	int y = b;
	while (y != 0)
	{
		gcd = x % y;
		x = y;
		y = gcd;
	}
	if (b < a)
	{
		va = 'B';
		vb = 'A';
		gcd = a;
		a = b;
		b = gcd;
	}
	if (b == n)
	{
		std::cout << ">" << vb;
		return 0;
	}
	if (((n > a) && (n > b)) || (n % x != 0))
	{
		std::cout << "Impossible";
	}
	else
	{
		while (true)
		{
			i += a;
			std::cout << ">" << va << std::endl;
			std::cout << va << ">" << vb << std::endl;
			if (i >= b)
			{
				std::cout << vb << ">" << std::endl;
				std::cout << va << ">" << vb << std::endl;
				i %= b;
			}
			if ((i == 0) || (i == n))
			{
				break;
			}
		}
	}
	return 0;
}