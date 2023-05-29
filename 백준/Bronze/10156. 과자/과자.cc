#include <iostream>

int main() {
	int k, n, m;
	std::cin >> k >> n >> m;
	if (k * n > m)
		std::cout << (k * n) - m;
	else
		std::cout << 0;

	return 0;
}
