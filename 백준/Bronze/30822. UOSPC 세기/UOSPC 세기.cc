#include <iostream>
#include <string>
#include <vector>
#include <climits>

int main()
{
	int n = 0;
	std::cin >> n;
	std::cin.ignore();

	std::string s;
	std::cin >> s;


	std::vector<int> list(5,0);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'u')
		{
			list[0]++;
		}
		else if (s[i] == 'o')
		{
			list[1]++;
		}
		else if (s[i] == 's')
		{
			list[2]++;
		}
		else if (s[i] == 'p')
		{
			list[3]++;
		}
		else if (s[i] == 'c')
		{
			list[4]++;
		}
	}


	int min = INT_MAX;

	for (std::vector<int>::size_type i = 0; i < list.size(); i++)
	{
		if (list[i] < min)
		{
			min = list[i];
		}
	}

	std::cout << min;

	return 0;
}