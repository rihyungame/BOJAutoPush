#include <iostream>

int main()
{
	while (true)
	{
		int n, total = 0;
		std::cin >> n;

		if (n == 0)
			break;

		for (int i = 1; i <= n; i++)
		{
			total += i;
		}

		std::cout << total << std::endl;
	}
	
	return 0;
}