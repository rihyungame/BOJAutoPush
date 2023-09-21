#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::cin >> s;

	for (int i = 0; i < s.size(); i++)
		s[i] -= 32;

	std::cout << s;

	return 0;
}