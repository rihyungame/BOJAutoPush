#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;

		if (temp <= 25)
		{
			std::cout << "Case #" << i+1 << ": World Finals";
		}
		else if (temp <= 1000)
		{
			std::cout << "Case #" << i + 1 << ": Round 3";
		}
		else if (temp <= 4500)
		{
			std::cout << "Case #" << i + 1 << ": Round 2";
		}
		else
		{
			std::cout << "Case #" << i + 1 << ": Round 1";
		}

		std::cout << '\n';
	}

	return 0;
}