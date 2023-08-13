#include <iostream>

int main() {
	int count;
	double cost, total_cost = 0;
	std::cin >> cost >> count;

	for (int i = 0; i < count; i++) {
		double w, h;
		std::cin >> w >> h;
		total_cost += (w * h) * cost;
	}
	std::cout << std::fixed;
	std::cout.precision(7);
	std::cout << total_cost;

	return 0;
}