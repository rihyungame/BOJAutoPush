#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	double a, b;
	std::cin >> a >> b;

	double result = a + b - std::sqrt(a * a + b * b);

	std::cout << std::fixed;
	std::cout.precision(6);

	std::cout << result;
	
	return 0;
}