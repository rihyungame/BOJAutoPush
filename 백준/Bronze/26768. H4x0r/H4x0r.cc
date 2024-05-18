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
		if (s[i] == 'a')
		{
			s[i] = '4';
		}
		else if (s[i] == 'e')
		{
			s[i] = '3';
		}
		else if (s[i] == 'i')
		{
			s[i] = '1';
		}
		else if (s[i] == 'o')
		{
			s[i] = '0';
		}
		else if (s[i] == 's')
		{
			s[i] = '5';
		}
	}

	std::cout << s;
	return 0;
}