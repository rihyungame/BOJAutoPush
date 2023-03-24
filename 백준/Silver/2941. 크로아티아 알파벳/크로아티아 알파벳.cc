#include <iostream>
#include <string>
#define MAX 100
int main()
{	
	std::string s;
	std::cin >> s;
	int nCnt = s.length();

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '=') {
			if (s[i - 1] == 'c')
				nCnt--;
			if (s[i - 1] == 's')
				nCnt--;
			if (s[i - 1] == 'z') {
				nCnt--;
				if (s[i - 2] == 'd')
					nCnt--;
			}
		}
		if (s[i] == '-') {
			if (s[i - 1] == 'c')
				nCnt--;
			if (s[i - 1] == 'd')
				nCnt--;
		}
		if (s[i] == 'j') {
			if (s[i - 1] == 'l')
				nCnt--;
			if (s[i - 1] == 'n')
				nCnt--;
		}
	}
	std::cout << nCnt;
	return 0;
}