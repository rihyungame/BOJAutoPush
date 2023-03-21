#include <iostream>
#define MAX 101

int main() {
	int count = 0;
	char arr[MAX] = {'\0'};
	
	std::cin >> arr;
	
	int i = 0;
	while (i < MAX) {
		if (arr[i] == '\0')
			break;
		else {
			count++;
		}
		i++;
	}
	std::cout << count;

	return 0;
}
