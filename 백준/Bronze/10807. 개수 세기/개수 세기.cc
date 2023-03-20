#include <iostream>

int main() {
	int num = 0;
	int foundNum = 0;
	int count = 0;

	std::cin >> num;

	int* arr = new int[num];
	
	for (int i = 0; i < num; i++)
		std::cin >> arr[i];

	std::cin >> foundNum;

	for (int i = 0; i < num; i++) {
		if (arr[i] == foundNum)
			count++;
	}

	std::cout << count;

	return 0;
}