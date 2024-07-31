#include <iostream>
#include <string>
#include <bitset>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		long long temp;
		std::cin >> temp;

		std::bitset<100> bs(temp);
		std::string s = bs.to_string();
		s = s.substr(s.find('1'));

		long long idx = 0;
		for (std::string::reverse_iterator itr = s.rbegin(); itr != s.rend(); itr++)
		{
			if (*itr == '1')
			{
				std::cout << idx << " ";
			}
			idx++;
		}
	}

	return 0;
}