#include <iostream>
#include <vector>

int main()
{
	std::vector<int> group;
	for (int i = 0; i < 4; ++i)
	{
		int n;
		std::cin >> n;

		group.push_back(n);
	}

	bool isSpam = false;

	if (group[0] == 8 || group[0] == 9)
	{
		if (group[3] == 8 || group[3] == 9)
		{
			if (group[1] == group[2])
			{
				isSpam = true;
			}
		}
	}

	if (isSpam)
	{
		std::cout << "ignore";

	}
	else
	{
		std::cout << "answer";
	}

	return 0;
}