#include <iostream>

int main()
{
	int n;
	long long s;

	while (std::cin >> n >> s)
		std::cout << s / (n + 1) << '\n';

	return 0;
}