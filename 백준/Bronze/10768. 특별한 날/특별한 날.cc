#include <iostream>

int main() {
	int m, d;
	std::cin >> m >> d;

	if (m == 1)
		std::cout << "Before";
	else if (m == 2) {
		if (d < 18)
			std::cout << "Before";
		else if (d == 18)
			std::cout << "Special";
		else
			std::cout << "After";
	}
	else 
		std::cout << "After";

	return 0;
}
