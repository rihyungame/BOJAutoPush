#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int count;
	std::cin >> count;

	for (int i = count; i >= 2; i--)
	{

		for (int k = count - i; k > 0; k--)
		{
			std::cout << " ";
		}

		for (int j = 2 * i - 1; j > 0; j--)
		{
			std::cout << "*";
		}

		std::cout << '\n';
	}


	for (int i = 1; i <= count; i++)
	{
		for (int k = count - i; k > 0; k--)
		{
			std::cout << " ";
		}

		for (int j = 2 * i - 1; j > 0; j--)
		{
			std::cout << "*";
		}

		std::cout << '\n';
	}

	return 0;
}