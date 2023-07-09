#include <iostream>

int main() {
	int total = 0, max = 0;

	for (int i = 0; i < 4; i++) {
		int in, out;
		std::cin >> out >> in;

		total -= out;

		if (max < total)
			max = total;

		total += in;

		if (max < total)
			max = total;
	}

	std::cout << max;
	return 0;
}
