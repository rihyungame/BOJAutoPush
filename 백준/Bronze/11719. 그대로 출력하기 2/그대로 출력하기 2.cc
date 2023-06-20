#include <iostream>
#include <string>

int main() {
	std::string result;

	while (!std::cin.eof()) {
		std::getline(std::cin, result);
		std::cout << result << std::endl;
	}

	return 0;
}
