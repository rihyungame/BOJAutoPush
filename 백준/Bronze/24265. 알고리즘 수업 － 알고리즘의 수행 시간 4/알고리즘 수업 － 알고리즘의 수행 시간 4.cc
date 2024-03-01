#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main() 
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	long long count = 0, n;
	std::cin >> n;

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			count++;
		}
	}

	std::cout << count << '\n' << 2;

	return 0;	
}