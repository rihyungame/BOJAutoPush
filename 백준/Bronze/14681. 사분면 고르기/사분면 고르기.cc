#include <iostream>

int main() {
	int x, y;
	std::cin >> x >> y;

	if (x > 0) {
		if (y > 0)
			std::cout << "1";
		else
			std::cout << "4";
	}
	else if (x < 0) {
		if (y > 0)
			std::cout << "2";
		if (y < 0)
			std::cout << "3";
	}
}