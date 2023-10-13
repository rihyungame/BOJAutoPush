#include <iostream>

int main()
{
	int t1, e1, f1;
	int t2, e2, f2;
	int total_p1, total_p2;

	std::cin >> t1 >> e1 >> f1;
	std::cin >> t2 >> e2 >> f2;

	total_p1 = t1 * 3 + e1 * 20 + f1 * 120;
	total_p2 = t2 * 3 + e2 * 20 + f2 * 120;

	if (total_p1 == total_p2)
		std::cout << "Draw";
	else if (total_p1 > total_p2)
		std::cout << "Max";
	else if (total_p1 < total_p2)
		std::cout << "Mel";

	return 0;
}