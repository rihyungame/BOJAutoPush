#include <iostream>
#include <math.h>

int main() {
	
	double m, average;
	std::cin >> m >> average;

	average -= 0.99;
	std::cout << ceil(m * average);

	return 0;
}
