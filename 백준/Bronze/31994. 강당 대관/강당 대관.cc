#include <iostream>
#include <string>
#include <climits>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string s;
	int max = INT_MIN;

	for (int i = 0; i < 7; i++)
	{
		std::string sTemp;
		int iTemp;

		std::cin >> sTemp >> iTemp;

		if (max < iTemp)
		{
			max = iTemp;
			s = sTemp;
		}
	}

	std::cout << s;

	return 0;
}