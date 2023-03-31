#include <iostream>
#define MAX 5

int main()
{
	int num = 0, temp;

	for (int i = 0; i < MAX; i++) {
		std::cin >> temp;
		num += temp;
	}
	
	std::cout << num;
	return 0;
}