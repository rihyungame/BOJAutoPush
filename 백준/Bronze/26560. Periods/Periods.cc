#include <iostream>
#include <string>

int main()
{
	int count;
	std::cin >> count;
	std::cin.ignore();

	for (int i = 0; i < count; i++)
	{
		std::string s;
		std::getline(std::cin, s);
		
		if (s[s.size() - 1] != '.')
			s.push_back('.');

		std::cout << s << '\n';
	}

	return 0;
}