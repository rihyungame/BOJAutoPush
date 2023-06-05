#include <iostream>
#include <string>

int main() {
	std::string s;
	while (true) {
		std::getline(std::cin, s);
		if (s == "END")
			break;
		for (int i = s.size() - 1; i >= 0; i--)
			std::cout << s[i];
		std::cout << "\n";
	}
	return 0;
}
