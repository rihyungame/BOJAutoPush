#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

bool cmp(std::array<int, 2> &a1, std::array<int, 2> &a2)
{
	if (a1[1] == a2[1])
		return a1[0] < a2[0];
	else
		return a1[1] < a2[1];
}

int main()
{
	int count;
	std::cin >> count;

	std::array<int, 2> crdnt;
	std::vector<std::array<int, 2>> list;

	for (int i = 0; i < count; i++)
	{
		int x, y;		
		std::cin >> x >> y;
		crdnt[0] = x;
		crdnt[1] = y;
		list.push_back(crdnt);
	}

	std::sort(list.begin(), list.end(), cmp);

	for (auto &temp : list)
	{
		std::cout << temp[0] << ' ' << temp[1] << '\n';
	}

	return 0;
}