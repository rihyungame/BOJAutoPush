#include <iostream>

int main() {
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int p, n_option, total = 0;
		std::cin >> p >> n_option;
		for (int j = 0; j < n_option; j++) {
			int n1, n2;
			std::cin >> n1 >> n2;
			total += n1 * n2;
		}
		std::cout << p + total << "\n";
	}
}
