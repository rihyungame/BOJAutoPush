#include <iostream>

int main() {
	int h, m, temp;
	std::cin >> h >> m;
	if (m - 45 < 0) {
		temp = 45 - m;
		temp = 60 - temp;
		m = temp;
		if (h - 1 < 0)
			h = 23;
		else
			h -= 1;
	}
	else {
		m -= 45;
	}
	std::cout << h << " " << m;
}