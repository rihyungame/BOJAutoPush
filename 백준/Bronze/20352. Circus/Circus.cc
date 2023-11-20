#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

int main()
{
	double n, r;
	std::cin >> n;

	r = n / M_PI;
	r = sqrt(r);
	r = 2 * r * M_PI;

	std::cout.precision(12);
	std::cout << r;
    
	return 0;
}