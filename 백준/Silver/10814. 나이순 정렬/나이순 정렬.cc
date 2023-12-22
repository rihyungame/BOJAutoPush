#include <iostream>
#include <string>
#include <map>

int main()
{
	std::multimap<int, std::string> info;
	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int n;
		std::string s;
		std::cin >> n >> s;
		info.insert(std::pair<int,std::string>(n, s));
	}

	for (std::multimap<int, std::string>::iterator itr = info.begin(); itr != info.end(); itr++)
	{
		std::cout << itr->first << ' ' << itr->second << '\n';
	}

	return 0;
}