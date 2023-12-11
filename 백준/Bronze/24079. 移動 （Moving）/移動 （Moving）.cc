#include <iostream>

int main()
{
	int x, y, z;
	std::cin >> x >> y >> z;

	if (x + y > z)
		std::cout << 0;
	else
		std::cout << 1;

	return 0;
}