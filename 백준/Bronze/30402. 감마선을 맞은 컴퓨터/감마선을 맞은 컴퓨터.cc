#include <iostream>
#include <string>

int main()
{

	std::string s, result;

	while (std::getline(std::cin, s))
	{
		for (std::string::iterator itr = s.begin(); itr != s.end(); ++itr)
		{
			if (*itr == 'w')
			{
				result = "chunbae";
				break;
			}
			else if (*itr == 'b')
			{
				result = "nabi";
				break;
			}
			else if (*itr == 'g')
			{
				result = "yeongcheol";
				break;
			}
		}
	}

	std::cout << result;
	
	return 0;
}