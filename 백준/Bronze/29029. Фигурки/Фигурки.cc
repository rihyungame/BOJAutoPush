#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int count;
	int count_n = 0, count_s = 0, count_w = 0, count_e = 0;
	std::vector<int> v1;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
		char ch;
		std::cin >> ch;
		if (ch == 'N')
			count_n++;
		else if (ch == 'S')
			count_s++;
		else if (ch == 'W')
			count_w++;
		else if (ch == 'E')
			count_e++;
	}

	v1.push_back(count_n);
	v1.push_back(count_s);
	v1.push_back(count_w);
	v1.push_back(count_e);

	std::sort(v1.begin(), v1.end(), std::greater<int>());

	std::cout << v1[1] + v1[2] + v1[3];

	return 0;
}