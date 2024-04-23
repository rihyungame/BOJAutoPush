#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int numerator, denominator;

	while (true)
	{
		std::cin >> numerator >> denominator;

		if (numerator == 0 && denominator == 0)
		{
			break;
		}

		std::cout << numerator / denominator << " " << numerator % denominator
			<< " " << "/" << " " << denominator << '\n';
	}

	return 0;
}