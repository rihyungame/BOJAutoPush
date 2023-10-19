#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::cin >> s;

	for (std::string::reverse_iterator riter(s.rbegin()); riter != s.rend(); ++riter)
		std::cout << *riter;

	return 0;
}