#include <iostream>

int main() {
	int a, b;
	int max;
	std::cin >> a >> b;

	max = a / 2;
	if (max > b)
		max = b;

	std::cout << max;

	return 0;
}