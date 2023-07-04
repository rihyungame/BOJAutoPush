#include <iostream>

void MaxCheck(int* total, int* max) {
	if (*total > *max)
		*max = *total;
}

int main() {
	int total = 0;
	int max = 0;
	for (int i = 0; i < 10; i++) {
		int p, m;
		std::cin >> m >> p;
		
		total -= m;
		MaxCheck(&total, &max);

		total += p;
		MaxCheck(&total, &max);
	}

	std::cout << max;

	return 0;
}
