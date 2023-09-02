#include <iostream>

int main()
{
	int count, a_count = 0, b_count = 0;
	std::cin >> count;
	for (int i = 0; i < count; i++)
	{
		char ch;
		std::cin >> ch;
		if (ch == 'A')
			a_count++;
		else if (ch == 'B')
			b_count++;
	}
	if (a_count > b_count)
		std::cout << 'A';
	else if (b_count > a_count)
		std::cout << 'B';
	else
		std::cout << "Tie";

	return 0;
}