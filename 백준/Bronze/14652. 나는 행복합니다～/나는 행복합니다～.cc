#include <iostream>

int main()
{
	int n, m, k, count = 0;
	
	std::cin >> n >> m >> k;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (k == count)
			{
				std::cout << i << " " << j;
			}
			count++;
		}
	}

	return 0;
}