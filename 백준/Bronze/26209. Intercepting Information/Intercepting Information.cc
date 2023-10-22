#include <iostream>

int main()
{
	bool flag_fail = false;

	for (int i = 0; i < 8; i++)
	{
		int n;
		std::cin >> n;
		if (n == 9)
			flag_fail = true;
	}

	if (flag_fail)
		std::cout << "F";
	else
		std::cout << "S";

	return 0;
}