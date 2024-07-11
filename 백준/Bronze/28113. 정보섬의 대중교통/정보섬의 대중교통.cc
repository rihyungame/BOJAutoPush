#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, a, b;
	std::cin >> n >> a >> b;

	int subway = b > n ? b : n;

	if (subway > a)
	{
		std::cout << "Bus";
	}
	else if (subway < a)
	{
		std::cout << "Subway";
	}
	else
	{
		std::cout << "Anything";
	}

	return 0;
}