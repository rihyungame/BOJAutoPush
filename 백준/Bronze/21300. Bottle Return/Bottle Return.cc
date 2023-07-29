#include <iostream>
using namespace std;

int main() {
	int total = 0;
	for (int i = 0; i < 6; i++) {
		int n;
		cin >> n;
		total += n*5;
	}
	cout << total;

	return 0;
}
