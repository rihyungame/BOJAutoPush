#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int count;
	std::cin >> count;

	std::vector<int> group;
	for (int i = 0; i < count; i++)
	{
		int price;
		std::cin >> price;
		group.push_back(price);
	}

	int newbie;
	std::cin >> newbie;

	int total = 0;
	for (int i = 0; i < newbie; i++)
	{
		int num;
		std::cin >> num;

		total += group[num - 1];
	}

	std::cout << total;
	return 0;
}