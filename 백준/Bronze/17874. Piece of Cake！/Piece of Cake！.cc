#include <iostream>

int main()
{
	int side, h, v;
	std::cin >> side >> h >> v;

	int max_width = side - h > h ? side - h : h;
	int max_height = side - v > v ? side - v : v;

	std::cout << max_width * max_height * 4;

	return 0;
}