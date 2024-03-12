#include <iostream>
#include <vector>

int main()
{
	int total = 1;
	int n;
	std::vector<int> group(10, 0);

	for (int i = 0; i < 3; i++)
	{
		std::cin >> n;
		total *= n;
	}

	while (true)
	{
		if (total == 0)
		{
			break;
		}

		int remain = total % 10;
		total /= 10;

		group[remain]++;

	}
	
	for (int i : group)
	{
		std::cout << i << '\n';
	}

	return 0;
}