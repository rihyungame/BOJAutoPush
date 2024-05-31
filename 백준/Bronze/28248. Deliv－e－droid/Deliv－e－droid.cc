#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int p, c, plus = 0;

	std::cin >> p >> c;
	
	if (p > c)
	{
		plus = 500;
	}

	std::cout << p * 50 - c * 10 + plus;

	return 0;
}