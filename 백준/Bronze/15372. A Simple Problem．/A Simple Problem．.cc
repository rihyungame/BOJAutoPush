#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int count, n;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		std::cin >> n;

		unsigned long long temp = std::pow(n, 2);
		
		std::cout << temp << '\n';
	}

	return 0;
}