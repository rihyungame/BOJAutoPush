#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;
	std::cin >> n;

	while (true)
	{
		int temp;
		std::cin >> temp;

		if (temp == 0)
		{
			break;
		}

		if (temp % n == 0)
		{
			std::cout << temp << " is a multiple of "<< n <<".";
		}
		else if (temp % n != 0)
		{
			std::cout << temp << " is NOT a multiple of " << n << ".";
		}

		std::cout << '\n';
	}

	return 0;
}