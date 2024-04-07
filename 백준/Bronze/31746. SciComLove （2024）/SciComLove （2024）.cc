#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;
	std::cin >> n;
	 
	if (n % 2 == 0)
	{
		std::cout << "SciComLove";
	}
	else
	{
		std::cout << "evoLmoCicS";
	}

	return 0;
}