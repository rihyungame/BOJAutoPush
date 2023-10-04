#include <iostream>

int main()
{
	double s1, s2;
	std::cin >> s1 >> s2;

	double result = s2 / 2;

	if (s1 >= result)
		std::cout << "E";
	else
		std::cout << "H";

	return 0;
}