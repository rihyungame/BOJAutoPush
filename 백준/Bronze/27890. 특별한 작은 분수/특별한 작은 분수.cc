#include <iostream>

int main()
{
	int n, sec, temp;
	std::cin >> n >> sec;

	temp = n;

	for (int i = 0; i < sec; i++)
	{
		if (temp % 2)
		{
			temp = (temp * 2) ^ 6;
		}
		else
		{
			temp = (temp / 2) ^ 6;
		}
	}
	
	std::cout << temp;

	return 0;
}