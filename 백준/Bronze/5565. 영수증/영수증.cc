#include <iostream>

int main() {
	int total_m;
	std::cin >> total_m;

	for (int i = 0; i < 9; i++) {
		int money;
		std::cin >> money;
		total_m -= money;
	}

	std::cout << total_m;
	return 0;
}
