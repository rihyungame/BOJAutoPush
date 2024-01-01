#include <iostream>
#include <string>

int main()
{
	std::string s;

	int n, count, two_num;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		std::cin >> n;

		s = std::to_string(n);
		two_num = (s[2] - '0') * 10 + (s[3] - '0');
		n++;

		if (n % two_num == 0)
		{
			std::cout << "Good";
		}
		else
		{
			std::cout << "Bye";
		}

		std::cout << '\n';
	}

	return 0;
}