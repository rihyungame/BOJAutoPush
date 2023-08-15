#include <iostream>

int main() {
	int count, side_points = 2, rules = 1;
	int total = 0;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
		if (i != 0)
			rules *= 2;
		side_points += rules;
	}
	total = side_points * side_points;
	std::cout << total;
	return 0;
}
