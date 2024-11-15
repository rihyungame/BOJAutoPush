#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int target = 2024;

	int n;
	std::cin >> n;

	if (n % 2024 == 0 && n <= 100000)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}

    return 0;
}