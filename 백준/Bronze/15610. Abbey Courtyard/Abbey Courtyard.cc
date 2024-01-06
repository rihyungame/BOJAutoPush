#include <iostream>
#include <cmath>

int main()
{
	unsigned long long area;
	std::cin >> area;

	double r = sqrt(area);

	std::cout << std::fixed;
	std::cout.precision(8);

	std::cout << r * 4;

	return 0;
}