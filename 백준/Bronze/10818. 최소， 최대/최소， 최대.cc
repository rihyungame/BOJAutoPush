#include <iostream>

int max(int arr[], int count) {
	int temp = arr[0];
	for (int i = 1; i < count; i++) {
		if (temp <= arr[i])
			temp = arr[i];
	}
	return temp;
}

int min(int arr[], int count) {
	int temp = arr[0];
	for (int i = 1; i < count; i++) {
		if (temp >= arr[i])
			temp = arr[i];
	}
	return temp;
}

int main() {
	int num = 0;
	int maxNum = 0;
	int minNum = 0;

	std::cin >> num;

	int* arr = new int[num];
	
	for (int i = 0; i < num; i++) 
		std::cin >> arr[i];	

	maxNum = max(arr, num);
	minNum = min(arr, num);
	
	std::cout << minNum << " " << maxNum;

	return 0;
}