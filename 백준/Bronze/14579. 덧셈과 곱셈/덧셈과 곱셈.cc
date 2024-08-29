#include <iostream>

int m(int num)
{
	if (num == 1)
	{
		return 1;
	}

	return num + m(num - 1);
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int a, b;
	std::cin >> a >> b;

	unsigned long long result = 1;

	for (int i = a; i <= b; i++)
	{
		result *= m(i);
		result %= 14579;
	}

	//result %= 14579;

	std::cout << result;

	return 0;
}