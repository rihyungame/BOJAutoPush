#include <iostream>

int main()
{
	int c, result;
	std::cin >> c;

	result = c * 5 - 400;
	std::cout << result << std::endl;

	if (result == 100)
		std::cout << "0";
	else if (result > 100)
		std::cout << "-1";
	else if (result < 100)
		std::cout << "1";

	return 0;
}