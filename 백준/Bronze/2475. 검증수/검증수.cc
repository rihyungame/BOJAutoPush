#include <iostream>
#define MAX 5
int main()
{	
	int num,result = 0;
	for (int i = 0; i < MAX; i++) {
		std::cin >> num;
		num *= num;
		result += num;
	}
	std::cout << result % 10;
	return 0;
}