#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	std::cout << num - (num * 22 / 100) << " ";
	std::cout << num - ((num * 20 / 100) * 22 / 100);

	return 0;
}