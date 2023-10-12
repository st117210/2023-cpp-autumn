#include<iostream>

int main(int argc, char* argv[])
{
    unsigned int n = 0;
    std::cin >> n;

    unsigned int k = n;

    int countzero = 0;
    while (n != 0)
    {
        countzero += ((n & 1) != 1);
        n = n >> 1;
    }

    int countone = 0;
    while (k != 0)
    {
        countone += k & 1;
        k = k >> 1;
    }

    std::cout << countone + countzero;

    return EXIT_SUCCESS;
}