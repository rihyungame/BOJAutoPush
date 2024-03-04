#include <iostream>

int main() 
{	
	int n, temp, cntTwo = 0, cntFive = 0;
	std::cin >> n;

	for (int i = 2; i <= n; i++)
	{
		temp = i;
		int j = 2;
		
		while (true)
		{
			if (temp % j == 0)
			{
				if (j == 2)
				{
					cntTwo++;
				}
				else if (j == 5)
				{
					cntFive++;
				}
				temp /= j;
			}
			else
			{
				j++;
			}			
			
			if (temp == 1)
			{
				break;
			}
		}
	}

	std::cout << (cntTwo > cntFive ? cntFive : cntTwo);
	return 0;
}

