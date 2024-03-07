#include <iostream>

int main() 
{
	int count;
	std::cin >> count;

	bool isSaven[3] = {false, };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < count; j++)
		{
			int n;
			std::cin >> n;

			if (n == 7)
			{
				isSaven[i] = true;
			}
		}
	}

	bool answer = true;
	for (int i = 0; i < 3; i++)
	{
		if (isSaven[i] == false)
		{
			answer = false;
		}
	}

	if (answer)
	{
		std::cout << 777;
	}
	else
	{
		std::cout << 0;
	}

	return 0;
}

