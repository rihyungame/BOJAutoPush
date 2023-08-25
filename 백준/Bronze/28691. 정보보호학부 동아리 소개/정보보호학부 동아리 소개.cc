#include <iostream>

int main()
{
	char ch;
	std::cin >> ch;
	if (ch == 'M')
		std::cout << "MatKor";
	if (ch == 'W')
		std::cout << "WiCys";
	if (ch == 'C')
		std::cout << "CyKor";
	if (ch == 'A')
		std::cout << "AlKor";
	if (ch == '$')
		std::cout << "$clear";
	
	return 0;
}