#include <iostream>

int main() {
	int n, t1, t2;
	int total_t = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		std::cin >> temp;
		total_t += temp;
	}

	total_t += 8 * (n - 1);
	std::cout << total_t / 24 << " " << total_t % 24;
	
	return 0;
}
