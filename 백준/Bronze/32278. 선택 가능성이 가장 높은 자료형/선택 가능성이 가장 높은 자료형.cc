#include <iostream>
#include <climits>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	long long n;
	std::cin >> n;

	if (n <= SHRT_MAX && n >= -SHRT_MAX - 1)
	{
		std::cout << "short";
	}
	else if (n <= INT_MAX && n >= -INT_MAX - 1)
	{
		std::cout << "int";
	}
	else if (n <= LLONG_MAX && n >= -LLONG_MAX - 1)
	{
		std::cout << "long long";
	}

    return 0;
}