#include <iostream>
#include <climits>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int count;
	std::cin >> count;

	int max = INT_MIN;
	int min = INT_MAX;
		
	for (int i = 0; i < count; i++)
	{
		int n;
		std::cin >> n;

		if (max < n)
		{
			max = n;
		}

		if (min > n)
		{
			min = n;
		}
	}

	std::cout << max - min;

	return 0;
}