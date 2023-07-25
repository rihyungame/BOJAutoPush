#include <iostream>
using namespace std;

int main() {
	int count, total = 0;
	cin >> count;

	for (int i = 1; i <= count; i++) {
		total += i;
		for (int j = 1; j <= i; j++) {
			total += j + i;
		}
	}

	cout << total << endl;

	return 0;
}
