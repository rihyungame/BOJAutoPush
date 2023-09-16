#include <iostream>
#include <cmath>

int main()
{
	while (true)
	{
		int n, total = 0;
		std::cin >> n;

		if (!n)
		{
			break;
		}

		for (int j = 1; j <= n; j++)
		{
			total += pow(j, 2);
		}

		std::cout << total << std::endl;
	}

	return 0;
}