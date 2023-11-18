#include <iostream>

int main()
{
	int count;
	
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int n1, n2, n3;
		
		std::cin >> n1 >> n2 >> n3;

		int min = n1;

		if (n1 > n2)
			min = n2;
		if (min > n3)
			min = n3;
		if (min > n1)
			min = n1;
		
		std::cout << min << '\n';
	}

	return 0;
}