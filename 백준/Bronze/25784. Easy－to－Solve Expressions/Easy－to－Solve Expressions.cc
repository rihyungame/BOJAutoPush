#include <iostream>

int main()
{
	int n1, n2, n3;
	int temp1, temp2, temp3;
	bool is_sum = false, is_produt = false;

	std::cin >> n1 >> n2 >> n3;
	
	temp1 = n1 + n2;
	temp2 = n1 + n3;
	temp3 = n2 + n3;

	if (temp1 == n3 || temp2 == n2 || temp3 == n1)
	{
		std::cout << 1;
		is_sum = true;
	}

	temp1 = n1 * n2;
	temp2 = n1 * n3;
	temp3 = n2 * n3;

	if (temp1 == n3 || temp2 == n2 || temp3 == n1)
	{
		std::cout << 2;
		is_produt = true;
	}

	if (!is_sum && !is_produt)
	{
		std::cout << 3;
	}

	return 0;
}