#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int count;

	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int n;
		double d, a, b, f;
		std::cin >> n >> d >> a >> b >> f;

		std::cout << n << " " << d / (a + b) * f << '\n';
	}

	return 0;
}