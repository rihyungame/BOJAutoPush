#include <iostream>

int main() {
	int n, count = 1, n_bad = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int m;
		std::cin >> m;
		if (m != count++)
			n_bad++;
	}
	
	std::cout << n_bad;
	return 0;
}
