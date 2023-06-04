#include <iostream>
#include <string>

int main() {
	std::string s;
	int count = 0;

	std::cin >> count;
	std::cin.ignore();

	for (int i = 0; i < count; i++) {
		std::getline(std::cin, s);
		std::cout << i + 1 << ". " << s << "\n";
	}

	return 0;
}
