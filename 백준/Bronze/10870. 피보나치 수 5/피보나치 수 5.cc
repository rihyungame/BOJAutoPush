#include <iostream>

int main()
{
	unsigned int n ,total = 0, before = 0, temp;
	std::cin >> n;

	for (int i = 0; i <= n; i++)
	{
		if (total > 0)
		{
			temp = total;
			total += before;
			before = temp;
		}
		else
		{
			total += i;
		}
	}

	std::cout << total;

	return 0;
}