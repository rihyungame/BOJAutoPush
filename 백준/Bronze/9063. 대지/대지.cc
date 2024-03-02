//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <climits>

int main() 
{
	//freopen("input.txt", "rt", stdin);
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(NULL);
	
	int count;
	std::cin >> count;

	int max_x = INT_MIN;
	int max_y = INT_MIN;
	int min_x = INT_MAX;
	int min_y = INT_MAX;
	
	for (int i = 0; i < count; ++i)
	{
		int x, y;
		std::cin >> x >> y;

		if (max_x < x)
		{
			max_x = x;
		}

		if (max_y < y)
		{
			max_y = y;
		}

		if (min_x > x)
		{
			min_x = x;
		}

		if (min_y > y)
		{
			min_y = y;
		}
	}

	std::cout << (max_x - min_x) * (max_y - min_y);

	return 0;
}
