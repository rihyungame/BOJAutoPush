#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	long long s;
	std::cin >> s;

	int temp = s % 3;

	if (temp  == 1)
	{
		std::cout << "U";
	}
	else if (temp  == 2)
	{
		std::cout << "O";
	}
	else if (temp  == 0)
	{
		std::cout << "S";
	}

    return 0;
}