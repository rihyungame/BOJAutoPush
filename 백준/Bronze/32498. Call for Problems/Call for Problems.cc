#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count, result = 0;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int n;
		std::cin >> n;

		if (n % 2 != 0)
		{
			result++;
		}
	}
	
	std::cout << result;

    return 0;
}