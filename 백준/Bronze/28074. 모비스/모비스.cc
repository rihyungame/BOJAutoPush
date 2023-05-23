#include <iostream>
#include <string>

int main() {
	std::string s;
	std::cin >> s;
	bool m_switch = false, o_switch = false, b_switch = false, 
		i_switch = false, s_switch = false;
	
	for (std::string::iterator iter = s.begin(); iter != s.end(); iter++) {
		if (*iter == 'M')
			m_switch = true;
		else if (*iter == 'O')
			o_switch = true;
		else if (*iter == 'B')
			b_switch = true;
		else if (*iter == 'I')
			i_switch = true;
		else if (*iter == 'S')
			s_switch = true;
	}

	if (m_switch && o_switch && b_switch && i_switch && s_switch)
		std::cout << "YES";
	else
		std::cout << "NO";
	
	return 0;
}
