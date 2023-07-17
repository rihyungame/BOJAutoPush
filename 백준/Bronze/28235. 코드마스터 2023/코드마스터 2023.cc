#include <iostream>
#include <string>

int main() {
	std::string s;
	std::cin >> s;

	if (s == "SONGDO")
		std::cout << "HIGHSCHOOL";
	else if (s == "CODE")
		std::cout << "MASTER";
	else if (s == "2023")
		std::cout << "0611";
	else if (s == "ALGORITHM")
		std::cout << "CONTEST";

	return 0;
}
