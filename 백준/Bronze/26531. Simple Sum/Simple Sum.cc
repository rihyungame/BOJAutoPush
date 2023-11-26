#include <iostream>
#include <string>

int main()
{
	std::string s1,s2,s3,s4,s5;
	std::cin >> s1 >> s2 >> s3 >> s4 >> s5;
	
	if (std::stoi(s1) + std::stoi(s3) != std::stoi(s5))
		std::cout << "NO";
	else
		std::cout << "YES";

	return 0;
}