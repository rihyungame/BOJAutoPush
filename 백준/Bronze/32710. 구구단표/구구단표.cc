#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	std::vector<int> result;

	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int temp = i * j;

			if (result.end() == std::find(result.begin(), result.end(), temp))
			{
				result.push_back(temp);
			}
		}
	}

	int n;
	std::cin >> n;

	if (result.end() == std::find(result.begin(), result.end(), n) && (n != 1))
	{
		std::cout << 0;
	}
	else
	{
		std::cout << 1;
	}

	return 0;
}