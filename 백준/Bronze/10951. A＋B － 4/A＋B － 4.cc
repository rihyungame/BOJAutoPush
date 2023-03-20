#include <iostream>
#define MAX 100

int main() {
	int* a = new int[MAX];
	int* b = new int[MAX];
	int count = 0;
	int temp;

	for (int i = 0; i < MAX; i++) {
		std::cin >> a[i] >> b[i];
		count++;
		if (std::cin.eof())
			break;
	}

	for (int i = 0; i < count - 1; i++) {
		std::cout << a[i] + b[i] << std::endl;
	}

	return 0;
}