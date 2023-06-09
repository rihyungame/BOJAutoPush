#include <iostream>

int main() {
	int a1, b1, a2, b2;
	std::cin >> a1 >> b1 >> a2 >> b2;

	if (a1 + b2 > b1 + a2)
		std::cout << b1 + a2;
	else
		std::cout << a1 + b2;

	return 0;
}
