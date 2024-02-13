#include <iostream>

int main()
{
	int n, w, h, l;
	std::cin >> n >> w >> h >> l;
	
	int max = (w / l) * (h / l);

	max = max > n ? n : max;
	std::cout << max;

	return 0;
}