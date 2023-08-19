#include <iostream>

int main()
{
	int n, sum = 0, my_pow = 0;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
		sum += i;
	for (int i = 1; i <= n; i++)
		my_pow += i*i*i;
	std::cout << sum << '\n';
	std::cout << sum*sum << '\n';
	std::cout << my_pow << '\n';
	return 0;
}