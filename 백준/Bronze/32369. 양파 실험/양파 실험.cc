#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int a = 1, b = 1;
	int n, aPlus, bPlus;

	std::cin >> n >> aPlus >> bPlus;

	for (int i = 0; i < n; i++)
	{
		a += aPlus;
		b += bPlus;

		if (a < b)
		{
			int temp;
			temp = a;
			a = b;
			b = temp;
		}
		else if (a == b)
		{
			b -= 1;
		}
	}

	std::cout << a << " " << b;

	return 0;
}