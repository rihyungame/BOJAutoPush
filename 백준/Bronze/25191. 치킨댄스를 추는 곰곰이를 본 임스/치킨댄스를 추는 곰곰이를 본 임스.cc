#include <iostream>

int main() {
	int ch, co, ma;
	int count = 0;
	std::cin >> ch >> co >> ma;
	
	count = std::min(ch, co / 2 + ma);

	std::cout << count;
	return 0;
}
