#include <iostream>

int main()
{
	int x, y, w, h;
	std::cin >> x >> y >> w >> h;

	int x_diff = w - x > x ? x : w - x;
	int	y_diff = h - y > y ? y : h - y;

	if (x_diff > y_diff)
		std::cout << y_diff;
	else
		std::cout << x_diff;

	return 0;
}