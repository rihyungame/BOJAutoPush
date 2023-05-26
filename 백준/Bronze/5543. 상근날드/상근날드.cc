#include <iostream>

int main() {
	int n1, n2, n3, m1, m2;
	int low_n, low_m;
	std::cin >> n1 >> n2 >> n3 >> m1 >> m2;
	low_n = n1 < n2 ? n1 : n2;
	low_n = low_n < n3 ? low_n : n3;
	low_m = m1 < m2 ? m1 : m2;

	std::cout << low_n + low_m - 50;

	return 0;
}
