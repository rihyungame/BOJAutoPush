#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int a, b;
	std::cin >> a >> b;

	int total = a + b;
	int digit = 0;

	while (total != 0)
	{
		total /= 10;
		digit++;
	}

	std::cout << digit;
	return 0;
}