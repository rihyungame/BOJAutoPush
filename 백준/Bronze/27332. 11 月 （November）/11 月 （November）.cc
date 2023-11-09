#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	if (a + b * 7 > 30)
		std::cout << 0;
	else
		std::cout << 1;

	return 0;
}