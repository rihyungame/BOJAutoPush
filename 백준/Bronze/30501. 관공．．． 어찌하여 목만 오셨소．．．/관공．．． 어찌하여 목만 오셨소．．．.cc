#include <iostream>
#include <string>

int main()
{
	int count;
	std::string result;
	std::cin >> count;
	
	for (int i = 0; i < count; i++)
	{
		std::string s;
		std::cin >> s;

		if (s.find('S') != std::string::npos)
		{
			result = s;
		}
	}

	std::cout << result;

	return 0;
}