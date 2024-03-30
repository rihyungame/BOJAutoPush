#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string s;
	std::cin >> s;

	int total = 0;
	for (std::string::size_type i = 0; i < s.size(); i++)
	{
		int tmp = s[i] - '0';
		total += std::pow(tmp, 5);
	}

	std::cout << total << std::endl;
	return 0;
}
