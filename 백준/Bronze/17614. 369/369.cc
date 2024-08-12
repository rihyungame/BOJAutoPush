#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count, result = 0;
	std::cin >> count;

	std::string temp;

	for (int i = 1; i <= count; i++)
	{
		temp = std::to_string(i);

		for (std::string::size_type j = 0; j < temp.size(); j++)
		{
			if (temp[j] == '3')
			{
				result++;
			}
			else if (temp[j] == '6')
			{
				result++;
			}
			else if (temp[j] == '9')
			{
				result++;
			}
		}
	}

	std::cout << result;
	return 0;
}