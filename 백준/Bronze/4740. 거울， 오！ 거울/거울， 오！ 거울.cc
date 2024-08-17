#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	std::string s;

	while (true)
	{
		std::getline(std::cin, s);

		if (s == "***")
		{
			break;
		}

		for (std::string::reverse_iterator itr = s.rbegin(); itr != s.rend(); itr++)
		{
			std::cout << *itr;
		}

		std::cout << '\n';
	}

	return 0;
}