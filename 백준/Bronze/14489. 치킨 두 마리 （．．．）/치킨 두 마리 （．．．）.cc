#include <iostream>

int main()
{
	size_t money_a, money_b;
	size_t chicken;

	std::cin >> money_a >> money_b >> chicken;

	chicken *= 2;

	if (chicken > money_a + money_b)
		std::cout << money_a + money_b;
	else
		std::cout << money_a + money_b - chicken;

	return 0;
}