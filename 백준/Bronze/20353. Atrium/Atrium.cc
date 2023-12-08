#include <iostream>
#include <cmath>

int main()
{
	unsigned long long int n;
	std::cin >> n;

	double result = sqrt(n) * 4;

	std::cout << std::fixed;
	std::cout.precision(6);

	std::cout << result;

	return 0;
}