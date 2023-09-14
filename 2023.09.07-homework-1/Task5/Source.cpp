#include <iostream>
int main() {
	int v, t, s, km;
	std::cin >> v >> t;
	s = (v * t) % 109;
	km = 1 + (s + 109) % 109;
	std::cout << km;
	return 0;
}