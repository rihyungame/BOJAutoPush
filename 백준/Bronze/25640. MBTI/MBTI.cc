#include <iostream>
#include <string>

int main() {
	std::string s;
	int n, count = 0;
	std::cin >> s >> n;

	for (int i = 0; i < n; i++) {
		std::string t;
		std::cin >> t;
		if (s == t)
			count++;
	}
	
	std::cout << count;
	return 0;
}