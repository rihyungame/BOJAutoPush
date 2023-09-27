#include <iostream>

int main()
{
	double pi = 3.141592;
	double answer;
	int d1, d2;

	std::cin >> d1 >> d2;

	answer = d1 * 2 + d2 * 2 * pi;

	std::cout << std::fixed;
	std::cout.precision(6);
	std::cout << answer;

	return 0;
}