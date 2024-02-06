#include <iostream>

int main()
{
	int antenna, eyes;
	std::cin >> antenna >> eyes;

	if (antenna >= 3 && eyes <= 4)
	{
		std::cout << "TroyMartian" << '\n';
	}

	if (antenna <= 6 && eyes >= 2)
	{
		std::cout << "VladSaturnian" << '\n';
	}

	if (antenna <= 2 && eyes <= 3)
	{
		std::cout << "GraemeMercurian" << '\n';
	}

	return 0;
}