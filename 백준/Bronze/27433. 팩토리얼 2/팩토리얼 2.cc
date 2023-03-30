#include <iostream>

int main()
{
	long long int n, temp = 1;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
		temp *= i;
	std::cout << temp;
	
	return 0;
}