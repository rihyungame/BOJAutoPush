#include <iostream>
#include <string>

int main()
{
	int count, left_count;
	std::string s, temp;
	std::cin >> count;
	std::cin >> s;

	if (count >= 5)
	{
		left_count = count - 5;
		for (std::string::reverse_iterator it = s.rbegin(); it != s.rend() - left_count; it++)
			temp += *it;

		for (std::string::reverse_iterator it = temp.rbegin(); it != temp.rend(); it++)
			std::cout << *it;
	}
	
	return 0;
}