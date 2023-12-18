#include <iostream>

int main()
{
	int count;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int n, answer = 0, now = 1, pre = 0;
		std::cin >> n;

		if (n == 0)
		{
			pre = 1;
			answer = 0;
		}
		else if (n == 1)
		{
			answer = 1;
		}
		else
		{		

			for (int i = 0; i < n - 1; i++)
			{
				int temp = now;
				now = now + pre;
				pre = temp;
			}
			answer = now;
		}

		std::cout << pre << ' ' << answer << '\n';
	}	
	
	return 0; 
}
