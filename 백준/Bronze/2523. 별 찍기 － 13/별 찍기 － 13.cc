#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count;
	std::cin >> count;

	bool isMax = false;

	for (int i = 0; i < count * 2 - 1; i++)
	{
		if (i == count)
		{
			isMax = true;
		}

		if (!isMax)
		{
			for (int j = 0; j < i + 1; j++)
			{
				std::cout << "*";
			}
		}
		else
		{
			for (int j = count * 2 - 1 - i; j > 0; j--)
			{
				std::cout << "*";
			}
		}
		std::cout << '\n';
	}

	return 0;
}