#include<iostream>
int main() {
	int long long a;
	std::cin >> a;
	int long long b = a / 10;
	std::cout << b * (b + 1) * 100 + 25;
	return 0;
}