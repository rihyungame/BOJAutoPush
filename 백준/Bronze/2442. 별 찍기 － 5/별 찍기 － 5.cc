#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int count;
	std::cin >> count;

	for (int i = 1; i <= count; i++)
	{
		for (int j = count - i; j > 0; j--)
		{
			std::cout << " ";
		}

		for (int k = 2 * i - 1; k > 0; k--)
		{
			std::cout << "*";
		}

		std::cout << '\n';
	}

	return 0;
}