#include <iostream>
#include <string>
#define MAX 101
#define alpha_num 26

int main() {
	std::string s;
	std::cin >> s;
	char arr[MAX] = { '\0' };
	char temp = 'a';
	int result[alpha_num];

	std::fill_n(result, alpha_num, -1);

	s.copy(arr, MAX);

	for (int i = 0; i < alpha_num; i++) {
		for (int j = 0; j < MAX; j++) {
			if (static_cast<char>(temp + i) == arr[j]) {
				result[i] = j;
				break;
			}
		}
	}

	for (int i = 0; i < alpha_num; i++)
		std::cout << result[i] << " ";

	return 0;
}
