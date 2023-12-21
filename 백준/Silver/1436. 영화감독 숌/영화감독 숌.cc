#include <iostream>

int main()
{
	int n, count = 0, temp = 0, now = 0;
	std::cin >> n;

	while (true)
	{
		now++;
		temp = now;

		while (temp != 0)
		{
			if (temp % 1000 == 666)
			{
				count++;
				break;
			}
			else
			{
				temp /= 10;
			}
		}

		if (count == n)
		{
			break;
		}
	}

	std::cout << now;

	return 0;
}