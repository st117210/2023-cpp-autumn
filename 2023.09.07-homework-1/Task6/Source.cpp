#include <iostream>
int main() 
{
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a >> b;
	c = (((a / b) * a) + ((b / a) * b)) / ((a / b) + (b / a));
	std::cout << c;
	return 0;
}