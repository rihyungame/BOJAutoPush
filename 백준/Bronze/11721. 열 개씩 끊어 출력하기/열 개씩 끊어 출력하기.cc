#include <iostream>
#include <string>

int main() {
	std::string s;
	std::cin >> s;
	int multiple = 0;
	int count = 0;
	bool break_on = false;

	while (true) {
		for (int i = 0; i < 10; i++) {
			if (count == s.length()) {
				break_on = true;
				break;
			}
			std::cout << s[i + multiple];
			count++;
		}
		if (break_on)
			break;
		std::cout << "\n";
		multiple += 10;
	}
	return 0;
}
