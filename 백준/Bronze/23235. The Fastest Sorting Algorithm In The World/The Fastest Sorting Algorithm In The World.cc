#include <iostream>

int main() 
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int total = 1;

	while (true)
	{
		int count;
		std::cin >> count;

		if (count == 0)
		{
			break;
		}

		for (int i = 0; i < count; ++i)
		{
			int n;
			std::cin >> n;
		}
	
		std::cout << "Case " << total << ":" << " Sorting... done!" << '\n';
		total++;
	}

	return 0;
}