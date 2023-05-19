#include <iostream>

int main() {
	int n, gap = 0;
	int p_score = 0, d_score = 0;

	std::cin >> n;

	while (gap != 2) {
		if (n == 0)
			break;

		char temp = NULL;
		std::cin >> temp;
		if (temp == 'D')
			d_score++;
		else if (temp == 'P')
			p_score++;

		gap = std::abs(p_score - d_score);
		n--;
	}
	
	std::cout << d_score << ":" << p_score;
	return 0;
}
