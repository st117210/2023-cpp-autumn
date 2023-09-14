#include <iostream>
int main() {
	int a, b, c;
	std::cin >> a >> b;
	c = (((a / b) * a) + ((b / a) * b)) / ((a / b) + (b / a));
	std::cout << c;
	return 0;
}