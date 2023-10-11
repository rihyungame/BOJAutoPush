#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::cin >> s;

	int count = 0, total_count = 0;

	for (std::string::iterator itr = s.begin(); itr != s.end(); ++itr)
	{
		if (*itr == 'D')
			count = 0;

		if (*itr == 'D' && count == 0)
			count++;
		else if (*itr == 'K' && count == 1)
			count++;
		else if (*itr == 'S' && count == 2)
			count++;
		else if (*itr == 'H' && count == 3)
			count++;
		else
			count = 0;

		if (count == 4)
		{
			total_count++;
			count = 0;
		}
	}

	std::cout << total_count;

	return 0;
}