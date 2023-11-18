#include <iostream>
#include <vector>

int main()
{
	int count, result = 0;
	std::vector<int> n1, n2;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int temp;
		std::cin >> temp;
		n1.push_back(temp);
	}

	for (int i = 0; i < count; i++)
	{
		int temp;
		std::cin >> temp;
		n2.push_back(temp);
	}

	for (int i = 0; i < count; i++)
	{
		if (n2[i] >= n1[i])
			result++;
	}

	std::cout << result;

	return 0;
}