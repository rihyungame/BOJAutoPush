#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int a, b, c;

	std::cin >> a >> b >> c;

	if (a == 0)
	{
		std::cout << (int)std::pow(c, 2) - b;
	}
	else if (b == 0)
	{
		std::cout << (int)std::pow(c, 2) - a;
	}
	else if (c == 0)
	{
		std::cout << (int)std::sqrt(a + b);
	}

	return 0;
}