#include <iostream>

int main() {
	int s, a;

	std::cin >> s >> a;

	s /= 2;
	a /= 2;

	if (a < s)
		std::cout << a;
	else
		std::cout << s;

	return 0;
}