#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;
	std::cin >> n;

	std::string s1, s2;
	std::cin >> s1 >> s2;

	int dist = 0;
	for (int i = 0; i < n; i++)
	{
		if (s1[i] != s2[i])
		{
			dist++;
		}
	}

	std::cout << dist;

	return 0;
}