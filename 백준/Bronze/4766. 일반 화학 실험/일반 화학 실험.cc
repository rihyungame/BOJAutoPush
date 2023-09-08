#include <iostream>

int main()
{
	double temp_num;

	std::cout << std::fixed;
	std::cout.precision(2);

	std::cin >> temp_num;

	while (true)
	{
		double d_num;
		std::cin >> d_num;

		if (d_num == 999)
			break;

		std::cout << d_num - temp_num << '\n';

		temp_num = d_num;
	}

	return 0;
}