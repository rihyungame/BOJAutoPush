#include <iostream>

int main() {
	int num = 0;
	int maxNum = 0;
	int count = 0;

	int start, end, text;

	std::cin >> num >> count;

	int* arr = new int[num] {0};
	
	for (int i = 0; i < count; i++) {
		std::cin >> start >> end >> text;
		for (int i = start - 1; i <= end - 1; i++)
		{
			arr[i] = text;
		}
	}

	for (int i = 0; i < num; i++) {
		std::cout << arr[i] << " ";
	}

	return 0;
}