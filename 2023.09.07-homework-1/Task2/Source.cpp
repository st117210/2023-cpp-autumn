#include<iostream>
int main() {
	int a, b, c;
	std::cin >> a;
	b = abs(a - 1) + 1;
	c = ((a + 1) * b) / 2;
	std::cout << c;
	return 0;
}