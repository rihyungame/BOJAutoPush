#include <iostream>
#include <climits>
#include <cmath>

int main()
{
	int start, end, low, mid, high;

	std::cin >> start >> end >> low >> mid >> high;

	if (start < 0)
	{
		std::cout << abs(start) * low + mid + high * end;
	}
	else
	{
		std::cout << (end - start) * high;
	}

	return 0;
}