#include <iostream>
int main()
{
	int k = 0;
	int n = 0;
	std::cin >> k;
	for (int i = 0; i <= k; ++i)
	{
		int f = i;
		int a = 0;
		while (f > 0)
		{
			a = f % 10 + a * 10;
			f /= 10;
		}
		if (a == i)
		{
			++n;
		}
	}
	std::cout << n - 1;
	return 0;
}