#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int temp, prev = 0;
		std::cin >> temp;

		for (int j = 0; j < temp; j++)
		{
			int total = std::pow(j, 2) + j;

			if (total > temp)
			{
				break;
			}
			else
			{
				prev = j;
			}			
		}		
		std::cout << prev << '\n';
	}
	return 0;
}