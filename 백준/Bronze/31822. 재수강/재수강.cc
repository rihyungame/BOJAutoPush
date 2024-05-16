#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string s;
	std::cin >> s;

	int count, total = 0;
	std::cin >> count;

	std::string answer = s.substr(0,5);

	for (int i = 0; i < count; i++)
	{
		std::string temp;
		std::cin >> temp;

		if (temp.substr(0, 5) == answer)
		{
			total++;
		}
	}

	std::cout << total;
	return 0;
}