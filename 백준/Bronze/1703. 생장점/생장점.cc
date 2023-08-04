#include <iostream>
using namespace std;

int main() {

	while (true) {
		int age, node_total = 1;
		cin >> age;
		if (age == 0)
			break;

		for (int i = 0; i < age; i++) {
			int splitting_factor, minus;
			cin >> splitting_factor >> minus;
			node_total = splitting_factor * node_total - minus;
		}
		cout << node_total << '\n';
	}
	return 0;
}
