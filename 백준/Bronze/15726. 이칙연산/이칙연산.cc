#include <iostream>

int main() {
	double n1, n2, n3;
	double result1, result2;
	std::cin >> n1 >> n2 >> n3;

	result1 = n1 * n2 / n3;
	result2 = n1 / n2 * n3;

	if (result1 > result2)
		std::cout << static_cast<int>(result1);
	else
		std::cout << static_cast<int>(result2);

	return 0;
}
