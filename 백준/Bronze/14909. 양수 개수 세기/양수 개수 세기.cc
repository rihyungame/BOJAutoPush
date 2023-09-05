#include <iostream>

int main()
{
	int count = 0;
	while (true)
	{
		int n;
		std::cin >> n;

		if (std::cin.eof())
			break;
		else if (n > 0)
			count++;

	}

	std::cout << count;
	return 0;
}