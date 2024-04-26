#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int count;
	std::cin >> count;

	int zero = 0, one = 0;

	for (int i = 0; i < count; i++)
	{
		int n;
		std::cin >> n;

		if (n == 1)
		{
			one++;
		}
		else
		{
			zero++;
		}
	}

	if (zero > one)
	{
		std::cout << one;
	}
	else
	{
		std::cout << zero;
	}

	return 0;
}