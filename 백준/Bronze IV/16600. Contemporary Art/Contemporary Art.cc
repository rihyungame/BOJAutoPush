#include <iostream>
#include <cmath>

int main()
{
	double n;
	std::cin >> n;

	std::cout << std::fixed;
	std::cout.precision(6);
	std::cout << std::sqrt(n) * 4;
	return 0;
}