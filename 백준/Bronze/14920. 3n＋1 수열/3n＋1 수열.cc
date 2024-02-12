#include <iostream>

int main()
{
	int start;
	std::cin >> start;

	int temp = start;
	int count = 0;

	while (true)
	{
		count++;

		if (temp == 1)
		{
			break;
		}

		if (temp % 2 == 0) // 짝수
		{
			temp /= 2;
		}
		else
		{
			temp *= 3;
			temp++;
		}
	}

	std::cout << count;

	return 0;
}