#include <iostream>

int main()
{
	int n, average = 0;
	int total = 0;
	
	for (int i = 0; i < 4; i++)
	{
		std::cin >> n;
		total += n;
	}
	
	std::cin >> average;

	if (total / 4 >= average)
	{
		std::cout << 0;
	}
	else
	{
		int count = 0;

		while ((total + count) / 4 < average)
			count++;

		std::cout << count;
	}

	return 0;
}