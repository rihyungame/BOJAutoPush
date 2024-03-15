#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
    
	int n;
	std::cin >> n;

	int total = 1000 - n;
	int count = 0;

	while (total)
	{
		if (total / 500)
		{
			total -= 500;
			count++;
		}
		else if (total / 100)
		{
			total -= 100;
			count++;
		}
		else if (total / 50)
		{
			total -= 50;
			count++;
		}
		else if (total / 10)
		{
			total -= 10;
			count++;		}
		else if (total / 5)
		{
			total -= 5;
			count++;
		}
		else if (total / 1)
		{
			total -= 1;
			count++;
		}
	}

	std::cout << count;
	return 0;
}