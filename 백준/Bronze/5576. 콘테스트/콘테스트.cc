#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	std::vector<int> wGroup(10), kGroup(10);

	for (int i = 0; i < 10; i++)
	{
		std::cin >> wGroup[i];
	}

	for (int i = 0; i < 10; i++)
	{
		std::cin >> kGroup[i];
	}

	std::sort(wGroup.begin(), wGroup.end());
	std::sort(kGroup.begin(), kGroup.end());


	std::cout << wGroup[9] + wGroup[8] + wGroup[7] << " " << kGroup[9] + kGroup[8] + kGroup[7];
	return 0;
}
