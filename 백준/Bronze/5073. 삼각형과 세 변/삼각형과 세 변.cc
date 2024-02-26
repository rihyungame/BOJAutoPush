#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main() 
{
	//freopen("input.txt", "rt", stdin);
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	while (true)
	{
		int a, b, c;
		int count = 0;
		int max = 0;
		int another = 0;

		std::cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}

		if (a == b)
		{
			count++;
		}
		if (a == c)
		{
			count++;
		}
		if (b == c)
		{
			count++;
		}

		if (a > max)
		{
			max = a;
			another = b + c;
		}

		if (b > max)
		{
			max = b;
			another = a + c;
		}

		if (c > max)
		{
			max = c;
			another = a + b;
		}

		if (max >= another)
		{
			std::cout << "Invalid";
		}
		else if (count == 3)
		{
			std::cout << "Equilateral";
		}
		else if (count == 1)
		{
			std::cout << "Isosceles";
		}
		else if (count == 0)
		{
			std::cout << "Scalene";
		}

		std::cout << '\n';
	}

	return 0;
}