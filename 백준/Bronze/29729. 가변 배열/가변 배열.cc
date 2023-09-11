#include <iostream>

int main()
{
	int size = 0, capacity, add, del;
	std::cin >> capacity >> add >> del;

	for (int i = 0; i < add + del; i++)
	{
		int n;
		std::cin >> n;
		if (n)
		{
			size++;
			if (size > capacity)
				capacity *= 2;
		}
		else
		{
			size--;
		}
	}

	std::cout << capacity;
}