#include <iostream>
#include <cmath>

int main() 
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;

	std::cout << std::abs((a + d) - (b + c));

	return 0;
}