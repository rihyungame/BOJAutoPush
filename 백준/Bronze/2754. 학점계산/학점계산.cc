#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::cin >> s;
	
	if (s == "A+")
		std::cout << "4.3";
	else if (s == "A0")
		std::cout << "4.0";
	else if (s == "A-")
		std::cout << "3.7";
	else if (s == "B+")
		std::cout << "3.3";
	else if (s == "B0")
		std::cout << "3.0";
	else if (s == "B-")
		std::cout << "2.7";
	else if (s == "C+")
		std::cout << "2.3";
	else if (s == "C0")
		std::cout << "2.0"; 
	else if (s == "C-")
		std::cout << "1.7";
	else if (s == "D+")
		std::cout << "1.3"; 
	else if (s == "D0")
		std::cout << "1.0"; 
	else if (s == "D-")
		std::cout << "0.7"; 
	else if (s == "F")
		std::cout << "0.0";
}