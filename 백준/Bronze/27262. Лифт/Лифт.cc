#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, k, a, b;
	std::cin >> n >> k >> a >> b;

	std::cout << (k - 2 + n) * b << " " << (n - 1) * a;

	return 0;
}