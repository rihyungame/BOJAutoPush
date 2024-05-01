#include <iostream>
#include <climits>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	while (true)
	{
		int call, data;
		std::cin >> call >> data;

		if (call == 0 && data == 0)
		{
			break;
		}

		int total = INT_MAX;

		if (call * 30 + data * 40 < total)
		{
			total = call * 30 + data * 40;
		}

		if (call * 35 + data * 30 < total)
		{
			total = call * 35 + data * 30;
		}

		if (call * 40 + data * 20 < total)
		{
			total = call * 40 + data * 20;
		}

		std::cout << total << '\n';
	}

	return 0;
}