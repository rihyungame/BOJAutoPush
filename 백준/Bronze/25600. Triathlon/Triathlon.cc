#include <iostream>
#include <climits>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int count, max = INT_MIN;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int a, d, g;
		std::cin >> a >> d >> g;

		int total = 1;

		if (a == d + g)
		{
			total = 2;
		}

		total *= (a * (d + g));

		if (max < total)
		{
			max = total;
		}
	}

	std::cout << max;

	return 0;
}