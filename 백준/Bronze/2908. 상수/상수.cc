#include <iostream>
#include <string>
#define NUM 3

int main() {
	char* arrA = new char[NUM] {""};
	char* arrB = new char[NUM] {""};

	std::string a, b, revA, revB;
	
	std::cin >> a >> b;

	a.copy(arrA, NUM);
	b.copy(arrB, NUM);

	for (int i = NUM - 1; i >= 0; i--) {
		revA += arrA[i];
		revB += arrB[i];
	}

	if (std::stoi(revA) > std::stoi(revB))
		std::cout << revA;
	else 
		std::cout << revB;

	return 0;
}