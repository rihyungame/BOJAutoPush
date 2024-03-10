#include <iostream>
#include <vector>
#include <algorithm>

int main() 
{
	std::vector<int> group;

	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int n;
		std::cin >> n;

		group.push_back(n);
	}

	std::sort(group.begin(), group.end());

	for (int i : group)
	{
		std::cout << i << '\n';
	}

	return 0;
}
