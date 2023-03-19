#include <iostream>

int main() {
	int h = 0, m = 0, cTime = 0, hUp = 0, temp = 0;
	std::cin >> h >> m >> cTime;

	if (cTime + m >= 60) {
		hUp = (cTime + m) / 60;
		m = (cTime + m) % 60;
	}

	else {
		m += cTime;
	}

	if (h + hUp >= 24) {
		temp = h + hUp;
		h = temp - 24;
	}

	else {
		h += hUp;
	}

	std::cout << h << " " << m;
}