#include <iostream>
int main()
{
	int time = 0;
	int l = 1;
	std::cin >> time;
	for (int i = 1; l <= time; i++)
	{
		for (int q = 1; (q <= i) && (l <= time); q++)
		{
			std::cout << i << " ";
			l++;
		}
	}
	return 0;
}