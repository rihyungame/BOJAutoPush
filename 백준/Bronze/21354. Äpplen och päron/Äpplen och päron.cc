#include <iostream>

int main() 
{
	int pear, apple;
	std::cin >> apple >> pear;

	apple *= 7;
	pear *= 13;

	if (apple == pear)
	{
		std::cout << "lika";
	}
	else if (apple > pear)
	{
		std::cout << "Axel";
	}
	else if (apple < pear)
	{
		std::cout << "Petra";
	}

	return 0;
}