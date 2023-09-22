#include <iostream>
#include <string>

int main()
{
	std::string s1, s2;
	std::cin >> s1 >> s2;

	if (s1.size() - 1 < s2.size() - 1)
		std::cout << "no";
	else
		std::cout << "go";

	return 0;
}