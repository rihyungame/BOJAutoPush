#include <iostream>

int main()
{
	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int n;
		std::cin >> n;
		for (int j = 0; j < n; j++)
		{
			std::cout << "=";
		}
		std::cout << '\n';
	}

	return 0;
}