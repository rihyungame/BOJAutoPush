#include <iostream>
#include <string>

int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::string s;
		int start, end;
		std::cin >> s >> start >> end;
		std::cout << s.erase(start, end-start) << "\n";
	}
	
	return 0;
}
