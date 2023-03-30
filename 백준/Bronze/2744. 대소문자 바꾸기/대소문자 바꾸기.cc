#include <iostream>
#define MAX 101

int main()
{
	char* arr = new char[MAX] {};
	std::cin >> arr;

	for (int i = 0; i < MAX; i++) {
		if (arr[i] >= 65 && arr[i] <= 90)
			arr[i] += 32;

		else if (arr[i] >= 97 && arr[i] <= 122)
			arr[i] -= 32;
		
		else if (arr[i] == '\0')
			break;
		
		std::cout << arr[i];
	}
	return 0;

}