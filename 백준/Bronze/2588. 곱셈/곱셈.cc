#include <iostream>
#include <cmath>

int toInt(char c) {
	return c - '0';
}

int main() {
	char a[3] = {};
	char b[3] = {};
	int a_int = 0;
	int total = 0;
	int pow = 0;

	for (int i = 0; i < 3; i++)
		std::cin >> a[i];

	for (int i = 0; i < 3; i++)
		std::cin >> b[i];

	a_int += toInt(a[0]) * 100;

	a_int += toInt(a[1]) * 10;

	a_int += toInt(a[2]) * 1;

	for (int i = 2; i >= 0; i--,pow++) {
		std::cout << a_int * toInt(b[i]) << std::endl;
		total += a_int * toInt(b[i]) * std::pow(10,pow);
	}

	std::cout << total << std::endl;

	return 0;
}