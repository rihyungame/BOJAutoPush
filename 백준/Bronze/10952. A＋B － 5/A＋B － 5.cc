#include <iostream>

int main() {
	int* a = new int[100];
	int* b = new int[100];
	int count = 0; 
	int i = 0;

	do {
		std::cin >> a[i] >> b[i];
		i++;
		count++;
	} while (a[i - 1] != 0 && b[i - 1] != 0);

	for (int i = 0; i < count - 1; i++) {
		std::cout << a[i] + b[i] << std::endl;
	}

	return 0;
}