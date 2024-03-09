#include <iostream>

int main() 
{
	int count;
	std::cin >> count;
	
	int total = 0, prev = -1;
    
	//10
	//6 7 10 12 13 14 15 20 21 22

	for (int i = 0; i < count; i++)
	{
		int n;
		std::cin >> n;

		if (i == 0)
		{
			total += n;
		}

		if (n - 1 != prev && i != 0)
		{
			total += n;
		}

		prev = n;
	}

	std::cout << total;
	return 0;
}

