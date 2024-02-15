#include <iostream>
#include <vector>
#include <climits>

int main()
{
	std::vector<int> group(5, 0);

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			int n;
			std::cin >> n;
			group[i] += n;
		}
	}

	int maxValue = INT_MIN;
	int maxIndex = 0;

	for (int i = 0; i < 5; ++i)
	{
		if (group[i] > maxValue)
		{
			maxIndex = i + 1;
			maxValue = group[i];
		}
	}

	std::cout << maxIndex << " " << maxValue;

	return 0;
}