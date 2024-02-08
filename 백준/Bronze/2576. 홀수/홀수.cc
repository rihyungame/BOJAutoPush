#include <iostream>
#include <climits>

int main()
{
	int total = 0;
	int min = INT_MAX;

	for (int i = 0; i < 7; ++i)
	{
		int n, temp;
		std::cin >> n;

		if (n % 2 == 1)
		{
			total += n;

			if (min > n)
			{
				min = n;
			}
		}
	}

	if (min == INT_MAX)
	{
		std::cout << -1;
	}
	else
	{
		std::cout << total << '\n' << min;
	}

	
	return 0;
}