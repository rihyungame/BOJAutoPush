#include <iostream>
#include <string>
int main()
{
	int count, total = 0;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		std::string s;
		std::cin >> s;
		if (s == "Poblano")
			total += 1500;
		else if (s == "Mirasol")
			total += 6000;
		else if (s == "Serrano")
			total += 15500;
		else if (s == "Cayenne")
			total += 40000;
		else if (s == "Thai")
			total += 75000;
		else if (s == "Habanero")
			total += 125000;
	}
	std::cout << total;
	return 0;
}