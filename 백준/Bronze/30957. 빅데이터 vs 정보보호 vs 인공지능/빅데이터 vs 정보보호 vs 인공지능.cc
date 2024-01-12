#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <climits>

void printList(int& _max, std::vector<int>& _list) 
{
	for (std::vector<int>::size_type i = 0; i < _list.size(); ++i)
	{
		if (_max == _list[i])
		{
			if (i == 0)
			{
				std::cout << 'B';
			}
			else if (i == 1)
			{
				std::cout << 'S';
			}
			else if (i == 2)
			{
				std::cout << 'A';
			}
		}
	}
}

int main()
{
	int n, count = 0, max = INT_MIN;
	std::cin >> n;
	std::cin.ignore();

	std::string s;
	std::cin >> s;

	std::vector<int> list(3);

	for (std::string::size_type i = 0; i < s.size(); ++i)
	{
		if (s[i] == 'B')
		{
			list[0]++;
		}
		else if (s[i] == 'S')
		{
			list[1]++;
		}
		else if (s[i] == 'A')
		{
			list[2]++;
		}
	}

	for (int alpha_count : list) // 최대값 구하기
	{
		if (alpha_count > max)
		{
			max = alpha_count;
		}
	}

	for (int alpha_count : list) // 최대값과 같은 개수
	{
		if (alpha_count == max)
		{
			count++;
		}
	}

	if (count == 3)
	{
		std::cout << "SCU";
	}
	else if (count == 2)
	{
		printList(max, list);
	}
	else if (count == 1)
	{
		printList(max, list);
	}

	return 0;
}