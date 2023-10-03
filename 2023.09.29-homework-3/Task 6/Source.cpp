#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int phi_n = 0;
	int phi1 = 1;
	int phi2 = 1;

	switch (n)
	{
	case 0:
		std::cout << 0;
		break;
	case 1: case 2:
		std::cout << 1;
		break;
	default:
		int i = 1;
		while (i <= n)
		{
			phi2 = phi_n;
			phi_n = phi1 + phi2;
			phi1 = phi2;
			++i;
		}
		std::cout << phi_n;
		break;
	}

	return EXIT_SUCCESS;
}
