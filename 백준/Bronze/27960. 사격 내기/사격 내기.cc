#include <iostream>
#include <vector>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	std::vector<int> points = {1,2,4,8,16,32,64,128,256,512};
	std::vector<int> one(10), two(10);

	int a, b;
	std::cin >> a >> b;

	int total = a;

	for (int i = 9; i >= 0; i--)
	{
		if (total >= points[i])
		{
			total -= points[i];
			one[i]++;
		}
	}

	total = b;

	for (int i = 9; i >= 0; i--)
	{
		if (total >= points[i])
		{
			total -= points[i];
			two[i]++;
		}
	}

	int result = 0;

	for (int i = 0; i < 10; i++)
	{
		if ((one[i] && two[i]) || (one[i] == 0 && two[i] == 0))
		{
			continue;
		}
		else
		{
			result += points[i];
		}
	}

	std::cout << result;

	return 0;
}