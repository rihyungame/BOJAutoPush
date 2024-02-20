#include <iostream>

int main()
{
	int x, l, r;
	std::cin >> x >> l >> r;

	if (x > l && x < r)
	{
		std::cout << x;
	}
	else if (x <= l)
	{
		std::cout << l;
	}
	else if (x >= r)
	{
		std::cout << r;
	}

	return 0;
}