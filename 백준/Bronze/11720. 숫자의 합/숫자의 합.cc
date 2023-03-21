#include <iostream>
#include <string>

int main() {
	int n = 0;
	int sum = 0;
	std::string s;

	std::cin >> n;
	char* arr = new char[n + 1] {'\0'};

	std::cin >> s;
	s.copy(arr, n);

	for (int i = 0; i < n; i++) {
		sum += arr[i] - '0';
	}
	std::cout << sum;
	delete[] arr;
	return 0;
}
