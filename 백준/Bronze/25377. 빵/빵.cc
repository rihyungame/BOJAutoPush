#include <iostream>
#include <climits>

int main()
{
	int n, min = INT_MAX;
	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int myUseTime, breadTime;
		std::cin >> myUseTime >> breadTime;

		if (myUseTime <= breadTime)
		{
			if (min > breadTime)
			{
				min = breadTime;
			}
		}
	}

	if (min != INT_MAX)
	{
		std::cout << min;
	}
	else
	{
		std::cout << -1;
	}

	return 0;
}