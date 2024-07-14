#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int w, h;
	std::cin >> w >> h;

	w *= 100;
	h *= 100;

	int result = w < h ? w : h;

	std::cout << result / 2;
	
	return 0;
}