//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	//freopen("input.txt", "rt", stdin);

	int n1, n2, a, b, c, d, q, r;
	std::cin >> n1 >> n2;

	a = 100 - n1;
	b = 100 - n2;

	c = 100 - (a + b);
	d = a * b;

	q = d / 100;
	r = d % 100;

	std::cout << a << " " << b << " " << c << " " << d << " " << q << " " << r << '\n';
	std::cout << c + q << " " << r;
	return 0;
}