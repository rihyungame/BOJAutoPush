#include <iostream>

int main() {
	int c_num;
	int h, g, y;
	std::cin >> c_num >> h >> g >> y;

	if (h > c_num)
		h = c_num;

	if (g > c_num)
		g = c_num;	

	if (y > c_num)
		y = c_num;

	std::cout << h + g + y;

	return 0;
}