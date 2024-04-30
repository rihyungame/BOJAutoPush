#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int width, height;
		std::cin >> width >> height;

		for (int j = 0; j < height; j++)
		{
			for (int k = 0; k < width; k++)
			{
				std::cout << "X";
			}
			std::cout << '\n';
		}
		std::cout << '\n';
	}

	return 0;
}