#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int height, width;
	std::cin >> height >> width;

	for (int i = 0; i < height; i++)
	{
		for (int j = 1; j <= width; j++)
		{
			std::cout << i * width + j;

			if (j != width)
			{
				std::cout << " ";
			}
		}
		std::cout << '\n';
	}

	return 0;
}