#include <iostream>

int main() {
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		for (int k = n - i - 1; k > 0; k--) {
			std::cout << " ";
		}
		for (int j = 0; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	return 0;
}