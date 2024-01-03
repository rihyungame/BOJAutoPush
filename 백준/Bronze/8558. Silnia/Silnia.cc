#include <iostream>

int main()
{
	int n;
	long long end_num = 1;

	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		end_num = (end_num * i) % 10;
	}

	std::cout << end_num;

	return 0;
}