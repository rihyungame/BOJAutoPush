#include <iostream>

int main()
{
	int count;
	std::cin >> count;
	for (int i = 0; i < count; i++)
	{
		int n;
		std::cin >> n;
		if (!(n % 2))
			std::cout << n << " is even" << std::endl;
		else
			std::cout << n << " is odd" << std::endl;
	}
	return 0;
}