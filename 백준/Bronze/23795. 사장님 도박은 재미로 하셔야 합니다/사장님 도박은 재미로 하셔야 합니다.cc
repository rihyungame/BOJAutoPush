#include <iostream>

int main() {
	long int total = 0;

	while (true) {
		long int n;
		std::cin >> n;
		if (n == -1)
			break;
		total += n;
	}
	std::cout << total;
	return 0;
}
