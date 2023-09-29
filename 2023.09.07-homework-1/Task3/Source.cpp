#include<iostream>
int main() 
{
	int long long a = 0;
	int long long b = 0;
	std::cin >> a;
	b = a / 10;
	std::cout << b * (b + 1) * 100 + 25;
	return 0;
}