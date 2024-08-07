#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	std::vector<int> group;

	for (int i = 0; i < 3; i++)
	{
		int temp;
		std::cin >> temp;

		group.push_back(temp);
	}

	sort(group.begin(), group.end());

	std::string s;
	std::cin >> s;

	for (std::string::size_type i = 0; i < 3; i++)
	{
		if (s[i] == 'A')
		{
			std::cout << group[0];
		}
		else if (s[i] == 'B')
		{
			std::cout << group[1];
		}
		else if (s[i] == 'C')
		{
			std::cout << group[2];
		}

		std::cout << " ";
	}

	return 0;
}