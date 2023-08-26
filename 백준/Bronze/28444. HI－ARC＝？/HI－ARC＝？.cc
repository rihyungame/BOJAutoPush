#include <iostream>

int main()
{
	int multipliedA_1, multipliedA_2;
	int multipliedB_1, multipliedB_2, multipliedB_3;

	std::cin >> multipliedA_1 >> multipliedA_2 >> multipliedB_1 >> multipliedB_2 >> multipliedB_3;
	std::cout << (multipliedA_1 * multipliedA_2) - multipliedB_1 * multipliedB_2 * multipliedB_3;

	return 0;
}