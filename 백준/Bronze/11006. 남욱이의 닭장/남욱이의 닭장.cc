#include <iostream>
using namespace std;

int main() {
	int count;
	cin >> count;
	for (int i = 0; i < count; i++) {
		int all_l, all_c;
		cin >> all_l >> all_c;
		cout << all_c * 2 - all_l << " " << all_c - (all_c * 2 - all_l) << endl;
	}
	return 0;
}
