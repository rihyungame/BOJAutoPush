#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int total_a = 0, total_b = 0;

	for (int i = 1; i <= 3; i++)
	{	
		int temp;
		std::cin >> temp;
		total_a += (temp * i);
	}

	for (int i = 1; i <= 3; i++)
	{
		int temp;
		std::cin >> temp;
		total_b += (temp * i);
	}


	if (total_a > total_b)
	{
		std::cout << 1;
	}
	else if (total_a < total_b)
	{
		std::cout << 2;
	}
	else
	{
		std::cout << 0;
	}

    return 0;
}