#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int a, b, c;
	std::cin >> a >> b >> c;

	if (a + c > b)
	{
		std::cout << a + c;
	}
	else
	{
		std::cout << b;
	}

	return 0;
}