#include <iostream>
#include <string>

int main() {
	int total = 0;
	std::string s;
	std::cin >> s;

	for (std::string::iterator itr = s.begin(); itr != s.end(); itr++) {
		std::string::iterator itr2 = itr;
		itr2++;
		if (itr2 != s.end()) {
			if ((*itr) - '0' == 1 && *itr2 - '0' == 0) {
				total += 10;
				itr++;
			}
			else
				total += *itr - '0';
		}
		else
			total += *itr - '0';
	}

	std::cout << total;
	return 0;
}
