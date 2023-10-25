#include <iostream>

int main()
{
	for (int i = 0; i < 2; i++)
	{
		int t, f, s, p, c;
		std::cin >> t >> f >> s >> p >> c;
		std::cout << t * 6 + f * 3 + s * 2 + p + c * 2 << ' ';
	}
	return 0;
}