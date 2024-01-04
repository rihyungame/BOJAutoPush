#include <iostream>

int main()
{
	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int n;
		std::cin >> n;

		std::cin.ignore();

		char ch;
		std::cin >> ch;

		for (int j = 0; j < n; j++)
		{
			std::cout << ch;
		}

		std::cout << '\n';
	}

	return 0;
}