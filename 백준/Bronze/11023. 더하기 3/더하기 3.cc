#include <iostream>

int main()
{
	int total = 0;

	while (true)
	{
		int n;
		std::cin >> n;
		
		if (std::cin.eof())
			break;

		total += n;
	}

	std::cout << total;
	return 0;
}