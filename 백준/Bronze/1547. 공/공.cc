#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
void MySwap(T& m1, T &m2) {
	T temp = move(m1);
	m1 = move(m2);
	m2 = temp;
}

int main() {
	int count;
	vector<int> n = { 1,2,3 };

	cin >> count;

	for (int i = 0; i < count; i++) {
		int m1, m2, temp;
		cin >> m1 >> m2;
		int idx1 = find(n.begin(), n.end(), m1) - n.begin();
		int idx2 = find(n.begin(), n.end(), m2) - n.begin();
		MySwap<int>(n[idx1], n[idx2]);
	}

	std::cout << n[0];

	return 0;
}
