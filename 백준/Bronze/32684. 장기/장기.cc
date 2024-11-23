#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	double cho = 0, han = 1.5;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			int temp;
			std::cin >> temp;

			switch (j)
			{
			case 0:
				temp *= 13;
				break;
			case 1:
				temp *= 7;
				break;
			case 2:
				temp *= 5;
				break;
			case 3:
			case 4:
				temp *= 3;
				break;
			case 5:
				temp *= 2;
				break;
			}

			if (i == 0)
			{
				cho += temp;
			}
			else if (i == 1)
			{
				han += temp;
			}
		}
	}

	if (cho > han)
	{
		std::cout << "cocjr0208";
	}
	else
	{
		std::cout << "ekwoo";
	}

    return 0;
}