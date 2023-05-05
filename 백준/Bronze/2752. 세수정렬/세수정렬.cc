#include <iostream>
#define SWAP(a, b) {int temp = a; a = b; b = temp;}

int main() {
	int n1, n2, n3;
	std::cin >> n1 >> n2 >> n3;

	if (n1 > n2)
		SWAP(n1, n2);

	if (n1 > n3)
		SWAP(n1, n3);

	if (n2 > n3)
		SWAP(n2, n3);

	std::cout << n1 << " " << n2 << " " << n3;

	return 0;
}