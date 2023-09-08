#include<iostream>
using namespace std;
int main() {
	int long long a;
	cin >> a;
	int long long b = a / 10;
	cout << b * (b + 1) * 100 + 25;
	return 0;
}