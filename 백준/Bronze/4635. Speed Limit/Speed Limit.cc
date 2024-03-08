#include <iostream>

int main() 
{
	while (true)
	{
		int count;
		std::cin >> count;

		if (count == -1)
		{
			break;
		}

		int prev = 0, total = 0;

		for (int i = 0; i < count; i++)
		{
			int speed, now;
			std::cin >> speed >> now;
			total += speed * (now - prev);
			prev = now;
		}

		std::cout << total << " miles" << '\n';
	}

	return 0;
}