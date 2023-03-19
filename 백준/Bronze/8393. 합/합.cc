#include <iostream>

int main() {
	int n, temp = 0;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
		temp += i;

	std::cout << temp;
    return 0;
}