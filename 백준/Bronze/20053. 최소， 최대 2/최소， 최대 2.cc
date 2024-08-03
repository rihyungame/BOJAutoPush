#include <iostream>
#include <climits>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int size;
		std::cin >> size;

		int max = INT_MIN, min = INT_MAX;

		for (int j = 0; j < size; j++)
		{
			int temp;
			std::cin >> temp;

			if (max < temp)
			{
				max = temp;
			}

			if (min > temp)
			{
				min = temp;
			}
		}

		std::cout << min << " " << max << '\n';
	}

	return 0;
}