#include <iostream>

int main() {
	int n;
	std::cin >> n;
	
	for (int i = 0; i < 5 * n - n; i++) {
		for (int i = 0; i < n; i++)
			std::cout << "@";
		std::cout << std::endl;
	}

	for (int i = 0; i < n; i++) {
		for (int i = 0; i < n * 5; i++)
			std::cout << "@";
		std::cout << std::endl;
	}
	return 0;
}
