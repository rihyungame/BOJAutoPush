#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;
	std::cin >> n;

	int total = 0;

	for (int i = 0; i < n; i++)
	{
		int tmp = i + 1;

		total += std::pow(tmp, 3);
	}

	std::cout << total;

	return 0;
}