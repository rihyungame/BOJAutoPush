#include <iostream>

int main() {
	int score;
	std::cin >> score;
	if (score <= 100 && score >= 90)
		std::cout << 'A';
	else if (score >= 80 && score <= 89)
		std::cout << 'B';
	else if (score >= 70 && score <= 79)
		std::cout << 'C';
	else if (score >= 60 && score <= 69)
		std::cout << 'D';
	else
		std::cout << 'F';

	return 0;
}