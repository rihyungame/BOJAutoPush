#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string s;

	bool k = false, l = false, p = false;

	for (int i = 0; i < 3; i++)
	{
		std::cin >> s;

		if (s[0] == 'k')
		{
			k = true;
		}
		else if (s[0] == 'l')
		{
			l = true;
		}
		else if (s[0] == 'p')
		{
			p = true;
		}
	}

	if (k && l && p)
	{
		std::cout << "GLOBAL";
	}
	else
	{
		std::cout << "PONIX";
	}

	return 0;
}