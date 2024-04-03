#include <iostream>

int main() 
{	
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;
	std::cin >> n;

	if (n % 7 == 2)
	{
		std::cout << 1;
	}
	else
	{
		std::cout << 0;
	}

	return 0;
}
