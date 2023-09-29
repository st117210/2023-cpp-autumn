#include <iostream>
int main() 
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	const int P1 = 15;
	const int P5 = 70;
	const int P10 = 125;
	const int P20 = 230;
	const int P60 = 440;
	std::cin >> n;
	e = n / 60;
	n %= 60;
	d = n / 20;
	n %= 20;
	c = n / 10;
	n %= 10;
	b = n / 5;
	n %= 5;
	a = n;
	if (a * P1 >= P5) 
	{
		a = 0;
		b += 1;
	}
	if (a * P1 + b * P5 >= P10) 
	{
		a = 0;
		b = 0;
		c += 1;
	}
	if (a * P1 + b * P5 + c * P10 >= P20)
	{
		a = 0;
		b = 0;
		c = 0;
		d += 1;
	}
	if (a * P1 + b * P5 + c * P10 + d * P20 >= P60)
	{
		a = 0;
		b = 0;
		c = 0;
		d = 0;
		e += 1;
	}
	std::cout << a << " " << b << " " << c << " " << d << " " << e;
	return 0;
}