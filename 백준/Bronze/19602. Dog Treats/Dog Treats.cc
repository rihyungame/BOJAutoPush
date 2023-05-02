#include <iostream>

int main() {
	int s, m, l;
	int total;
	std::cin >> s >> m >> l;
	total = s + (2 * m) + (3 * l);
	if (total >= 10)
		std::cout << "happy";
	else
		std::cout << "sad";
	return 0;
}