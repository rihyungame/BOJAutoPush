#include <iostream>

int main() {
	int birth_max, birth_min, death_min, death_max;

	while (true) {
		std::cin >> birth_max >> birth_min >> death_min >> death_max ;

		if (birth_max == 0 && birth_min == 0 && death_max == 0 && death_min == 0)
			break;

		if (birth_min <= 0 && death_min <= 0)
			std::cout << abs(birth_min) - abs(death_min);
		else if (birth_min >= 0 && death_min >= 0)
			std::cout << abs(death_min) - abs(birth_min);
		else if (birth_min <= 0 && death_min >= 0)
			std::cout << abs(birth_min) + death_min;

		std::cout << " ";
		
		if (birth_max <= 0 && death_max <= 0)
			std::cout << abs(birth_max) - abs(death_max);
		else if (birth_max >= 0 && death_max >= 0)
			std::cout << abs(death_max) - abs(birth_max);
		else if (birth_max <= 0 && death_max >= 0)
			std::cout << abs(birth_max) + death_max;

		std::cout << std::endl;

	}
	return 0;
}
