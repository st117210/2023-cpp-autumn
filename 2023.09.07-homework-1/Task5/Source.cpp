#include <iostream>
using namespace std;
int main() {
	int V, T, S, km;
	cin >> V >> T;
	S = (V * T) % 109;
	km = 1 + (S + 109) % 109;
	cout << km;
	return 0;
}