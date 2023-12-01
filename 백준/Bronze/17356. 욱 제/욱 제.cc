#include <iostream>
#include <cmath>

int main()
{
	double u, j;
	std::cin >> u >> j;

	double temp = (j - u) / 400;
	double result = 1 / (1 + pow(10, temp));

	std::cout << result;
	return 0;
}