#include <iostream>

int main()
{
	int n, m, count = 0;
	std::cin >> n >> m;

	for (int i = n * m; i > 1; i--)
	{
		count++;
	}
	
	std::cout << count;

	return 0;
}