#include <iostream>
#define arrNum 9

int max(int arr[], int arrSize, int* count) {
	int temp = arr[0];
	for (int i = 0; i < arrSize; i++) {
		if (temp <= arr[i]) {
			temp = arr[i];
			*count = i + 1;
		}
	}
	return temp;
}

int main() {
	int num = arrNum;
	int maxNum = 0;
	int count = 0;

	int* arr = new int[arrNum];
	
	for (int i = 0; i < arrNum; i++)
		std::cin >> arr[i];	

	maxNum = max(arr, num, &count);
	
	std::cout << maxNum << std::endl;
	std::cout << count;

	return 0;
}