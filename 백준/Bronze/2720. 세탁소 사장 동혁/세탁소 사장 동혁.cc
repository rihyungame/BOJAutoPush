#include <iostream>

int main() {
	int case_count;
	std::cin >> case_count;
	for (int i = 0; i < case_count; i++) {
		int remain, number;
		std::cin >> number;
		
		std::cout << number / 25 << " ";
		remain = number % 25;
		std::cout << remain / 10 << " ";
		remain %= 10;
		std::cout << remain / 5 << " ";
		remain %= 5;
		std::cout << remain / 1 << " ";

		std::cout << std::endl;
	}

	return 0;
}
