#include <iostream>
#define MAX 6
int main()
{
	int blackPeace[MAX] = { 1,1,2,2,2,8 };
	int whitePeace[MAX] = { 0 };
	int result[MAX] = {0};

	for (int i = 0; i < MAX; i++) {
		std::cin >> whitePeace[i];
		if (blackPeace[i] == whitePeace[i])	{
			continue;
		}
		else if (blackPeace[i] > whitePeace[i]) {
			result[i] = blackPeace[i] - whitePeace[i];
		}
		else {
			result[i] = blackPeace[i] - whitePeace[i];
		}
	}

	for (int i = 0; i < MAX; i++) {
		std::cout << result[i] << " ";
	}

	return 0;
}