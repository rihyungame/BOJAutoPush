#include <iostream>
#include <string>

int main() {
	while (true) {
		std::string s;
		int a, w;
		std::cin >> s >> a >> w;
		
		if (s == "#" && a == 0 && w == 0)
			break;

		if (a > 17 || w >= 80) {
			std::cout << s << " Senior" << "\n";
		}
		else
			std::cout << s << " Junior" << "\n";
	}

	return 0;
}
