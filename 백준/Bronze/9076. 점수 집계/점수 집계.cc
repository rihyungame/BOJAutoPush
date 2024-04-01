#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		std::vector<int> group(5);

		for (int j = 0; j < 5; j++)
		{
			std::cin >> group[j];
		}

		std::sort(group.begin(), group.end());

		if (group[3] - group[1] >= 4)
		{
			std::cout << "KIN" << '\n';
		}
		else
		{
			std::cout << group[1] + group[2] + group[3] << '\n';
		}
	}

	return 0;
}
