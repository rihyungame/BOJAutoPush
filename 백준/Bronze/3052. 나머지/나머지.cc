#include <iostream>
#define MAX 10
#define remainder 42

int main() {
	int temp = 0, count = 0;
	int numArr[MAX] = { 0 };
	bool checkArr[remainder] = { false };

	for (int i = 0; i < MAX; i++) {
		std::cin >> temp;
		numArr[i] = temp % 42;
	}

	for (int i = 0; i < MAX; i++) {
		checkArr[numArr[i]] = true;
	}

	for (int i = 0; i < remainder; i++)
		if (checkArr[i])
			count++;

	std::cout << count;

	return 0;
}