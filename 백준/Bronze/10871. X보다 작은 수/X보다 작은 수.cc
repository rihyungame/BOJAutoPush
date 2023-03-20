#include <iostream>

int main() {
	int num = 0;
	int maxNum = 0;
	int count = 0;

	std::cin >> num >> maxNum;

	int* arr = new int[num];
	
	for (int i = 0; i < num; i++) {
		std::cin >> arr[i];
		if (arr[i] < maxNum)
			std::cout << arr[i] << " ";
	}
	return 0;
}