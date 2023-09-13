#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a;
	b = abs(a - 1) + 1;
	c = ((a + 1) * b) / 2;
	cout << c;
	return 0;
}