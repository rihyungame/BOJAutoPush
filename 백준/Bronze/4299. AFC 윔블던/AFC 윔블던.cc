#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int a, b, sum, minus;
	std::cin >> sum >> minus;

	if (sum < minus)
	{
		std::cout << -1;
	}
	else
	{
		a = (sum + minus) / 2;
		b = sum - a;

		if (a + b == sum && a - b == minus)
		{
			if (a > b)
			{
				std::cout << a << " " << b;
			}
			else
			{
				std::cout << b << " " << a;
			}

		}
		
		else
		{
			std::cout << -1;
		}

	}

	return 0;
}