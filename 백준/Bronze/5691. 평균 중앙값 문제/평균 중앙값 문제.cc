#include <iostream>

int main() {
	
	int a, b, c;
	int min;

	while (true) {
		std::cin >> a >> b;

		if (a == 0 && b == 0)
			break;

		if (a > b)
			min = b;
		else
			min = a;

		c = 3 * min - a - b;

		std::cout << c << '\n';
	}

	return 0;
}
