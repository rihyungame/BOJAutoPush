#include <iostream>

int myT(int _n)
{
	int sum = 0;

	for (int i = 1; i <= _n; i++)
	{
		sum += i;
	}

	return sum;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int sum = 0, n;
		std::cin >> n;

		for (int j = 1; j <= n; j++)
		{
			sum += (j * myT(j + 1));
		}

		std::cout << sum << '\n';
	}

	return 0;
}