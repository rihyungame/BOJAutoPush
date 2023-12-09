#include <iostream>

int main()
{
	int count;

	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int x, y;

		std::cin >> x >> y;

		if (x >= y)
			std::cout << "MMM BRAINS";
		else
			std::cout << "NO BRAINS";

		std::cout << std::endl;
	}

	return 0;
}