#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string s;

	std::cin >> s;

	int idx = std::find(s.begin(), s.end(), 'e') - s.begin();
	int e = 0;

	for (std::string::size_type i = 0; i < s.size(); i++)
	{
		if (s[i] == 'e')
		{
			e++;
		}
	}

	if (idx > 0)
	{
		for (int i = 0; i < e; i++)
		{
			s.insert(idx, "e");
		}
	}

	std::cout << s;

	return 0;
}