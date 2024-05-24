#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int count, goal;
	std::cin >> count >> goal;

	int total = 0, result = 0;
	for (int i = 0; i < count; i++)
	{
		int temp;
		std::cin >> temp;

		total += temp;

		if (total <= 0)
		{
			total = 0;
		}

		if (total >= goal)
		{
			result++;
		}
	}

	std::cout << result;

	return 0;
}