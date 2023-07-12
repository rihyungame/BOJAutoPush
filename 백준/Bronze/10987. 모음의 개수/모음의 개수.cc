#include <iostream>

int main() {
	char arr[101] = "";
	int count = 0;

	std::cin >> arr;

	for (int i = 0; i < 100; i++) {
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'i')
			count++;
	}

	std::cout << count;
	return 0;
}
