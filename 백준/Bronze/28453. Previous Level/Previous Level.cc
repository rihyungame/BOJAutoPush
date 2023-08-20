#include <iostream>

int main()
{
	int count;
	std::cin >> count;
	for (int i = 0; i < count; i++) 
	{
		int n;
		std::cin >> n;
		if (300 == n)
			std::cout << 1 << " ";
		else if (n < 300 && n >= 275)
			std::cout << 2 << " ";
		else if (n < 275 && n >= 250)
			std::cout << 3 << " ";
		else if (n < 250)
			std::cout << 4 << " ";
	}
	return 0;
}