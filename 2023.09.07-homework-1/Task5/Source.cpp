#include <iostream>
int main() 
{
	int v = 0;
	int t = 0;
	int s = 0;
	int km = 0;
	std::cin >> v >> t;
	s = (v * t) % 109;
	km = 1 + (s + 109) % 109;
	std::cout << km;
	return 0;
}