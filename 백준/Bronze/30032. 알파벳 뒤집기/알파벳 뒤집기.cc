#include <iostream>
#include <string>
int main()
{
	int count, direction;
	std::cin >> count >> direction;
	bool flag_up_down = false, flag_left_right = false;

	if (direction == 1)
		flag_up_down = true;
	else
		flag_left_right = true;

	for (int i = 0; i < count; i++)
	{
		std::string s;
		std::cin >> s;
		for (std::string::iterator itr = s.begin(); itr != s.end(); ++itr)
		{
			switch (*itr)
			{
			case 'd':
				if (flag_left_right)
					*itr = 'b';
				else if (flag_up_down)
					*itr = 'q';
				break;
			case 'b':
				if (flag_left_right)
					*itr = 'd';
				else if (flag_up_down)
					*itr = 'p';
				break;
			case 'q':
				if (flag_left_right)
					*itr = 'p';
				else if (flag_up_down)
					*itr = 'd';
				break;
			case 'p':
				if (flag_left_right)
					*itr = 'q';
				else if (flag_up_down)
					*itr = 'b';
				break;
			}
		}
		std::cout << s << std::endl;
	}
	return 0;
}