#include <iostream>

int main() {
	int n;
	while (true) {
		std::cin >> n;
		if (n == 0)
			break;
		for (int i = 0; i < n; i++) {
			for (int j = i; j >= 0; j--) {
				std::cout << "*";
			}
			std::cout << "\n";
		}
	}
	return 0;
}
