#include <iostream>
#include <time.h>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	srand(time(NULL));

	int a, b, rnd, count;

	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		std::cin >> a >> b;

		while (true)
		{

		rnd = rand() % 51;
		
			if (rnd != a + b && rnd != 0)
			{
				break;
			}
		}

		std::cout << rnd << '\n';
	}

	return 0;
}