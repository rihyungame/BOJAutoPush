#include <iostream>
#include <string>

int main()
{
	std::string s;
	s = "WelcomeToSMUPC";

	int str_size = s.size();
	int n;
	std::cin >> n;

	if (n % str_size == 0)
		std::cout << s[s.size() - 1];
	else
		std::cout << s[n % str_size - 1];

	return 0;
}