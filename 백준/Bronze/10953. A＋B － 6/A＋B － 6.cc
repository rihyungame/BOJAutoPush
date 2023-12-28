#include <iostream>

int main()
{

	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		char char_arr[4];
		char c1, c2;

		scanf("%s", char_arr);

		c1 = char_arr[0] - '0';
		c2 = char_arr[2] - '0';

		printf("%d\n", c1 + c2);
	}

	return 0;
}