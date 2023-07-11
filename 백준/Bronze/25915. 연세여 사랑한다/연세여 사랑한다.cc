#include <iostream>

int main() {
	char word;
	int total = 0;
	std::cin >> word;

	total += std::abs(word - 'I');
	word = 'I';
	total += std::abs(word - 'L');
	word = 'L';
	total += std::abs(word - 'O');
	word = 'O';
	total += std::abs(word - 'V');
	word = 'V';
	total += std::abs(word - 'E');
	word = 'E';
	total += std::abs(word - 'Y');
	word = 'Y';
	total += std::abs(word - 'O');
	word = 'O';
	total += std::abs(word - 'N');
	word = 'N';
	total += std::abs(word - 'S');
	word = 'S';
	total += std::abs(word - 'E');
	word = 'E';
	total += std::abs(word - 'I');
	word = 'I';

	std::cout << total;
	return 0;
}
