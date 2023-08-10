#include <iostream>
#include <cmath>

int main() {
	int x, y, f_x, f_y;
	int count, total = 0;
	std::cin >> count >> x >> y;
	f_x = x;
	f_y = y;
	for (int i = 0; i < count - 1; i++) {
		int _x, _y;
		std::cin >> _x >> _y;
		total += sqrt(pow(((_x) - (x)),2) + pow(((_y) - (y)),2));
		x = _x;
		y = _y;
	}
	total += sqrt(pow(((f_x)-(x)), 2) + pow(((f_y)-(y)), 2));

	std::cout << total;
	return 0;
}