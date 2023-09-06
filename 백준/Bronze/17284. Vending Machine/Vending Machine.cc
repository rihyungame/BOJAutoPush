#include <iostream>

int main()
{
	int total = 5000;

	while (true)
	{
		int n;
		std::cin >> n;

		if (std::cin.eof())
			break;

		if (n == 1)
			total -= 500;
		else if (n == 2)
			total -= 800;
		else if (n == 3)
			total -= 1000;

	}
	
	std::cout << total;

	return 0;
}