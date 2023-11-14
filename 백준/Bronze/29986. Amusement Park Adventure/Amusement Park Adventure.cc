#include <iostream>

int main()
{
	int count , my_height, total_count = 0;
	std::cin >> count >> my_height;

	for (int i = 0; i < count; i++)
	{
		int min_height;
		std::cin >> min_height;
		
		if (my_height >= min_height)
			total_count++;
	}
	
	std::cout << total_count;

	return 0;
}