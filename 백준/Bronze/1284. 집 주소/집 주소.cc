#include <iostream>
#include <string>

int main()
{
	std::string s;
	while (true)
	{
		std::cin >> s;
		if (s == "0")
			break;
		
		int total = 0;
		total += s.size() - 1;
		total += 2;
		for (std::string::iterator itr = s.begin(); itr != s.end(); itr++)
		{
			if (*itr == '1')
				total += 2;
			else if (*itr == '0')
				total += 4;
			else
				total += 3;
		}
		std::cout << total << '\n';
	}
	return 0;
}