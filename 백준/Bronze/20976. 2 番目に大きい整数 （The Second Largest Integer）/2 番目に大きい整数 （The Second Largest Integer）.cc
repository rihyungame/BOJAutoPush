#include <iostream>
#define SIZE 3

int main() {
	int arr[SIZE];
	std::cin >> arr[0] >> arr[1] >> arr[2];

	for (int i = 0; i < SIZE - 1; i++) {
		for (int j = i + 1; j < SIZE; j++) {
			int temp;
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	std::cout << arr[1];
	return 0;
}