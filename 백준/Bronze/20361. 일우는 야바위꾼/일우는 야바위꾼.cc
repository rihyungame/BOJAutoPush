#include <iostream>
#include <vector>

int main() 
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	 
	int n, x, k;
	std::cin >> n >> x >> k;

	std::vector<int> group(n);
	group[x - 1] = 1;

	for (int i = 0; i < k; ++i)
	{
		int a, b, temp;
		std::cin >> a >> b;

		temp = group[a - 1];
		group[a - 1] = group[b - 1];
		group[b - 1] = temp;
	}

	for (int i = 0; i < n; ++i)
	{
		if (group[i] == 1)
		{
			std::cout << i + 1;
		}
	}

	return 0;
}