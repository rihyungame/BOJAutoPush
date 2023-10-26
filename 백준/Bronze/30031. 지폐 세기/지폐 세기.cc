#include <iostream>

int main()
{
	int count, total = 0;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int width, height;
		std::cin >> width >> height;
		if (width == 136)
			total += 1000;
		else if (width == 142)
			total += 5000;
		else if (width == 148)
			total += 10000;
		else if (width == 154)
			total += 50000;
	}

	std::cout << total;
	
	return 0;
}