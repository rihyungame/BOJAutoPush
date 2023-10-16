#include <iostream>

int main()
{
	int count;
	int count_odd = 0, count_even = 0;

	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int n;
		std::cin >> n;
		
		if (n % 2)
			count_odd++;
		else
			count_even++;
	}

	if (count_even > count_odd)
		std::cout << "Happy";
	else
		std::cout << "Sad";

	return 0;
}