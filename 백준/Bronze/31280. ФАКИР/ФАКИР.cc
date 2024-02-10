#include <iostream>
#include <climits>

int main()
{
	int min = INT_MAX;
	int total = 0;

	for (int i = 0; i < 4; ++i)
	{
		int n;
		std::cin >> n;

		total += n;

		if (min > n)
		{
			min = n;
		}
	}

	std::cout << total - (min - 1);
	return 0;
}