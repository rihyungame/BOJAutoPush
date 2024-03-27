#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int h, m;
	std::cin >> h >> m;

	std::cout << h * 60 + m;
	return 0;
}
