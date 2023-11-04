#include <iostream>

int main()
{
	int point_ap = 0, point_ba = 0;

	for (int i = 0; i < 2; i++)
	{
		int n, total = 0;

		std::cin >> n;
		
		total += n * 3;

		std::cin >> n;

		total += n * 2;

		std::cin >> n;

		total += n;

		if (i == 0)
		{
			point_ap = total;
			
		}
		else
		{
			point_ba = total;
		}
	}

	if (point_ba > point_ap)
		std::cout << 'B';
	else if (point_ap > point_ba)
		std::cout << 'A';
	else
		std::cout << 'T';

	return 0;
}