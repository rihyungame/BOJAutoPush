#include <iostream>

int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = n - i - 1; j > 0; j--)
			std::cout << " ";
		for (int k = i + 1; k > 0; k--)
			std::cout << "*";
		std::cout << std::endl;
	}
	for (int i = 0; i < n - 1; i++) {
		for (int k = i + 1; k > 0; k--)
			std::cout << " ";
		for (int j = n - i - 1; j > 0; j--)
			std::cout << "*";
		std::cout << std::endl;

	}

	return 0;
}
