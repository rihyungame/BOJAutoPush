#include <iostream>

int main() 
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	 
	long long n;
	std::cin >> n;

	std::cout << n * n << "\n";

	if (n == 0)
	{
		std::cout << 1;
	}
	else
	{
		std::cout << 2;
	}

	return 0;
}