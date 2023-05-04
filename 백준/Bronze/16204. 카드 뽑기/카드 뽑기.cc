#include <iostream>

int main() {
	int total, f_o, b_o;
	std::cin >> total >> f_o >> b_o;
	int f_x = total - f_o;
	int b_x = total - b_o;

	int min_o = f_o > b_o ? b_o : f_o;
	int min_x = f_x > b_x ? b_x : f_x;

	std::cout << min_o + min_x;
		
	return 0;
}