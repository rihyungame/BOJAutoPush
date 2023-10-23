#include <iostream>
#include <string>

int main()
{
	std::string s;
	int count = 0;
	
	while (std::getline(std::cin, s))
		count++;

	std::cout << count;

	return 0;
}