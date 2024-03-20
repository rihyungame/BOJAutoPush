#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, count = 1, time = 0;
	std::cin >> n;

	int total = n;

	while (total > 0)
	{
		if (count > total)
		{
			count = 1;
		}

		total -= count;
		count++;
		time++;
	}
	
	std::cout << time;
	return 0;
}