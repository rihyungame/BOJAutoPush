#include <iostream>
#define MAX 5

int main() {
	int n;
	int arr[MAX];
	int count = 0;
	std::cin >> n;
	
	for (int i = 0; i < MAX; i++) {
		std::cin >> arr[i];
		if (arr[i] == n)
			count++;
	}

	std::cout << count++;		

	return 0;
}