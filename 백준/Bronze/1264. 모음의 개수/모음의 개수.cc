#include <iostream>
#include <string>

int main() {
	while (true) {
		std::string s;
		int count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0;
		std::getline(std::cin, s);

		if (s == "#")
			break;

		for (std::string::iterator itr = s.begin(); itr != s.end(); itr++) {
			if (*itr == 'a' || *itr == 'A')
				count_a++;
			else if (*itr == 'e' || *itr == 'E')
				count_e++;
			else if (*itr == 'i' || *itr == 'I')
				count_i++;
			else if (*itr == 'o' || *itr == 'O')
				count_o++;
			else if (*itr == 'u' || *itr == 'U')
				count_u++;
		}

		std::cout << count_a + count_e + count_i + count_o + count_u << "\n";
	}

	return 0;
}
