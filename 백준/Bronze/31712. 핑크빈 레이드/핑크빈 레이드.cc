#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	std::vector<std::pair<int, int>> group;

	int target, total = 0;

	for (int i = 0; i < 3; i++)
	{
		int _time, _dmg;
		std::cin >> _time >> _dmg;

		total += _dmg;

		group.push_back(std::make_pair(_time, _dmg));
	}

	std::sort(group.begin(), group.end());
	
	std::cin >> target;

	int time = 0, idx = 0;
	while (total < target)
	{
		time++;

		if (time % group[0].first == 0)
		{
			total += group[0].second;
		}

		if (time % group[1].first == 0)
		{
			total += group[1].second;
		}
		
		if (time % group[2].first == 0)
		{
			total += group[2].second;
		}
	}

	std::cout << time;
	return 0;
}