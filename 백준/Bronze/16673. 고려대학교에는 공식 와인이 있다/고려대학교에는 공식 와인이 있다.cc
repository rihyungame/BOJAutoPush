#include <iostream>

int main() {
	int c, k, p, total = 0;
	std::cin >> c >> k >> p;
	for (int i = 1; i <= c; i++) {
		total += k * i + p * i * i;
	}
	std::cout << total;
	return 0;
}