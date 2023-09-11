#include <iostream>

int main()
{
	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int n, k, total = 0;
		std::cin >> n >> k;
		for (int j = 0; j < n; j++)
		{
			int candy;
			std::cin >> candy;
			total += candy / k;
		}
		std::cout << total << '\n';
	}

	return 0;
}