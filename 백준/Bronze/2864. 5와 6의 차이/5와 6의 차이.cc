#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

std::pair<int, int> MyConvert(int _n)
{
	int max = 0, min = 0;
	int count = 0;
	int target = _n;
	while (target > 0)
	{
		int maxTemp = target % 10;
		int minTemp = target % 10;

     	if (maxTemp == 5)
		{
			max += (6 * pow(10, count));
		}
		else
		{
			max += (maxTemp * pow(10, count));
		}


		if (minTemp == 6)
		{
			min += (5 * pow(10, count));
		}
		else
		{
			min += (minTemp * pow(10, count));
		}

		count++;
		target /= 10;
	}

	return std::make_pair(min, max);
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, m;

	std::cin >> n >> m;

	std::pair<int,int> nRes = MyConvert(n);
	std::pair<int,int> mRes = MyConvert(m);

	std::pair<int, int> totalRes = std::make_pair(nRes.first + mRes.first, nRes.second + mRes.second);

	std::cout << totalRes.first << " " << totalRes.second;

	return 0;
}