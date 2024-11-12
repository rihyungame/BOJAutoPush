#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	long long angry = 0, total = 0, count;
	std::cin >> count;
	
	for (int i = 0; i < count; i++)
	{
		int n;
		std::cin >> n;

		if (n == 0)
		{
			angry -= 1;
		}
		else
		{
			angry += 1;
		}

		total += angry;
	}

	std::cout << total;

    return 0;
}