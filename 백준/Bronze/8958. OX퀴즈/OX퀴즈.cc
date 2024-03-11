#include <iostream>
#include <string>

int main() 
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int plus = 0, total = 0;
		std::string s;

		std::cin >> s;

		for (std::string::size_type i = 0; i < s.size(); i++)
		{
			if (s[i] == 'O')
			{
				plus++;
				total += plus;
			}
			else
			{
				plus = 0;
			}
		}

		std::cout << total << '\n';
	}
}
