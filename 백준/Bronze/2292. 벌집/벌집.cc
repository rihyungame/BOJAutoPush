#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int count = 0;
	int total = 1;	

	while (true)
	{
		if (total >= n)
		{
			if (n == 1)
			{
				count = 1;
			}

			break;
		}

		total += count * 6;
		count++;
	}

	std::cout << count;

	return 0;
}