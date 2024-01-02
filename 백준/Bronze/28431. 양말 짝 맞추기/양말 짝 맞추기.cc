#include <iostream>
#include <vector>

int main()
{
	std::vector<int> numbers(10, 0);
	
	for (int i = 0; i < 5; i++)
	{
		int n;
		std::cin >> n;
		
		numbers[n]++;
	}

	for (std::vector<int>::size_type n = 0; n < numbers.size(); n++)
	{
		if (numbers[n] % 2 == 1)
		{
			std::cout << n;
			break;
		}
	}

	return 0;
}