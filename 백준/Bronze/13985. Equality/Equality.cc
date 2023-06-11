#include <iostream>
#include <string>

int main() {
	std::string s;
	std::getline(std::cin,s);	
	
	if (s[0] - '0' + s[4] - '0' == s[8] - '0')
		std::cout << "YES";
	else
		std::cout << "NO";

	return 0;
}
