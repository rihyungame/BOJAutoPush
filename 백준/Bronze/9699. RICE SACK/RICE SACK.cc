#include <iostream>

int main() {
	int count;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
		int max = 0;
		for (int j = 0; j < 5; j++) {
			int n;
			std::cin >> n;
			if (max < n)
				max = n;
		}
		std::cout << "Case #" << i+1 <<": " << max << std::endl;
	}
	return 0;
}