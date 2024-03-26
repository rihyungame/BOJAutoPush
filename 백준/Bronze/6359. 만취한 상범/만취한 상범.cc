#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;
	std::cin >> n;

	for (int s = 0; s < n; s++)
	{
		int k;
		std::cin >> k;

		std::vector<int> group(k , 1);
		
		for (int i = 2; i <= group.size(); i++)
		{
			for (int j = 1; i * j <= group.size(); j++)
			{
				int temp = (i * j) - 1;

				if (group[temp])
				{
					group[temp] = 0;
				}
				else
				{
					group[temp] = 1;
				}
			}
		}

		int res = 0;

		for (int v : group)
		{
			if (v)
			{
				res++;
			}
		}
		
		std::cout << res << '\n';
	}

	return 0;
}
