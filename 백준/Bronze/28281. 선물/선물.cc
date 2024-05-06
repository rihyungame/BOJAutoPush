#include <iostream>
#include <vector>
#include <climits>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int count, price;
	std::cin >> count >> price;

	std::vector<int> group;

	int min = INT_MAX;
	for (int i = 0; i < count; i++)
	{
		int temp;
		std::cin >> temp;

		group.push_back(temp);

		if (group.size() == 1)
		{
			continue;
		}

		if (group[i - 1] * price + group[i] * price < min)
		{
			min = group[i - 1] * price + group[i] * price;
		}
	}
	
	std::cout << min;
	return 0;
}