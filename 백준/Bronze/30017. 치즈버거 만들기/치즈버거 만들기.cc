#include <iostream>

int main()
{
	int chz, paty;
	std::cin >> paty >> chz;
	
	while (true)
	{
		if (chz + 1 == paty)
		{
			break;
		}

		if (chz >= paty)
		{
			chz--;
		}
		else
		{
			paty--;
		}
	}

	std::cout << chz + paty;

	return 0;
}