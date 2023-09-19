#include <iostream>
#include <iomanip>

int main()
{
	double w, h;

	std::cin >> w >> h;
	double s = w * h / 2;

	std::cout << std::fixed << std::setprecision(1) << s;

	//printf("%.1f", s);

	return 0;
}