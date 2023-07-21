#include <iostream>
#include <climits>

int main() {
	int count,even_num_total = 0, even_num_min = INT_MAX;
	std::cin >> count;

	for (int i = 0; i < count; i++) {
		for (int j = 0; j < 7; j++)
		{
			int n;
			std::cin >> n;
			if (n % 2 == 0) {
				even_num_total += n;
				if (even_num_min > n)
					even_num_min = n;
			}
		}
		std::cout << even_num_total << " " << even_num_min << std::endl;
		even_num_total = 0; 
		even_num_min = INT_MAX;
	}
	return 0;
}