#include <iostream>
int main() 
{
	int n = 0;
	std::cin >> n;
	if (((n % 100) >= 11) && ((n % 100) <= 14))
	{
		switch (n % 100)
		{
		case 11: case 12: case 13: case 14:
			std::cout << n << " " << "bochek";
			break;
		default:
			std::cout << "";
			break;
		}
	}
	else 
	{
		switch (n % 10)
		{
		case 1:
			std::cout << n << " " << "bochka";
			break;
		case 2: case 3: case 4:
			std::cout << n << " " << "bochki";
			break;
		case 0: case 5: case 6: case 7: case 8: case 9:
			std::cout << n << " " << "bochek";
			break;
		default:
			std::cout << "";
			break;
		}
	}
	return 0;
}