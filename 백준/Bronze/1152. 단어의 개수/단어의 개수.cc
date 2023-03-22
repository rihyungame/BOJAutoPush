#include <iostream>
#define MAX 1000001

int main() {
	int count = 0;
	char* arr = new char[MAX] {NULL};
	std::cin.getline(arr, MAX);

	for (int i = 0; i < MAX; i++) {
		if (arr[i] == ' ')
			count--;
		else
			break;
	}

	for (int i = MAX - 1; i >= 0; i--) {
		if (arr[i] == ' ')
			count--;
		else if (arr[i] == NULL)
			continue;
		else
			break;
	}

	for (int i = 0; i < MAX; i++) {		
		if (arr[i] == '\0')
			break;
		else if (arr[i] == ' ')
			count++;
	}

	std::cout << count + 1;

	return 0;
}