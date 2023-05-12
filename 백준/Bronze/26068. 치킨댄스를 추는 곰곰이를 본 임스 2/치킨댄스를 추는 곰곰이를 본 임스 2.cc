#include <iostream>
#include <string>

int main() {
	int n, count = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		s.erase(0, 2);
		int temp = std::stoi(s);
		if (temp <= 90)
			count++;
	}

	std::cout << count;
	return 0;
}