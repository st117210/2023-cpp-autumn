#include<iostream>
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	std::cin >> a >> b >> c >> d;
	if ((a == 0) && (b == 0)) {
		std::cout << "INF";
	}
	else if ((((-b) / a) * c + d == 0) || (a == 0) || (b % a != 0)) {
		std::cout << "NO";
	}
	else {
		std::cout << ((-b) / a);
	}
	return 0;
}