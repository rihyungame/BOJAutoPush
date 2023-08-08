#include <iostream>

int main() {
	char mbti[5] = {};
	
	std::cin >> mbti;

		if (mbti[0] == 'E')
			std::cout << 'I';
		else
			std::cout << 'E';

		if (mbti[1] == 'S')
			std::cout << 'N';
		else
			std::cout << 'S';

		if (mbti[2] == 'T')
			std::cout << 'F';
		else
			std::cout << 'T';

		if (mbti[3] == 'P')
			std::cout << 'J';
		else
			std::cout << 'P';

	return 0;
}