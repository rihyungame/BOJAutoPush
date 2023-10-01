#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::cin >> s;
	long long num = std::stoi(s); 

	bool isSevenIn = false;
	
	for (std::string::iterator itr = s.begin(); itr != s.end(); ++itr)
		if (*itr == '7')
			isSevenIn = true;
	
	if (!isSevenIn && (num % 7))
		std::cout << 0;
	else if (!isSevenIn && !(num % 7))
		std::cout << 1;
	else if (isSevenIn && (num % 7))
		std::cout << 2;
	else if (isSevenIn && !(num % 7))
		std::cout << 3;

	return 0;
}