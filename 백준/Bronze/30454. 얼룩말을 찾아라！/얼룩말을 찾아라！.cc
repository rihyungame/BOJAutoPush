#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	int count, temp;
	std::vector<int> total_lines;

	std::cin >> count >> temp;

	for (int i = 0; i < count; i++)
	{
		int  lines = 0;
		std::string s;
		char s_temp = NULL;
		bool flag_on = false;

		std::cin >> s;

		for (std::string::iterator itr = s.begin(); itr != s.end(); ++itr)
		{
			if (*itr == '1')
			{
				if (!flag_on)
				{
					flag_on = true;
					lines++;
				}
			}
			else
			{
				if (flag_on)
				{
					flag_on = false;
				}
			}
		}

		total_lines.push_back(lines);
	}

	int max_num = *std::max_element(total_lines.begin(), total_lines.end());
	int max_count = std::count(total_lines.begin(), total_lines.end(), max_num);

	std::cout << max_num << " " << max_count;

	return 0;
}