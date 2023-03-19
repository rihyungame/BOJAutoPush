#include <iostream>

int main() {
	int totalPrice, nTotal, temp = 0;

	std::cin >> totalPrice >> nTotal;

	int* stuffPrice = new int[nTotal];
	int* nStuff = new int[nTotal];

	for (int i = 0; i < nTotal; i++) {
		std::cin >> stuffPrice[i] >> nStuff[i];
		temp += stuffPrice[i] * nStuff[i];
	}

	if (temp == totalPrice)
		std::cout << "Yes";
	else {
		std::cout << "No";
	}
    return 0;

}