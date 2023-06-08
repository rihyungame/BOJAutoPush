#include <iostream>
#include <string>
#include <vector>

using namespace std;

void parse(const string& str, vector<string>& values, string& delimiter) {
	string::size_type Fpos = str.find_first_not_of(delimiter, 0);
	string::size_type Lpos = str.find_first_of(delimiter, Fpos);

	while (string::npos != Fpos || string::npos != Lpos) {
		values.push_back(str.substr(Fpos, Lpos - Fpos));
		Fpos = str.find_first_not_of(delimiter, Lpos);
		Lpos = str.find_first_of(delimiter, Fpos);
	}
}

int main() {
	string s, delimiter = "/";
	vector<string> values;
	std::cin >> s;

	parse(s, values, delimiter);
	
	int k = stoi(values[0]);
	int d = stoi(values[1]);
	int a = stoi(values[2]);

	if (k + a < d || d == 0)
		cout << "hasu"; 
	else
		cout << "gosu";

	return 0;
}
