#include <iostream>

int main() {
	int l,a,b,c,d;
	int max_l, max_m;
	std::cin >> l >> a >> b >> c >> d;

	max_l = a / c;
	max_m = b / d;

	if (a % c > 0)
		max_l++;

	if (b % d > 0)
		max_m++;

	if (max_l > max_m)
		std::cout << l - max_l;

	else
		std::cout << l - max_m;

	return 0;
}
