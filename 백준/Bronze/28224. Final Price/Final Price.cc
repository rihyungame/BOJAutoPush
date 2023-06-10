#include <iostream>

int main() {
	int n, total = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		std::cin >> temp;
		total += temp;
	}

	std::cout << total;
	return 0;
}