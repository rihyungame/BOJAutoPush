#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		std::string s;
		std::cin >> s;

		int mid = ((s.size() + 1) / 2) - 1;

		if (s[mid] == s[mid + 1])
		{
			std::cout << "Do-it";
		}
		else
		{
			std::cout << "Do-it-Not";
		}

		std::cout << '\n';
	}

	return 0;
}