#include <iostream>

int main()
{
	int count;
	std::cin >> count;
	for (int i = 0; i < count; i++)
	{
		int n1, n2;
		std::cin >> n1 >> n2;
		std::cout << "Case " << i + 1 << ": " << n1 + n2 << '\n';
	}

	return 0;
}