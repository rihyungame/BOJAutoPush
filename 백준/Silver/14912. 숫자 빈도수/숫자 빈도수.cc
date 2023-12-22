#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	int range, count = 0, target;
	std::vector<int> list;

	std::cin >> range >> target;
	std::string target_s = std::to_string(target);

	for (int i = 1; i <= range; i++)
	{
		int index = 0;
		std::string now_i = std::to_string(i);

		for (int i = 0; i < now_i.size(); i++)
		{
			if (now_i.find(target_s, index) != std::string::npos)
			{
				index = now_i.find(target_s, index) + 1;
				count++;
			}
			else
			{
				break;
			}
		}
	}	

	std::cout << count;

	return 0;
}