#include <iostream>
#include <string>

int main()
{
	int n, count = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::string s;
		size_t pos;

		std::cin >> s;

		pos = s.find("01");
		if (pos != std::string::npos)
		{
			count++;
			continue;
		}

		pos = s.find("OI");
		if (pos != std::string::npos)
		{
			count++;
			continue;
		}
	}

	std::cout << count;

	return 0;
}