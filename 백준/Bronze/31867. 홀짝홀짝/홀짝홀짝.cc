#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	int odd = 0, even = 0;

	for (std::string::size_type i = 0; i < s.size(); i++)
	{
		int temp = s[i] - '0';

		if (temp % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}

	if (even > odd)
	{
		std::cout << 0;
	}
	else if (odd > even)
	{
		std::cout << 1;
	}
	else
	{
		std::cout << -1;
	}
    
	return 0;
}