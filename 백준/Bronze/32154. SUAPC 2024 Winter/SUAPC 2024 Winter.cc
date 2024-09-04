#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	char group[10][14] = { { 11, 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'J', 'L', 'M'},
		{9, 'A', 'C', 'E','F','G','H','I','L','M'},
		{9, 'A', 'C', 'E', 'F', 'G', 'H', 'I', 'L', 'M'},
		{9, 'A', 'B', 'C', 'E', 'F', 'G', 'H', 'L', 'M'},
		{8, 'A', 'C', 'E', 'F', 'G', 'H', 'L', 'M'},
		{8, 'A', 'C', 'E', 'F', 'G', 'H', 'L', 'M'},
		{8, 'A', 'C', 'E', 'F', 'G', 'H', 'L', 'M'}, 
		{8, 'A', 'C', 'E', 'F', 'G', 'H', 'L', 'M'},
		{8, 'A', 'C', 'E', 'F', 'G', 'H', 'L', 'M'},
		{8, 'A', 'B', 'C', 'F', 'G', 'H', 'L', 'M'}};

	int n, loc = 0;
	std::cin >> n;

	std::cout << (int)group[n - 1][loc++] << '\n';

	while (true)
	{
		char temp = group[n - 1][loc++];
		if (temp == '\0')
		{
			break;
		}
		
		std::cout << temp << " ";
	}

	return 0;
}