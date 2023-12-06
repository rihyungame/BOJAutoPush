#include <iostream>
#include <string>
#include <vector>

int main()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::string> g;

	for (int i = 0; i < n; i++)
	{
		std::string s;
		std::cin >> s;
		g.push_back(s);
	}
	
	for (int i = 0; i < g.size(); i++)
	{
		std::string s = g[i];
		for (std::string::const_reverse_iterator itr = s.rbegin(); itr != s.rend(); ++itr)
		{
			std::cout << *itr;
		}
		std::cout << std::endl;
	}

	return 0;
}