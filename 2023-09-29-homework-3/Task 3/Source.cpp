#include <iostream>
int main()
{
	int a = 0;
	int n = 0;
	std::cin >> a;
	int i = 1;
	while (i * i < a)
	{
		if (a % i == 0)
		{
			n += 2;
		}
		++i;
	}
	if (i * i == a)
	{
		++n;
	}
	std::cout << n;
	return 0;
}