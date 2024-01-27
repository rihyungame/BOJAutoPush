#include <iostream>

int main()
{
	int n, me, others;
	std::cin >> n >> me;

	int count = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		std::cin >> others;
		
		if (me < others)
		{
			count++;
		}
	}

	std::cout << count + 1;
	return 0;
}