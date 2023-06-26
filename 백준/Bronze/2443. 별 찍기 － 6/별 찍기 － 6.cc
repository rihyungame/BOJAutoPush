#include <iostream>

int main() {
	int n, space = 0;
	std::cin >> n;
	int n_start = 2 * n - 1;

	while (true) {
		if (n_start < 1)
			break;

		for (int i = 0; i < space; i++)
			std::cout << " ";

		for (int i = 0; i < n_start; i++)
			std::cout << "*";
		std::cout << std::endl;

		n_start -= 2;
		space += 1;
	}

	return 0;
}
