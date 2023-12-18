#include<iostream>

int n[4]{ 0 };
int** d = new int* [4] { nullptr, new int[10], new int[10], new int[10] };

void shift(int from, int to);
void hanoi(int count, int from, int to);
void sort(int a = 1);
int top(int a);

int main(int argc, char* argv[])
{
	std::cin >> n[1];
	for (int i = n[1] - 1; i >= 0; --i)
	{
		std::cin >> d[1][i];
	}
	sort();

	return EXIT_SUCCESS;
}

void shift(int from, int to)
{
	std::cout << d[from][n[from] - 1] << " " << from << " " << to << std::endl;
	d[to][n[to]++] = d[from][--n[from]];
}

void hanoi(int count, int from, int to)
{
	if (count == 0)
	{
		return;
	}

	int res = 6 - from - to;

	hanoi(count - 1, from, res);
	shift(from, to); //std::cout << count << " " << from << " " << to << std::endl;
	hanoi(count - 1, res, to);
}

int top(int a) //top disk size
{
	if (n[a] > 0)
	{
		return d[a][n[a] - 1];
	}
	else
	{
		return 10; //If the rod is empty, then this top() = MaxInt = 10
	}
}

void sort(int a)
{
	int b = 2;
	int c = 3;

	while (n[a] > 0)
	{//transferring disks from the first to the third until the first rod becomes empty
		int k = top(a);
		while (k > top(c))
		{
			int q = 0; //counter with which we will move the sorted mini tower
			for (int i = 0; i < n[b]; ++i)
			{
				if (d[b][i] > top(c))
				{
					++q;
				}
			}
			hanoi(n[b] - q, b, c);  //B.otsortirovanay mini bashna -> C.otsortirovanay mini bashna | Two towers with rods B and C are connected.
			std::swap(b, c);
		}
		shift(a, c);
	}

	while (n[c] > 0)
	{//after the top ñycle we connect the two sorted towers. Cycle for assembling a complete tower
		int q = 0;
		for (int i = 0; i < n[b]; ++i)
		{
			if (d[b][i] > top(c))
			{
				q++;
			}
		}
		hanoi(n[b] - q, b, c);
		std::swap(b, c);
	}
}
