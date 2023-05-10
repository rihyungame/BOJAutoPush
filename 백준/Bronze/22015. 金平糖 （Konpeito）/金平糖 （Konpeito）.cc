#include <iostream>

int main() {
	int a, b, c;
	int max;
	std::cin >> a >> b >> c;

	if (a >= b && a >= c)
		max = a;
	else if (b >= a && b >= c)
		max = b;
	else if (c >= b && c >= a)
		max = c;

	std::cout << max - a + max - b + max - c;

	return 0;
}