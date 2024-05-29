#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string s;
	char temp = NULL;

	std::getline(std::cin, s);
	
	for (std::string::size_type i = 0; i < s.size(); i++)
	{
		if (temp == s[i])
		{
			s.erase(s.begin() + i);
			i--;
		}

		temp = s[i];
	}

	std::cout << s;

	return 0;
}