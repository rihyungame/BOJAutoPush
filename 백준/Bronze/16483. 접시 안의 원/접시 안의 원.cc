#include <iostream>
#include <cmath>

int main()
{
	double n;
	std::cin >> n;

	double t = std::pow(n/2, 2);
	t = std::round(t);
	std::cout << (int)t;

	return 0;
}