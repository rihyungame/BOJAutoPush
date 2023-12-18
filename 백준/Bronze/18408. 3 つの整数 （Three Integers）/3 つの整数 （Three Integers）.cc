#include <iostream>
#include <vector>

int main()
{
	int n;
	std::vector<int> n1, n2;

	for (int i = 0; i < 3; i++)
	{
		std::cin >> n;

		if (n == 1)
		{
			n1.emplace_back(1);
		}
		else if (n == 2)
		{
			n2.emplace_back(2);
		}
	}

	if (n1.size() > n2.size())
	{
		std::cout << 1;
	}
	else if (n2.size() > n1.size())
	{
		std::cout << 2;
	}

	return 0;
}