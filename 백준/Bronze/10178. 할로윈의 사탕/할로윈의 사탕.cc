#include <iostream>
using namespace std;

int main() {
	int count;
	cin >> count;
	for (int i = 0; i < count; i++) {
		int c, v;
		cin >> c >> v;
		cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s)." << '\n';
	}

	return 0;
}
