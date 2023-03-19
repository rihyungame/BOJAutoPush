#include <iostream>

int main() {
	int n;
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);

	std::cin >> n;
	int* temp1 = new int[n];
	int* temp2 = new int[n];

	for (int i = 0; i < n; i++) {
		std::cin >> temp1[i] >> temp2[i];
	}

	for (int i = 0; i < n; i++) {
		std::cout << "Case #" << i+1 << ": " << temp1[i] << " + " << temp2[i]
			<< " = " << temp1[i] + temp2[i] << "\n";
	}

	return 0;
}