#include <iostream>

int main()
{
	int n;
	long long total = 1;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
		total *= i;

	total = total / 7 / 24 / 60 / 60;
	std::cout << total;

	return 0;
}