#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int count, start_h, height, loc = 0;
	std::vector<int> heights;
	std::vector<int>::iterator min_itr;

	std::cin >> count >> start_h;

	for (int i = 0; i < count; i++)
	{
		int height;
		std::cin >> height;
		heights.push_back(height);
	}

	std::sort(heights.begin(), heights.end());
	height = start_h;

	while (true)
	{
		loc = std::min_element(heights.begin() + loc, heights.end()) - heights.begin();

		if (loc == heights.size())
		{
			break;
		}

		if (height >= heights[loc])
		{
			height++;
			loc++;
		}
		else
		{
			break;
		}
	}

	std::cout << height;

	return 0;
}