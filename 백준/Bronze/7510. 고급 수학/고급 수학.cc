#include <iostream>
#include <climits>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int max = INT_MIN;
		int a, b, c;

		std::cin >> a >> b >> c;

		if (a < b)
		{
			int temp = a;
			a = b;
			b = temp;
		}

		if (a < c)
		{
			int temp = a;
			a = c;
			c = temp;
		}

		if (b < c)
		{
			int temp = b;
			b = c;
			c = temp;
		}

		std::cout << "Scenario #" << i + 1 << ":" << '\n';

		if (sqrt(pow(b, 2) + pow(c, 2)) == sqrt((pow(a, 2))))
		{
			std::cout << "yes";
		}
		else
		{
			std::cout << "no";
		}

		std::cout << "\n\n";
	}

	return 0;
}