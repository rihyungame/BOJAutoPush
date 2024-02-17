#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int temp = n % 8;

	if (temp == 1)
	{
		std::cout << 1;
	}
	else if (temp == 2 || temp == 0)
	{
		std::cout << 2;
	}
	else if (temp == 3 || temp == 7)
	{
		std::cout << 3;
	}
	else if (temp == 4 || temp == 6)
	{
		std::cout << 4;
	}
	else if (temp == 5)
	{
		std::cout << 5;
	}

	return 0;
}