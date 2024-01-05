#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

int main()
{
	unsigned long long area;
	std::cin >> area;

	double r = sqrt((area / M_PI));
	double crcufn = r * M_PI * 2;
	
	std::cout << std::fixed;
	std::cout.precision(9);

	std::cout << crcufn;

	return 0;
}