#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int count, two = 0, e = 0;
	std::string s;

	std::cin >> count;

	std::cin >> s;

	for (std::string::size_type i = 0; i < s.size(); i++)
	{
		if (s[i] == '2')
		{
			two++;
		}
		else if (s[i] == 'e')
		{
			e++;
		}
	}

	if (two > e)
	{
		std::cout << 2;
	}
	else if (e > two)
	{
		std::cout << "e";
	}
	else
	{
		std::cout << "yee";
	}

	return 0;
}