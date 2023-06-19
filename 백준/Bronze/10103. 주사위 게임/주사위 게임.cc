#include <iostream>

int main() {
	int n;
	int score_a = 100, score_b = 100;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		std::cin >> a >> b;

		if (a == b)
			continue;
		else if (a > b)
			score_b -= a;
		else if (a < b)
			score_a -= b;
	}
	
	std::cout << score_a << std::endl << score_b;
	return 0;
}
