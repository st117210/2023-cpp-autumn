#include <iostream>
int main() 
{
	int k = 0;
	int m = 0;
	int n = 0;
	int a = 0;
	int b = 0;
	int t = 0;
	std::cin >> k >> m >> n;
	if (n >= k) 
	{
		a = (2 * n) / k;
		b = ((2 * n - (a * k)) % k) != 0;
		t = a * m + b * m;
	}
	else
	{
		t = 2 * m;
	}
	std::cout << t;
	return 0;
}