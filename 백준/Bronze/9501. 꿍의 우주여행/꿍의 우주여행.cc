#include <iostream>

int main() {
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		int n_car, succe = 0;
		float dist;
		std::cin >> n_car >> dist;
		for (int j = 0; j < n_car; j++) {
			float v, f, c;
			std::cin >> v >> f >> c;
			if (v / c * f >= dist)
				succe++;
		}
		std::cout << succe << '\n';
	}
	return 0;
}