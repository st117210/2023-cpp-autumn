#include<iostream>
int main() {
	int a, b, c;
	std::cin >> a;
	b = a + 1;
	c = a - 1;
	std::cout << "The next number for the number " << a << " is " << b << "." << std::endl;
	std::cout << "The previous number for the number " << a << " is " << c << ".";
	return 0;
}
