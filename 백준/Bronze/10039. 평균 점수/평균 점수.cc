#include <iostream>

int main() {
	int total = 0;
	for (int i = 0; i < 5; i++) {
		int n;
		std::cin >> n;
		if (n < 40)
			total += 40;
		else
			total += n;
	}
	std::cout << total / 5;
	return 0;
}