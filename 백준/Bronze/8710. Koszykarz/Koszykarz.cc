#include <iostream>

int main()
{
	int my_height, need_height, plus_num;
	int count = 0;
	std::cin >> my_height >> need_height >> plus_num;

	while (my_height < need_height)
	{
		my_height += plus_num;
		count++;
	}

	std::cout << count;

	return 0;
}