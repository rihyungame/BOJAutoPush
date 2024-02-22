#include <iostream>

int main() 
{
	int before;
	bool isIncrease = false, isDecrease = false, isSame = false, isNothing = false;
	
	std::cin >> before;

	for (int i = 0; i < 3; ++i)
	{
		int n;
		std::cin >> n;

		if (n > before && !isDecrease)
		{
			isIncrease = true;
		}
		else if (n < before && !isIncrease)
		{
			isDecrease = true;
		}
		else if (n == before && !isDecrease && !isIncrease)
		{
			isSame = true;
		}
		else
		{
			isNothing = true;
		}

		before = n;
	}

	if (isNothing)
	{
		std::cout << "No Fish";
	}
	else if (isIncrease)
	{
		std::cout << "Fish Rising";
	}
	else if (isDecrease)
	{
		std::cout << "Fish Diving";
	}
	else if (isSame)
	{
		std::cout << "Fish At Constant Depth";
	}

	return 0;
}