#include <iostream>
#include <vector>

int main()
{
	std::vector<int> group = {64, 32, 16, 8, 4, 2, 1};

	int n, count = 0, sum = 0;
	bool is_answer = false;
	std::cin >> n;

	for (int i = 0; i < group.size(); i++)
	{

		if (group[i] > n)
		{
			continue;
		}
		else if (group[i] == n)
		{
			count = 1;
			break;
		}
		else if (group[0] < n || n <= 0)
		{
			break;
		}
		
		if (is_answer)
		{
			break;
		}

		sum = group[i];
		count++;

		for (int j = i + 1; j < group.size(); j++)
		{
			sum += group[j];
			count++;

			if (sum > n)
			{
				count--;
				sum -= group[j];
				continue;
			}
			else if (sum == n)
			{
				is_answer = true;
				break;
			}
		}
	}

	std::cout << count;
}