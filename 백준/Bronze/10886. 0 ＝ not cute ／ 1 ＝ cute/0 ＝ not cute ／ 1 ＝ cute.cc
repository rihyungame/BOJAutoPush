#include <iostream>

int main()
{
	int n, yes_cute = 0	, no_cute = 0;
	std::cin >> n;	

	for (int i = 0; i < n; ++i)
	{
		int answer;
		std::cin >> answer;
		
		if (answer == 1)
		{
			yes_cute++;
		}
		else if (answer == 0)
		{
			no_cute++;
		}
	}

	if (yes_cute > no_cute)
	{
		std::cout << "Junhee is cute!";
	}
	else if (no_cute > yes_cute)
	{
		std::cout << "Junhee is not cute!";
	}

	return 0;
}