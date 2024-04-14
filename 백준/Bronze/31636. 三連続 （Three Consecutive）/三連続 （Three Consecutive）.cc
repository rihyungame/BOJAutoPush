#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string s;
	int dummy;

	std::cin >> dummy >> s;

	bool isContinuity = false;
	int count = 0;

	for (std::string::size_type i = 0; i < s.size(); i++)
	{
		if (s[i] == 'o')
		{
			count++;
		}
		else
		{
			count = 0;
		}

		if (count >= 3)
		{
			isContinuity = true;
		}
	}

	if (isContinuity)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}

	return 0;
}