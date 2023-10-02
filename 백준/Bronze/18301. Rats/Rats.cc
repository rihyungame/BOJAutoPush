#include <iostream>
#include <cmath>

int main()
{
	int n1, n2 ,n12;

	std::cin >> n1 >> n2 >> n12;
	std::cout << std::ceil((n1 + 1) * (n2 + 1) / (n12 + 1) - 1);

	return 0;
}