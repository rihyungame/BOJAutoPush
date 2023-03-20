#include <iostream>
#define MAX 28
#define STUDENT 30

int main() {
	int temp1 = 0, temp2 = 0;
	bool arr[30] = { false };
	int n = 0;

	for (int i = 0; i < MAX; i++) {
		std::cin >> n;
		arr[n - 1] = true;
	}

	for (int i = 0; i < STUDENT; i++) {
		if (!arr[i]) {
			if (temp1 == 0) {
				temp1 = i + 1;
			}
			else {
				temp2 = i + 1;
			}
		}
	}

	if (temp1 > temp2) {
		std::cout << temp2 << std::endl << temp1 << std::endl;
	}
	else {
		std::cout << temp1 << std::endl << temp2 << std::endl;
	}

	return 0;
}