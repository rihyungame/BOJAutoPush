#include <iostream>
#include <cmath>

int main()
{
	double weight, height;
	double total;
	
	std::cin >> weight >> height;
	total = weight / pow(height, 2);

	if (total > 25.0)
		std::cout << "Overweight";
	else if (total < 18.5)
		std::cout << "Underweight";
	else
		std::cout << "Normal weight";

	return 0;

}