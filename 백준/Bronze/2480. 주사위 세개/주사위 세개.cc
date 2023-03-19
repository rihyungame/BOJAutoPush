#include <iostream>

#define MAX 3

int main() {
	int num[MAX] = { 0 };
	int numSave = 0;
	int count = 0;
	int maxNum = 0;

	for (int i = 0; i <= MAX - 1; i++)
		std::cin >> num[i];

	for (int i = 0; i < MAX - 1; i++) {
		for (int j = i + 1; j <= MAX - 1; j++) {
			if (num[i] == num[j]) {
				numSave = num[i];
				count++;
			}			
		}
	}

	for (int i = 0; i <= MAX - 1; i++) {
		if (num[i] > maxNum)
			maxNum = num[i];
	}

	if (count == 3)
		std::cout << 10000 + (numSave  * 1000) << std::endl;
	else if (count == 1)
		std::cout << 1000 + (numSave * 100) << std::endl;
	else {
		std::cout << maxNum * 100;
	}

	return 0;
}