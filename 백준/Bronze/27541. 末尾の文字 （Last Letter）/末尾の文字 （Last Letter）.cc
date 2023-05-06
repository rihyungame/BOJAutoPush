#include <iostream>
#include <string>

int main() {
	int n;
	std::string s;
	std::cin >> n;
	std::cin >> s;

	if (s.back() == 'G')
		s.pop_back();
	else
		s.append("G");
	
	std::cout << s;

	return 0;
}