#include <iostream>

int main()
{
	int box_reg, box_sml;

	std::cin >> box_reg >> box_sml;

	std::cout << std::abs(28 - (box_reg * 8 + box_sml * 3));

	return 0;
}