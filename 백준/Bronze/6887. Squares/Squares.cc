#include <iostream>
#include <cmath>

int main()
{
	int n;
	std::cin >> n;

	n = floor(sqrt(n));
	std::cout << "The largest square has side length " << n << '.';
	return 0;
}