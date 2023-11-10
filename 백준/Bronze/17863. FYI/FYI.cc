#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::cin >> s;

	if (s[0] == '5' && s[1] == '5' && s[2] == '5')
		std::cout << "YES";
	else
		std::cout << "NO";

	return 0;
}