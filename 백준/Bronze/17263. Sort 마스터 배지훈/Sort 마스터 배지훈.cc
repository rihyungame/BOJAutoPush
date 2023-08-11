#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	unsigned int count;
	std::cin >> count;
	std::vector<int> v1 = {};

	for (unsigned int i = 0; i < count; i++) {
		int n; 
		std::cin >> n;
		v1.push_back(n);
	}

	sort(v1.begin(), v1.end());

	std::cout << v1[count-1];

	return 0;
}