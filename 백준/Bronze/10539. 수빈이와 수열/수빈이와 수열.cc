#include <iostream>

int main() 
{	
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int count;
	std::cin >> count;	
	
	int total = 0;

	for (int i = 0; i < count; i++)
	{
		int tmp;
		std::cin >> tmp;

		int reverse = tmp * (i + 1);

		std::cout << reverse - total << " ";

		total += reverse - total;
	}

	return 0;
}