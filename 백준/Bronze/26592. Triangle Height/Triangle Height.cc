#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	double a, b, h;
	int count;

	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		std::cin >> a >> b;

		h = 2 * a / b;

		std::cout << std::fixed;
		std::cout.precision(2);

		std::cout << "The height of the triangle is " << h << " units" << '\n';
	}
    
	return 0;
}