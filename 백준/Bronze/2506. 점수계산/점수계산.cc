#include <iostream>

int main() {
	int count, n, n_straight = 0, total = 0;
	bool flag_straight = false;

	std::cin >> count;

	for (int i = 0; i < count; i++) {
		std::cin >> n;

		total += n;

		if (n) {
			flag_straight = true;
		}

		else {
			n_straight = 0;
			flag_straight = false;
		}

		if (flag_straight && n)
			total += n_straight++;
			
	}

	std::cout << total;
	return 0;
}
