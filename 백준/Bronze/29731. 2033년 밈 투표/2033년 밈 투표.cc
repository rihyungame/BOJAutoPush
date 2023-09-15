#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> stringVector = 
	{
		"Never gonna give you up",
		"Never gonna let you down",
		"Never gonna run around and desert you",
		"Never gonna make you cry",
		"Never gonna say goodbye",
		"Never gonna tell a lie and hurt you",
		"Never gonna stop"
	};

	std::string answer = "No";

	int count;
	std::string inputString;

	std::cin >> count;
	std::cin.ignore();

	for (int i = 0; i < count; i++)
	{
		bool isInclude = false;
		std::getline(std::cin, inputString);

		for (std::string s : stringVector)
		{
			if (inputString == s)
			{
				isInclude = true;
				break;
			}
		}

		if (isInclude == false)
			answer = "Yes";
	}

	std::cout << answer;
	return 0;
}