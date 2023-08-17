#include <iostream>

int main() {
	int n, count = 0;
	std::cin >> n;
	for (int i = 1; i <= 500; i++) {
		for (int j = 1; j <= 500; j++) {
			if ((j*j) - (i*i) == n)
				count++;
		}
	}
	std::cout << count;
	return 0; 
}
