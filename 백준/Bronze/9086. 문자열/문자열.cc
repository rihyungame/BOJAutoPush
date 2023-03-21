#include <iostream>
#define MAX 1001

int main() {
	int n = 0 , count = 0;
	char arr[MAX] = {'\0'};
	char saveArr[21] = { '\0' };

	std::cin >> n;

	for (int i = 0, j = 0; i < n; i++) {
		char temp = '\0';
		std::cin >> arr;
		saveArr[i * 2] = arr[0];
		while (arr[j] != '\0') {
			temp = arr[j];
			j++;
		}
		saveArr[(i * 2) + 1] = temp;
		j = 0;
	}

	for (int i = 0; i < n; i++) {
		int j = i * 2;
		std::cout << saveArr[j] << saveArr[j+1] <<std::endl;
	}

	return 0;
}
