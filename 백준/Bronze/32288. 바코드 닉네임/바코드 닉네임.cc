#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		char ch;
		std::cin >> ch;

		if (ch == 'I')
		{
			std::cout << 'i';
		}
		else if (ch == 'l')
		{
			std::cout << 'L';
		}
	}

    return 0;
}