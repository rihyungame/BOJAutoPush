#include <iostream>

int main() {
	int count;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
		int n, per;
		std::cin >> n >> per;
		if (n % per)
			std::cout << (n / per) + 1;
		else
			std::cout << n / per;
		std::cout << std::endl;
	}
	return 0;
}