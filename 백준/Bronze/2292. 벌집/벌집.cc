#include <iostream>

int main()
{
	long long n;
	std::cin >> n;

	long long count = 0;
	long long total = 1;	

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