#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);
	
	int total = 0;

	std::string s, strBuffer;

	std::cin >> s;

	std::istringstream ss(s);

	std::vector<std::string> res;

	while (std::getline(ss, strBuffer, ','))
	{
		res.push_back(strBuffer);
	}

	for (std::string temp : res)
	{
		total += std::stoi(temp);
	}

	std::cout << total;

	return 0;
}
