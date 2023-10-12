#include <iostream>

int main()
{
	int count, loc = 0;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int n;
		std::cin >> n;
		loc += n;
	}

	if (loc == 0)
		std::cout << "Stay";
	else if (loc < 0)
		std::cout << "Left";
	else if (loc > 0)
		std::cout << "Right";

	return 0;
}