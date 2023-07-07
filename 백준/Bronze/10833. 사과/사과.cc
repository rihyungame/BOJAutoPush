#include <iostream>

int main() {
	int student, apple, total = 0, n;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> student >> apple;
		total += (apple % student);
	}

	std::cout << total;

	return 0;
}
