#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::cin >> s;
	
	bool isThereY = false;
	int y_count = 0;
	int count = 0;

	for (std::string::iterator itr = s.begin(); itr != s.end(); ++itr)
	{
		if (*itr == 'y')
		{
			y_count++;
			isThereY = true;
		}

		if (*itr == 'a' || *itr == 'e' || *itr == 'i' || *itr == 'o' || *itr == 'u')
		{
			count++;
		}
	}

	if (isThereY)
	{
		std::cout << count << " " << count + y_count;
	}
	else
	{
		std::cout << count << " " << count;
	}

	return 0;
}