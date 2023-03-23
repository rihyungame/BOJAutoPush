#include <iostream>
#define MAX 101
int main()
{
	char arr[MAX] = { '\0' };
	char reverseArr[MAX] = { '\0' };
	int count = 0 , result = -1;
	int hitCount = 0;

	std::cin >> arr;

	for (int i = 0; i < MAX; i++) {
		if (arr[i] != '\0')
			count++;
		else
			break;
	}

	for (int i = count - 1, j = 0; i >= 0; i--, j++)
		reverseArr[j] = arr[i];

	for (int i = 0; i < count; i++) {		
		if (reverseArr[i] == arr[i])
			hitCount++;
		else
			break;
	}

	if (hitCount != count)
		std::cout << 0;
	else
		std::cout << 1;

	return 0;
}