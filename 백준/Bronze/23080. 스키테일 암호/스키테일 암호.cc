#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int n;
	std::string s;

	std::cin >> n >> s;

	int count = 0;

	while (s.size() > count)
	{
		std::cout << s[count];
		count += n;
	}

	return 0;
}