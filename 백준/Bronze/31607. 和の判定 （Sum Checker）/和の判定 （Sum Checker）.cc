#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int a, b, c;
	std::cin >> a >> b >> c;

	if (a + b == c || a + c == b || b + c == a)
	{
		std::cout << "1";
	}
	else
	{
		std::cout << "0";
	}

	return 0;
}