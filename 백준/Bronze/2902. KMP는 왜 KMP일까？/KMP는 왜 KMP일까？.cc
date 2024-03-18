#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string s;

	std::cin >> s;

	for (std::string::size_type i = 0; i < s.size(); i++)
	{
		if (65 <= s[i] && 90 >= s[i])
		{
			std::cout << s[i];
		}
	}

	return 0;
}