#include<iostream>
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a;
	b = abs(a - 1) + 1;
	c = ((a + 1) * b) / 2;
	std::cout << c;
	return 0;
}