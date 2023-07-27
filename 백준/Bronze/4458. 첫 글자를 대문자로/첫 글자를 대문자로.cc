#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		string s;
		getline(cin, s);
		if (!(s[0] >= 65 && s[0] < 97))
			s[0] -= 32;			
		std::cout << s << endl;
	}
	return 0;
}
