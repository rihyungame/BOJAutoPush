#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string s1;

	std::getline(std::cin, s1);

	if (s1.length() <= 2 || !(s1.front() == '"' && s1.back() == '"'))
	{
		std::cout << "CE";
	}
	else
	{
		for (std::string::size_type i = 1; i < s1.size() - 1; i++)
		{
			std::cout << s1[i];
		}
	}
	return 0;
}