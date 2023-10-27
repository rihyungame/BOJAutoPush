#include <iostream>
#include <string>
using namespace std;

int main()
{
	std::string temp;
	int n_black = 0, n_white = 0;

	while (std::getline(std::cin, temp))
	{
		for (std::string::iterator itr = temp.begin(); itr != temp.end(); ++itr)
		{
			if (*itr == '.')
			{
				continue;
			}			
			else if (*itr >= 97 && *itr <= 122)
			{
				switch (*itr)
				{
				case 'k' :
					n_black += 0;
					break;
				case 'p':
					n_black += 1;
					break;
				case 'n':
					n_black += 3;
					break;
				case 'b':
					n_black += 3;
					break;
				case 'r':
					n_black += 5;
					break;
				case 'q':
					n_black += 9;
					break;
				}
			}
			else
			{
				switch (*itr)
				{
				case 'K':
					n_white += 0;
					break;
				case 'P':
					n_white += 1;
					break;
				case 'N':
					n_white += 3;
					break;
				case 'B':
					n_white += 3;
					break;
				case 'R':
					n_white += 5;
					break;
				case 'Q':
					n_white += 9;
					break;
				}
			}
		}
	}

	std::cout << n_white - n_black;

	return 0;
}