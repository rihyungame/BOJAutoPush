#include <iostream>

int main() {
	long long int p, t, result = 0;
	int n = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> p >> t;
		result = p + (t / 4) - (t / 7);
		std::cout << result << "\n";
	}

	return 0;
}