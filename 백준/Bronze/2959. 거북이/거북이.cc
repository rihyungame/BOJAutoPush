#include <iostream>
#include <algorithm>

int main() {
	int asc[4], des[4];
	int w, l;
	for (int i = 0; i < 4; i++) {
		std::cin >> asc[i];
		des[i] = asc[i];
	}
	std::sort(asc, asc + 4);
	std::sort(des, des + 4, std::greater<int>());

	if (abs(des[0] - des[1]))
		w = des[0] > des[1] ? des[1] : des[0];
	else
		w = des[0];

	if (abs(asc[1] - asc[0]))
		l = asc[1] > asc[0] ? asc[0] : asc[1];
	else
		l = asc[0];

	std::cout << w * l;
}