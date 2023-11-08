#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		std::string input, save_s;
		char temp = NULL;
		std::cin >> input;

		for (std::string::iterator itr = input.begin(); itr != input.end(); ++itr)
		{
			if (itr == input.begin())
			{
				save_s += *itr;
				temp = *itr;
			}

			if (temp != *itr)
			{
				save_s += *itr;
				temp = *itr;
			}
		}
		
		std::cout << save_s << '\n';
	}

	return 0;
}