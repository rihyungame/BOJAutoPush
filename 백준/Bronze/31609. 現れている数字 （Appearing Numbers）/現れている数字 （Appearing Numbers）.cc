#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int count;
	std::cin >> count;

	std::vector<int> group;

	for (int i = 0; i < count; i++)
	{
		int tmp;
		std::cin >> tmp;

		if (std::find(group.begin(), group.end(), tmp) == group.end())
		{
			group.push_back(tmp);
		}
	}

	std::sort(group.begin(), group.end());

	for (int v : group)
	{
		std::cout << v << '\n';
	}
	
	return 0;
}