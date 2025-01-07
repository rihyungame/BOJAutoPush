#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int n;
	std::cin >> n;

	std::cout << n - 2024;

	return 0;
}