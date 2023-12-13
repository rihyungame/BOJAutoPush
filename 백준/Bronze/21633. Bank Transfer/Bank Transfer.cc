#include <iostream>

int main()
{
	double k;
	double charge;
	
	std::cin >> k;

	charge = k / 100 + 25;

	if (charge < 100)
	{
		charge = 100;
	}
	else if (charge > 2000)
	{
		charge = 2000;
	}

	std::cout << charge;
	return 0;
}