#include <iostream>

int main() 
{
	int minimalTime;
	std::cin >> minimalTime;

	int count;
	std::cin >> count;

	int total = 0;
	for (int i = 0; i < count; i++)
	{
		int n;
		std::cin >> n;

		total += n;
	}

	if (total >= minimalTime)
	{
		std::cout << "Padaeng_i Happy";
	}
	else
	{
		std::cout << "Padaeng_i Cry";
	}

	return 0;
}

