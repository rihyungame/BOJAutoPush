#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	long long n;
	std::cin >> n;
	
	std::cout << n;

    return 0;
}