#include <iostream>

int main() {
	int x, y;
	std::cin >> x >> y;
	if (x > y)
		std::cout << x + y;
	else if (x < y)
		std::cout << y - x;

	return 0;
}