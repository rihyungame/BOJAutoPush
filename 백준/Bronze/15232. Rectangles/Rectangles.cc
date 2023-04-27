#include <iostream>

int main() {
	int R, C;
	std::cin >> R >> C;

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
	return 0;
}