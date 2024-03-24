#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;
	std::cin >> n;

	int digit = 0;
	int temp = n;

	while (temp > 0)
	{
		temp /= 10;
		digit++;
	}
	
	int remain = n;
	int totalA = 0, totalB = 0;

	for (int i = 0; i < digit / 2; i++)
	{
		int target = remain % 10;
		totalA += target;
		remain /= 10;
	}

	for (int i = 0; i < digit / 2; i++)
	{
		int target = remain % 10;
		totalB += target;
		remain /= 10;
	}

	if (totalA == totalB)
	{
		std::cout << "LUCKY";
	}
	else if (totalA != totalB)
	{
		std::cout << "READY";
	}

	return 0;
}