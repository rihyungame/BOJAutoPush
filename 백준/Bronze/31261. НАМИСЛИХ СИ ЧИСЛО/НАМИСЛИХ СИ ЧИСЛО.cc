#include <iostream>
#include <cmath>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	// 7 33 2009
	// ( x / a - a ) / a - a = b
	// (x / a) - a / a = a + b
	// (x / a - a = a( a + b)
	// x = a^2 ( a + b ) + a^2

	int a, b;
	std::cin >> a >> b;
	std::cout << (int)(pow(a, 2) * (a + b) + pow(a, 2));

	return 0;
}