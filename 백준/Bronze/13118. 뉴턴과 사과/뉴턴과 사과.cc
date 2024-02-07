#include <iostream>
#include <vector>

int main()
{
	std::vector<int> group;
	bool isTrue = false;
	int x, y, r;

	for (int i = 0; i < 4; ++i)
	{
		int n;
		std::cin >> n;
		group.push_back(n);
	}

	std::cin >> x >> y >> r;

	for (std::vector<int>::size_type i = 0; i < group.size(); ++i)
	{
		if (group[i] == x)
		{
			std::cout << i + 1;
			isTrue = true;
			break;
		}
	}

	if (isTrue == false)
	{
		std::cout << 0;
	}

	return 0;
}