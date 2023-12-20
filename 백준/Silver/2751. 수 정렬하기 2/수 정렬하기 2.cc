#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int count;
	std::cin >> count;
	
	std::vector<int> num;

	for (int i = 0; i < count; i++)
	{
		int n;
		std::cin >> n;
		
		num.push_back(n);
	}

	std::sort(num.begin(), num.end());

	for (int i = 0; i < num.size(); i++)
	{
		std::cout << num[i] << '\n';
	}
	
	return 0;
}