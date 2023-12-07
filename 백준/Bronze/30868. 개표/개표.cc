#include <iostream>

int main()
{
	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int n, quotient, remainder;
		std::cin >> n;
		
		quotient = n / 5;
		remainder = n % 5;

		if (quotient)
		{
			for (int j = 0; j < quotient; j++)
			{
				std::cout << "++++ ";
			}
			
		}
		
		if (remainder)
		{
			for (int j = 0; j < remainder; j++)
			{
				std::cout << '|';
			}
		}
		
		std::cout << std::endl;
	}

	return 0;
}