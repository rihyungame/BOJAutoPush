#include <iostream>

int main()
{
	int count, a_count = 0, b_count = 0;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int a, b;
		std::cin >> a >> b;
		if (a > b)
			a_count++;
		else if (a < b)
			b_count++;
	}

	std::cout << a_count << " " << b_count;
	return 0;
}