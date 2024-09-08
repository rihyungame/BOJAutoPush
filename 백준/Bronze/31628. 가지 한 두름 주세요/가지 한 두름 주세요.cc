#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	std::string group[10][10];

	bool isSame = false;
	int count = 0;
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			std::cin >> group[i][j];
		}
	}

	for (int i = 0; i < 10; i++)
	{
		count = 0;

		for (int j = 0; j < 9; j++)
		{
			if (group[i][j] == group[i][j + 1])
			{
				count++;
			}
		}

		if (count == 9)
		{
			isSame = true;
		}
	}	

	for (int i = 0; i < 10; i++)
	{
		count = 0;

		for (int j = 0; j < 9; j++)
		{
			if (group[j][i] == group[j + 1][i])
			{
				count++;
			}
		}

		if (count == 9)
		{
			isSame = true;
		}
	}

	if (isSame)
	{
		std::cout << 1;
	}
	else
	{
		std::cout << 0;
	}

	return 0;
}