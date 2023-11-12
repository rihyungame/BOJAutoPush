#include <iostream>
#include <string>

int FindFunc(char temp, std::string s)
{
	int count = 0;
	int found = s.find(temp);

	if (found != std::string::npos)
		count++;

	while (found != std::string::npos)
	{
		found = s.find(temp, found + 1);
		if (found != std::string::npos)
			count++;
	}

	return count;
}

int main()
{
	std::string s;
	std::cin >> s;

	int total_length = s.size();
	int colon_length = FindFunc(':', s);
	int under_bar_length = FindFunc('_', s);

	std::cout << total_length + colon_length + under_bar_length * 5;

	return 0;
}