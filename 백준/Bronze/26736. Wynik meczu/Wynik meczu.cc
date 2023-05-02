#include <iostream>
#include <string>

int main() {
	std::string s;
	std::cin >> s;
	int count_a = 0, count_b = 0;

	for (std::string::iterator iter = s.begin(); iter != s.end(); ++iter) {
		if (*iter == 'A')
			count_a++;
		else if (*iter == 'B')
			count_b++;
	}

	std::cout << count_a << " : " << count_b;		
	return 0;
}