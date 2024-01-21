#include <iostream>
#include <cmath>

int main()
{
	double n1, n2, max;

	while (true)
	{
		std::cin >> n1 >> n2 >> max;
		
		if (n1 < n2)
		{
			double temp = n1;
			n1 = n2;
			n2 = temp;
		}

		if (max < n1)
		{
			double temp = max;
			max = n1;
			n1 = temp;
		}

		if (max < n2)
		{
			double temp = max;
			max = n2;
			n2 = temp;
		}

		if (n1 == 0 && n2 == 0 && max == 0)
		{
			break;
		}

		double result = std::sqrt(pow(n1, 2) + pow(n2, 2));

		if (result == max)
		{
			std::cout << "right";
		}
		else
		{
			std::cout << "wrong";
		}

		std::cout << '\n';
	}

	return 0;
}