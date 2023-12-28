#include <iostream>

int main()
{
	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int h, w, n, unit = 0;
		std::cin >> h >> w >> n;

		if (n % h == 0)
		{
			unit += h * 100;
			unit += n / h;
		}
		else
		{
			unit += n % h * 100;
			unit += n / h + 1;

		}

		std::cout << unit << '\n';

	}

	return 0;
}