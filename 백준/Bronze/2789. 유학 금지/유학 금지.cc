#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string s, o = "CAMBRIDGE", res;
	std::cin >> s;

	for (std::string::size_type i = 0; i < s.size(); i++)
	{
		bool isInclude = false;

		for (std::string::size_type j = 0; j < o.size(); j++)
		{
			if (s[i] == o[j])
			{
				isInclude = true;
			}
		}

		if (!isInclude)
		{
			res.push_back(s[i]);
		}
	}
	
	std::cout << res;

	return 0;
}