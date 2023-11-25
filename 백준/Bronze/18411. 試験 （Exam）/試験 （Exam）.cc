#include <iostream>
#include <vector>

int main()
{
	std::vector<int> scores;
	int n;
	
	for (int i = 0; i < 3; i++)
	{
		std::cin >> n;
		scores.push_back(n);
	}
	
	for (int i = 0; i < 2; i++)
	{
		if (scores[i] < scores[i + 1])
		{
			int temp = scores[i];
			scores[i] = scores[i + 1];
			scores[i + 1] = temp;
		}
	}

	std::cout << scores[0] + scores[1];

	return 0;
}