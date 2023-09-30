#include <iostream>
int main()
{
	int n = 0;
	int k = 1;
	int a = 0;
	std::cin >> n;
	for (int i = 0; k < n; ++i)
	{
		k *= 2;
		++a;
	}
	std::cout << a;
	return 0;
}