#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int total = 10;
	std::string s;
	std::cin >> s;

	for (std::string::size_type i = 1; i < s.size(); i++)
	{
		char before = s[i - 1];

		if (s[i] == '(')
		{
			if (before == '(')
			{
				total += 5;
			}
			else if (before == ')')
			{
				total += 10;
			}

		}
		else if (s[i] == ')')
		{
			if (before == ')')
			{
				total += 5;

			}
			else if (before == '(')
			{
				total += 10;
			}
		}
	}

	std::cout << total;

	return 0;
}