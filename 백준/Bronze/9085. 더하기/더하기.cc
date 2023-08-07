#include <iostream>

int main() {
	int count;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
		int n_count, n_sum = 0;
		std::cin >> n_count;
		for (int j = 0; j < n_count; j++) {
			int num;
			std::cin >> num;
			n_sum += num;
		}
		std::cout << n_sum << std::endl;
	}
	return 0;
}