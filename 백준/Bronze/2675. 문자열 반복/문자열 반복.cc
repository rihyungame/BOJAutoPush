#include <iostream>
#include <string>
#define MAX 20

int main() {
	int tCase;
	char arr[MAX] = "\0";
	std::string result = "\0";
	std::cin >> tCase;

	for (int i = 0; i < tCase; i++) {
		int reps;
		std::string s;
		std::cin >> reps >> s;
		s.copy(arr, MAX);
		for (int j = 0; j < s.size(); j++) {
			for (int k = 0; k < reps; k++) {
				result += arr[j];
			}
		}
		result += '\n';
	}

	std::cout << result;

	return 0;
}
