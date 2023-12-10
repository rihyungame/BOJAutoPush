#include <iostream>
#include <string>

int main()
{
	std::string s;
	int b_count = 0, c_count = 0;
	size_t loc = 0;

	std::cin >> s;

	while (true)
	{
		loc = s.find('B', loc);

		if (loc == std::string::npos)
		{			
			break;
		}

		b_count++;
		loc = s.find('B', loc + 1);

	}

	loc = 0;

	while (true)
	{
		loc = s.find('C', loc);

		if (loc == std::string::npos)
		{
			break;
		}

		c_count++;
		loc = s.find('C', loc + 1);
	}
	
	std::cout << b_count / 2 + c_count / 2;
	return 0;
}