#include <iostream>

int main() {
	int s, k, h;

	std::cin >> s >> k >> h;

	if ((s + k + h) >= 100)
		std::cout << "OK";
	else {
		if (s < k && s < h)
			std::cout << "Soongsil";
		else if (k < s && k < h)
			std::cout << "Korea";
		else if (h < s && h < k)
			std::cout << "Hanyang";
	}
	return 0;
}