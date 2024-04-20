#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int count;
	std::cin >> count;

	std::string s;
	std::cin >> s;

	bool isContinuity = true;

	char start = s[0];
	for (std::string::size_type i = 0; i < s.size(); i++)
	{
		if (start != s[i])
		{
			isContinuity = false;
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