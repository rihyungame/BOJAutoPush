#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int main()
{
	double r;
	std::cin >> r;

	std::cout << std::fixed;
	std::cout.precision(4);

	std::cout << M_PI * std::pow(r, 2) << '\n';
	std::cout << 2 * std::pow(r, 2);

	return 0;
}