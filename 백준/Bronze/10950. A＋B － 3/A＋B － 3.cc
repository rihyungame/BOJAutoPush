#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int* num1 = new int[n];
	int* num2 = new int[n];

	for (int i = 0; i < n; i++) {
		std::cin >> num1[i] >> num2[i];
	}

	for (int i = 0; i < n; i++) {
		std::cout << num1[i] + num2[i] << std::endl;
	}
	return 0;
}