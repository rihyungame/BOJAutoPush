#include <iostream>

int main() {
	int n, total = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int m;
		std::cin >> m;
		total += m;
	}
	std::cout << total;
	return 0;
}