#include <iostream>

int main()
{
	int l, p;
	std::cin >> l >> p;
	int total = l * p;
	for (int i = 0; i < 5; i++) 
	{
		int n;
		std::cin >> n;
		std::cout << n - total << " ";
	}
	return 0;
}