#include <iostream>

int main()
{
	double per;
	std::cin >> per;
	std::cout << std::fixed;
	std::cout.precision(3);
	std::cout << (100 - per) / per + 1 << std::endl;
	std::cout << per / (100 - per) + 1;

	return 0;
}