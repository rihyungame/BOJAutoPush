#include <iostream>

int main() {
	int x_a, y_b, y_c, y_d, p;
	int x_total, y_total;
	
	std::cin >> x_a >> y_b >> y_c >> y_d >> p;

	x_total = x_a * p;
	y_total = y_b;
	if (p > y_c)
		y_total += (p - y_c) * y_d;

	if (x_total < y_total)
		std::cout << x_total;
	else
		std::cout << y_total;

	return 0;
}