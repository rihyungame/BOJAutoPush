#include <iostream>

int main() {
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((i + 1) % 2 == 0)
				std::cout << " " << "*";
			else
				std::cout << "*" << " ";
		}
		if (i != n - 1) {
			std::cout << "\n";
		}
	}

	return 0;
}
