#include <iostream>

int main() {
	int n;

	std::cin >> n;

	int seq = (2 * n) - 1;
	int half = (seq - 1) / 2;
	int empty = n;

	if (seq == 1)
		std::cout << "*" << std::endl;
	else {
		for (int i = half, star = 1; i >= 1; i--, empty--) {
			for(int i = empty - 1; i >= 1; i--)
				std::cout << " ";
			for (int j = 0; j < star; j++) 
				std::cout << "*";			
			star += 2;
			std::cout << std::endl;
		}

		for (int i = 0; i < seq; i++)
			std::cout << "*";
		std::cout << std::endl;

		for (int i = half, empty = 1, star = (2 * (n - 1)) - 1; i >= 1; i--, empty++) {
			for (int j = 0; j < empty; j++) 				
				std::cout << " ";
			for (int i = star; i >= 1; i--)
				std::cout << "*";			
			std::cout << std::endl;
			star -= 2;
		}
	}
	return 0;
}
