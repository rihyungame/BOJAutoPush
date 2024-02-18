#include <iostream>
#include <vector>

int main()
{
	std::vector<char> group;
	int count, total = 0;
	
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		char ch;
		std::cin >> ch;
		group.push_back(ch);
	}
	
	char answer;
	std::cin >> answer;
	
	for (int i = 0; i < count; ++i)
	{
		if (group[i] == answer)
		{
			total++;
		}
	}

	std::cout << total;

	return 0;
}