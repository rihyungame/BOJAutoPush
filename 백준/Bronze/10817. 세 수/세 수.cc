#include <iostream>

int main()
{
	int n1, n2, n3, temp;
	std::cin >> n1 >> n2 >> n3;

	if (n2 > n1)
	{
		temp = n1;
		n1 = n2;
		n2 = temp;
	}

	if (n3 > n1)
	{
		temp = n1;
		n1 = n3;
		n3 = temp;
	}

	if (n3 > n2)
	{
		temp = n2;
		n2 = n3;
		n3 = temp;
	}

	std::cout << n2;

	return 0;
}