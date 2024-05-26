#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int time, total = 0;
	std::cin >> time;
	total = time;

	int btnA = 300, btnB = 60, btnC = 10;
	int modA = 0, modB = 0, modC = 0;

	modA = total / btnA;
	total %= btnA;

	modB = total / btnB;
	total %= btnB;

	modC = total / btnC;
	total %= btnC;

	if (total == 0)
	{
		std::cout << modA << " " << modB << " " << modC;
	}
	else
	{
		std::cout << -1;
	}

	return 0;
}