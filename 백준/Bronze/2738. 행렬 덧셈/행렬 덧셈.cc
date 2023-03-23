#include <iostream>

int main()
{
	int row, col;
	std::cin >> col >> row;

	int** arrA = new int* [row];
	int** arrB = new int* [row];

	for (int i = 0; i < row; i++)
		arrA[i] = new int[col];

	for (int i = 0; i < row; i++)
		arrB[i] = new int[col];

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			std::cin >> arrA[i][j];

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			std::cin >> arrB[i][j];

	for (int i = 0; i < row; i++) 
		for (int j = 0; j < col; j++)
			arrA[i][j] += arrB[i][j];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {				
			std::cout << arrA[i][j];			
			if (j < col - 1)
				std::cout << " ";
		}
		if (i < row - 1)
			std::cout << std::endl;
	}
	

	return 0;
}