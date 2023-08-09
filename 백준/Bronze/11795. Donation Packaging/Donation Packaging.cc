#include <iostream>

int main() {
	int a = 0, b = 0, c = 0, count;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
		int a_temp = 0, b_temp = 0, c_temp = 0 , min = 0;
		std::cin >> a_temp >> b_temp >> c_temp;
		a += a_temp;
		b += b_temp;
		c += c_temp;
		if (a > b)
			min = b;
		else
			min = a;

		if (min > c)
			min = c;

		if (a < 30 || b < 30 || c < 30)
			std::cout << "NO" << std::endl;
		else {
			std::cout << min << std::endl;
			a -= min;
			b -= min;
			c -= min;
		}
	}
	return 0;
}