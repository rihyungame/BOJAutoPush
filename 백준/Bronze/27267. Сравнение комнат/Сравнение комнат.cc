#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int a, b, c, d;
	std::cin >> a >> b >> c >> d;

	if (a * b > c * d)
	{
		std::cout << "M";
	}
	else if (a * b < c * d)
	{
		std::cout << "P";
	}
	else
	{
		std::cout << "E";
	}

	return 0;
}