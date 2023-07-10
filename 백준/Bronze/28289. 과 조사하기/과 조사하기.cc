#include <iostream>

int main() {
	int count;
	int sf = 0, ib = 0, ai = 0, etc = 0;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
		int g, c, n;
		std::cin >> g >> c >> n;
		if (g == 1) {
			etc++;
		}
		else {
			if (c == 1 || c == 2) {
				sf++;
			}
			else if (c == 3) {
				ib++;
			}
			else {
				ai++;
			}
		}
	}

	std::cout << sf << "\n";
	std::cout << ib << "\n";
	std::cout << ai << "\n";
	std::cout << etc;

	return 0;
}
