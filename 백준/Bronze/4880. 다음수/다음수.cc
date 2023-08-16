#include <iostream>

int main() {
	int n1, n2, n3;
	while (true) {
		std::cin >> n1 >> n2 >> n3; 
		if (n1 == 0 && n2 == 0 && n3 == 0)
			break;
		else if (n3 - n2 == n2 - n1)
			std::cout << "AP" << " " << 2 * n3 - n2 << '\n';
		else if (n3 / n2 == n2 / n1)
			std::cout << "GP" << " " <<  n3 * n3 / n2 <<'\n';
		else
			break;
	}
	return 0;
}
