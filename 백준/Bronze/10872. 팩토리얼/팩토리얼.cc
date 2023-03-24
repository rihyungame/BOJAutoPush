#include <iostream>
int main()
{	
	int a, temp = 1;
	std::cin >> a;

	for (int i = 1; i <= a; i++)
		temp *= i;
	std::cout << temp;
	return 0;
}