#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int now, limit;
	std::cin >> now >> limit;

	int count = (limit - now) / 60;


	std::cout << "All positions change in year " << now << '\n';

	for (int i = 0; i < count; i++)
	{
		std::cout << "All positions change in year " << now + ((i + 1) * 60) << '\n';
	}

	return 0;
}