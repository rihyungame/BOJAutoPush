#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	int count;
	std::cin >> count;
	
	std::vector<int> list;

	for (int i = 0; i < count; i++)
	{
		int n;
		std::cin >> n;

		list.push_back(n);
	}

	std::sort(list.begin(), list.end());

	for (int& num : list)
	{
		std::cout << num << ' ';
	}

	return 0;
}