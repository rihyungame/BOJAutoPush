#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string s;
	std::cin >> s;

	int count = 1;

	for (std::string::size_type i = 0; i < s.size(); i++)
	{
		if (s[i] == ',')
		{
			count++;
		}
	}

	std::cout << count;

	return 0;
}