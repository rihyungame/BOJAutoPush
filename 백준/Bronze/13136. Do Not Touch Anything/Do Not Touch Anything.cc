#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	double x, y, cctv;

	long long result;

	std::cin >> x >> y >> cctv;

	result = std::ceil(x / cctv) * std::ceil(y / cctv);

	std::cout << result;

	return 0;
}