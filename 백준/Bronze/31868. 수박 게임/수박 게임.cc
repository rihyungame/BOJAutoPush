#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, k;
	std::cin >> n >> k;

	for (int i = 0; i < n - 1; i++)
	{
		k /= 2;
	}

	std::cout << k;

	return 0;
}