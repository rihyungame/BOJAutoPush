#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;
	std::string s;
	std::cin >> n >> s;
	
	int total = 0;
	for (std::string::size_type i = 0; i < s.size(); i++)
	{
		if (s[i] == 'j' || s[i] == 'i')
		{
			total += 2;
		}
		else if (s[i] == 'o')
		{
			total += 1;
		}
	}

	std::cout << total;

	return 0;
}